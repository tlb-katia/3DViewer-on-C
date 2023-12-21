#include "settigs_viewer.h"

settigs_viewer::settigs_viewer()
{

}

QColor settigs_viewer::getColorBackground()
{
    return colorBackground;
}

void settigs_viewer::setColorBackground(QColor color)
{
    if(color.isValid()){
        colorBackground = color;
    }
}

QColor settigs_viewer::getColorVertex()
{
    return colorVertex;
}

void settigs_viewer::setColorVertex(QColor color)
{
    if(color.isValid()){
        colorVertex = color;
    }
}

QColor settigs_viewer::getColorFaces()
{
    return colorFaces;
}

void settigs_viewer::setColorFaces(QColor color)
{
    if(color.isValid()){
        colorFaces = color;
    }
}

int settigs_viewer::getTypeProjection()
{
    return typeProjection;
}

void settigs_viewer::setTypeProjection(int projection)
{
    typeProjection = projection;
}

int settigs_viewer::getTypeFaceLine()
{
    return typeFacesLine;
}

void settigs_viewer::setTypeFaceLine(int line)
{
    typeFacesLine = line;
}

double settigs_viewer::getWidthFaces()
{
    return widthFacesLine;
}

void settigs_viewer::setWidthFaces(double width)
{
    if(width < 0.001)
        widthFacesLine = 0.001;
    else
        widthFacesLine = width;
}

int settigs_viewer::getStateVertexShow()
{
    return stateVertexShow;
}

void settigs_viewer::setStateVertexShow(int state)
{
    stateVertexShow = state;
}

double settigs_viewer::getSizeVertex()
{
    return sizeVertexPoint;
}

void settigs_viewer::setSizeVertex(double size)
{
    if(size < 0.001)
        sizeVertexPoint = 0.001;
    else
        sizeVertexPoint = size;
}

void settigs_viewer::saveSettings(QString org_name,QString app_name)
{
    QSettings settings(org_name, app_name);

    if(getTypeProjection() == FRUST_PROJECTION) settings.setValue(KEY_PROJECTION, FRUST_PROJECTION);
    else  settings.setValue(KEY_PROJECTION, ORTH_PROJECTION);

    if(getTypeFaceLine() == DASHED_LINE) settings.setValue(KEY_TYPE_LINE, DASHED_LINE);
    else settings.setValue(KEY_TYPE_LINE, BASE_LINE);

    settings.setValue(KEY_COLOR_BACK, getColorBackground());
    settings.setValue(KEY_COLOR_VERT, getColorVertex());
    settings.setValue(KEY_COLOR_EDGE, getColorFaces());


    settings.setValue(KEY_EDGE_W, getWidthFaces());
    settings.setValue(KEY_VERT_W, getSizeVertex());

    settings.setValue(KEY_STATE_VERTEX, getStateVertexShow());

    settings.sync();
}

void settigs_viewer::loadSettings(QString org_name, QString app_name)
{
    QSettings settings(org_name, app_name);
    /*getColor*/
    setColorBackground(settings.value(KEY_COLOR_BACK, defaultColorBackground).value<QColor>());

    setColorVertex(settings.value(KEY_COLOR_VERT, colorDefault).value<QColor>());

    setColorFaces(settings.value(KEY_COLOR_EDGE, colorDefault).value<QColor>());

    /*getProjection*/
    setTypeProjection(settings.value(KEY_PROJECTION, 0).toInt());
    /*getTypeLine*/
    setTypeFaceLine(settings.value(KEY_TYPE_LINE, 0).toInt());
    /*getWidth*/
    setWidthFaces(settings.value(KEY_EDGE_W, 0).toFloat());
    setSizeVertex(settings.value(KEY_VERT_W, 0).toFloat());

    /*getTypeVertex*/
    setStateVertexShow(settings.value(KEY_STATE_VERTEX, 0).toInt());
}
