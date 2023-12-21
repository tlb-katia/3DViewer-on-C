#include "glwidget.h"
#include "QDebug"

GLWidget::GLWidget(QWidget *parent) :
    QOpenGLWidget(parent)
{
    setWindowTitle("3D Viewer");
}

void GLWidget::initializeGL()
{
    updateBackground();
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LINE_STIPPLE);
    glLoadIdentity();
}

void GLWidget::paintGL()
{
    updateBackground(); /*обновляем параметры background*/
    glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
      if (vertex != NULL && faces != NULL) {
          drawRange = vertex->max_ver_num*vertex->max_ver_num;
          upateProjection();
          updateFaces(); /*обновляем параметры faces*/

          glTranslated(x_trans, y_trans, z_trans);
          glRotatef(xRot, 1, 0, 0);
          glRotatef(yRot, 0, 1, 0);
          glRotatef(zRot, 0, 0, 1);
          glEnableClientState(GL_VERTEX_ARRAY);
          glVertexPointer(3, GL_DOUBLE, 0, vertex->array);
          glDrawElements(GL_LINES, faces->count, GL_UNSIGNED_INT, faces->array);

          updateVertex();/*обновлем параметры vertex*/

          glDisableClientState(GL_VERTEX_ARRAY);
          update();
      }
}

void GLWidget::resizeGL(int w, int h)
{
    glViewport(0, 0, w, h);
}

void GLWidget::updateBackground()
{
    QColor bcgColor = settingView.getColorBackground();
    glClearColor(bcgColor.redF(),bcgColor.greenF(), bcgColor.blueF(),bcgColor.alphaF());
    glClear(GL_COLOR_BUFFER_BIT);
}

void GLWidget::updateFaces()
{
    glLineStipple(2, settingView.getTypeFaceLine());
    glLineWidth(settingView.getWidthFaces());
    QColor colorF = settingView.getColorFaces();
    glColor3d(colorF.redF(),  colorF.greenF(), colorF.blueF());
}

void GLWidget::updateVertex()
{
    int state = settingView.getStateVertexShow();
    if(state != settingView.NONE_VERT) {
        if(state == settingView.CIRCLE_VERT) {
            glEnable(GL_POINT_SMOOTH);

        } else if(state == settingView.SQUARE_VERT) {
            glDisable(GL_POINT_SMOOTH);
        }
    glPointSize(settingView.getSizeVertex());
    QColor color = settingView.getColorVertex();
    glColor3d( color.redF(),  color.greenF(), color.blueF());
    glDrawArrays(GL_POINTS, 0, vertex->rows / 3);
    }
}

void GLWidget::upateProjection()
{

    int type = settingView.getTypeProjection();
    if(type == settingView.ORTH_PROJECTION){ /*change projection*/
        if(normalizeScale) scaleModel(10,0);
         drawRange = vertex->max_ver_num*vertex->max_ver_num;
         glOrtho(-drawRange, drawRange, -drawRange, drawRange, -drawRange,
                 drawRange*5);
         normalizeScale = false;
    } else if(type == settingView.FRUST_PROJECTION) {
       if(!normalizeScale)scaleModel(0.2,-1);
       drawRange = vertex->max_ver_num*vertex->max_ver_num;
       glFrustum(-drawRange, drawRange, -drawRange, -drawRange, drawRange,
                 drawRange*5);
       normalizeScale = true;
    }
}




void GLWidget::mousePressEvent(QMouseEvent *mouse) {
  start_x = mouse->pos().x();
  start_y = mouse->pos().y();
}



void GLWidget::mouseMoveEvent(QMouseEvent *mouse) {
    if (mouse->buttons() & Qt::LeftButton) {
      yRot = yRot + (mouse->pos().x() - start_x);
      xRot = xRot + (mouse->pos().y() - start_y);
    } else if (mouse->buttons() & Qt::RightButton) {
      x_trans = x_trans + (mouse->pos().x() - start_x) / 200 * vertex->max_ver_num;
      y_trans = y_trans - (mouse->pos().y() - start_y) / 200 * vertex->max_ver_num;
    }
    start_x = mouse->pos().x();
    start_y = mouse->pos().y();
    update();
}

void GLWidget::translateModel(double x, double y, double z)
{
    if (vertex && faces){
//        if(x != 0) x_trans = x_trans + (x - start_x) / 200 * vertex->max_ver_num;
//        if(y != 0) y_trans = y_trans - (y - start_y) / 200 * vertex->max_ver_num;
//        if(z != 0) z_trans = z_trans + (z - start_z) / 200 * vertex->max_ver_num;
        translate_by(&vertex,{x,y,z});
    }
}

void GLWidget::rotateModel(double x, double y, double z)
{
    if (vertex && faces){
        if(x != 0) rotation_by_ox(&vertex, x);;
        if(y != 0) rotation_by_oy(&vertex, y);
        if(z != 0) rotation_by_oz(&vertex, z);
    }
}

void GLWidget::wheelEvent(QWheelEvent *event)
{
    if (vertex && faces) {
           double angle = event->angleDelta().y()/100;
           double step = 1.0 + angle*0.1;
           s21_resize(vertex, step);
           update();
//           qDebug() << step;
       }


}

void GLWidget::scaleModel(double step, double angle)
{
    if (vertex && faces) {
        double shift = step + angle*0.1;
        s21_resize(vertex, shift);
        qDebug() << shift;
    }
    update();
}


