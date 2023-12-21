#ifndef SETTIGS_VIEWER_H
#define SETTIGS_VIEWER_H

#include <QColor>
#include <QSettings>
#include <GLUT/glut.h> /*под вопросом правильность подключения*/

#define KEY_COLOR_BACK "ColorBack"
#define KEY_COLOR_EDGE "ColorEdge"
#define KEY_COLOR_VERT "ColorVert"
#define KEY_PROJECTION "ROJECTION"
#define KEY_TYPE_LINE "TypeLine"
#define KEY_VERT_W "VertWidth"
#define KEY_EDGE_W "EdgeWidth"
#define KEY_STATE_VERTEX "TypeVertex"


class settigs_viewer
{
private:
    QColor colorBackground = {0,0,0,0};
    QColor colorVertex = {1,1,1,1};
    QColor colorFaces = {1,1,1,1};

    int typeProjection = 0;
    int typeFacesLine = static_cast<int>(TypeFaceLine::BASE_LINE);
    int stateVertexShow = static_cast<int>(StateVertexShow::NONE_VERT);;

    double widthFacesLine = 1;
    double sizeVertexPoint = 1;


public:
    settigs_viewer();
    const QColor defaultColorBackground = QColor(255,255,255);
    const QColor colorDefault = QColor(0,0,0);
    QColor getColorBackground();
    void setColorBackground(QColor color);

    QColor getColorVertex();
    void setColorVertex(QColor color);

    QColor getColorFaces();
    void setColorFaces(QColor color);

    enum TypeProjection: int {ORTH_PROJECTION = 0, FRUST_PROJECTION = 1};
    int getTypeProjection();
    void setTypeProjection(int projection);

    enum TypeFaceLine : int {BASE_LINE = 0b1111111111111111,DASHED_LINE = 0x1C47};
    int getTypeFaceLine();
    void setTypeFaceLine(int line);

    double getWidthFaces();
    void setWidthFaces(double width);

    enum StateVertexShow: int {NONE_VERT = 0,CIRCLE_VERT = 1, SQUARE_VERT = 2};
    int getStateVertexShow();
    void setStateVertexShow(int state);

    double getSizeVertex();
    void setSizeVertex(double size);

    void saveSettings(QString org_name,QString app_name);
    void loadSettings(QString org_name,QString app_name);

};

#endif // SETTIGS_VIEWER_H
