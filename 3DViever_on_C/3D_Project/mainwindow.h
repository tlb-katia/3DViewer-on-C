#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColorDialog>
#include <QColor>
#include <QPalette>
#include <QDebug>
#include <QTextEdit>
#include <QSettings>
#include <QMessageBox>
#include "settigs_viewer.h"
//#include "glwidget.h"

#define GL_SILENCE_DEPRECATION

#define ORGANIZATION_NAME "21_school"
#define ORGANIZATION_DOMAIN "https://21-school.ru/"
#define APPLICATION_NAME "3DViewer_v1"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_released();

    void on_projectionOrtho_clicked();

    void on_projectionFrustum_clicked();

    void on_radioBSolid_clicked();

    void on_radioBDashed_clicked();

    void on_spinWidthLine_valueChanged(double arg1);

    void on_pushButton_24_clicked();

    void on_chooseColorVert_clicked();

    void on_chooseColorEdge_clicked();

    void on_doubleSpinVert_valueChanged(double arg1);

    void on_vertexTypeSquare_clicked();

    void on_vertexTypeCicle_clicked();

    void on_vertexTypeNone_clicked();

    void on_scalePlus_pressed();

    void on_scaleMinus_pressed();


    void on_translateYRight_clicked();

    void on_translateYLeft_clicked();

    void on_translateXRight_clicked();

    void on_translateXLeft_clicked();

    void on_stepTranslate_valueChanged(double arg1);

    void on_translateZRight_clicked();

    void on_translateZLeft_clicked();

    void on_rotateXRight_clicked();

    void on_rotatexLeft_clicked();

    void on_rotateYRight_clicked();

    void on_rotateYLeft_clicked();

    void on_rotateZRight_clicked();

    void on_rotateZLeft_clicked();

    void on_rotateAngle_valueChanged(double arg1);

private:
    Ui::MainWindow *ui;
    void loadSetting();
    QColor getColorDialog();
    void setColorToEditText(QColor color, QTextEdit* editText);
    void closeEvent(QCloseEvent *event);
    double stepTranslete = 0;
    double stepRotate = 0;
};
#endif // MAINWINDOW_H
