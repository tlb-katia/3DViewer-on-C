#ifndef GLWIDGET_H
#define GLWIDGET_H

#define GL_SILENCE_DEPRECATION

#include <QtOpenGLWidgets/qopenglwidget.h>
#include <QWidget>
#include <QMouseEvent>
#include <QFileDialog>
#include <QDir>
#include <QString>
#include <QMessageBox>
#include <QWheelEvent>
#include "QtOpenGL"
#include <QColorDialog>
#include <QColor>
#include <QPalette>
#include <QDebug>
#include "settigs_viewer.h"

extern "C" {
#include "../backend/s21_parser.h"
#include "../backend/transformations.h"
}


class GLWidget : public QOpenGLWidget
{
        Q_OBJECT
private:
    void updateBackground();
    void updateFaces();
    void updateVertex();
    void upateProjection();
    bool normalizeScale = false;

public:
    explicit GLWidget(QWidget *parent = nullptr);

    void initializeGL();
    void paintGL();
    void resizeGL (int w, int h);
    void mousePressEvent(QMouseEvent *mouse);
    void mouseMoveEvent(QMouseEvent *mouse);
    void wheelEvent(QWheelEvent *event);
    Vertex_array *vertex = NULL;
    Faces_array *faces = NULL;

    int drawRange;
    float xRot = 0, yRot = 0, zRot = 0, zoomScale = 0, x_trans = 0, y_trans = 0, z_trans = 0, start_y = 0, start_x = 0,start_z= 0;
    double step = 0;
    settigs_viewer settingView = settigs_viewer();
    void scaleModel(double step, double angle);
    void translateModel(double x, double y, double z);
    void rotateModel(double x, double y, double z);
};

#endif // GLWIDGET_H

