#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadSetting();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_released()
{
    if(ui->GLwidget->vertex != NULL && ui->GLwidget->faces != NULL) {
        freeFaces(&ui->GLwidget->faces);
        freeVertex(&ui->GLwidget->vertex);
    }

    QString filename = QFileDialog::getOpenFileName(this, tr("Choose File"), QDir::currentPath(), tr("*.obj"));

//   QString filename = "Desktop/C8_3DViewer_v1.0-1/src/obj/pyramid.obj";

    if(!filename.isEmpty()) {
        ui->filename->setText(filename);
        QByteArray file = filename.toLocal8Bit();
        char *name = file.data();
        s21_parser(name, &ui->GLwidget->vertex, &ui->GLwidget->faces);
        QString vertexAmount = QString::number((ui->GLwidget->vertex->rows+1)/3);
        QString facesAmount = QString::number((ui->GLwidget->faces->count+1)/2);
        ui->label_3->setText(vertexAmount);
        ui->label_5->setText(facesAmount);
        ui->GLwidget->initializeGL();
    } else {
        ui->filename->setText("ERROR");
    }
}



void MainWindow::on_projectionOrtho_clicked()
{
      ui->GLwidget->settingView.setTypeProjection(settigs_viewer().ORTH_PROJECTION);
}


void MainWindow::on_projectionFrustum_clicked()
{
    ui->GLwidget->settingView.setTypeProjection(settigs_viewer().FRUST_PROJECTION);
}

void MainWindow::loadSetting()
{
    ui->GLwidget->settingView.loadSettings(ORGANIZATION_NAME, APPLICATION_NAME);
    /*getColor*/
    setColorToEditText(ui->GLwidget->settingView.getColorBackground(), ui->ColorBackShow);

    setColorToEditText(ui->GLwidget->settingView.getColorVertex(), ui->ColorVertexShow);

    setColorToEditText(ui->GLwidget->settingView.getColorFaces(), ui->ColorEdgeShow);

    /*getProjection*/
    int projection = ui->GLwidget->settingView.getTypeProjection();
    switch (projection) {
        case 1:
            ui->projectionFrustum->setChecked(true);
            break;
        default:
        ui->projectionOrtho->setChecked(true);
    }
    /*getTypeLine*/
    int typeline = ui->GLwidget->settingView.getTypeFaceLine();
    switch (typeline) {
        case 0x1C47:
            ui->radioBDashed->setChecked(true);
            break;
        default:
        ui->radioBSolid->setChecked(true);
    }
    /*getWidth*/
    ui->spinWidthLine->setValue(ui->GLwidget->settingView.getWidthFaces());
    ui->doubleSpinVert->setValue(ui->GLwidget->settingView.getSizeVertex());
    /*getTypeVertex*/
    int stateVertexShow = ui->GLwidget->settingView.getStateVertexShow();
    switch (stateVertexShow) {
        case 1:
            ui->vertexTypeCicle->setChecked(true);
            break;
        case 2:
            ui->vertexTypeSquare->setChecked(true);
            break;
        default:
        ui->vertexTypeNone->setChecked(true);
    }
    ui->GLwidget->update();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    ui->GLwidget->settingView.saveSettings(ORGANIZATION_NAME, APPLICATION_NAME);
    QMainWindow::closeEvent(event);
}

QColor MainWindow::getColorDialog()
{
    QColorDialog dialog;
    QColor colorValue = dialog.getColor(Qt::white);
    if(!colorValue.isValid()) {
       dialog.close();
       colorValue = QColor(0,0,0);
    }
    return colorValue;
}

void MainWindow::setColorToEditText(QColor color, QTextEdit* editText)
{
    QPalette p = editText->palette();
    p.setColor(QPalette::Base, color);
    editText->setPalette(p);
}

void MainWindow::on_radioBSolid_clicked()
{
    ui->GLwidget->settingView.setTypeFaceLine(settigs_viewer().BASE_LINE);
}


void MainWindow::on_radioBDashed_clicked()
{
    ui->GLwidget->settingView.setTypeFaceLine(settigs_viewer().DASHED_LINE);
}


void MainWindow::on_spinWidthLine_valueChanged(double arg1)
{
     ui->GLwidget->settingView.setWidthFaces(arg1);
}


void MainWindow::on_pushButton_24_clicked()
{   
    QColor colorValue = getColorDialog();
    ui->GLwidget->settingView.setColorBackground(colorValue);
    setColorToEditText(colorValue, ui->ColorBackShow);
    ui->GLwidget->update();
}

void MainWindow::on_chooseColorVert_clicked()
{
    QColor colorValue = getColorDialog();
    ui->GLwidget->settingView.setColorVertex(colorValue);
    setColorToEditText(colorValue, ui->ColorVertexShow);
    ui->GLwidget->update();
}


void MainWindow::on_chooseColorEdge_clicked()
{
    QColor colorValue = getColorDialog();
    ui->GLwidget->settingView.setColorFaces(colorValue);
    setColorToEditText(colorValue, ui->ColorEdgeShow);
    ui->GLwidget->update();
}

void MainWindow::on_doubleSpinVert_valueChanged(double arg1)
{
     ui->GLwidget->settingView.setSizeVertex(arg1);
}

void MainWindow::on_vertexTypeNone_clicked()
{
    ui->GLwidget->settingView.setStateVertexShow(settigs_viewer().NONE_VERT);
}


void MainWindow::on_vertexTypeSquare_clicked()
{
        ui->GLwidget->settingView.setStateVertexShow(settigs_viewer().SQUARE_VERT);
}


void MainWindow::on_vertexTypeCicle_clicked()
{
       ui->GLwidget->settingView.setStateVertexShow(settigs_viewer().CIRCLE_VERT);

}


void MainWindow::on_scalePlus_pressed()
{
    ui->GLwidget->scaleModel(1,0.3);
}


void MainWindow::on_scaleMinus_pressed()
{
    ui->GLwidget->scaleModel(1,-0.3);
}



void MainWindow::on_translateYRight_clicked()
{
    ui->GLwidget->translateModel(0,-stepTranslete,0);
}


void MainWindow::on_translateYLeft_clicked()
{
    ui->GLwidget->translateModel(0,stepTranslete,0);
}


void MainWindow::on_translateXRight_clicked()
{
    ui->GLwidget->translateModel(stepTranslete,0,0);
}


void MainWindow::on_translateXLeft_clicked()
{
    ui->GLwidget->translateModel(-stepTranslete,0,0);
}

void MainWindow::on_translateZRight_clicked()
{
    ui->GLwidget->translateModel(0,0,stepTranslete);
}


void MainWindow::on_translateZLeft_clicked()
{
    ui->GLwidget->translateModel(0,0,-stepTranslete);
//    translate_by(,{0,0,-stepTranslete});
}

void MainWindow::on_stepTranslate_valueChanged(double arg1)
{
    stepTranslete = arg1;
}





void MainWindow::on_rotateXRight_clicked()
{
    ui->GLwidget->rotateModel(stepRotate,0,0);


}


void MainWindow::on_rotatexLeft_clicked()
{
    ui->GLwidget->rotateModel(-stepRotate,0,0);

}


void MainWindow::on_rotateYRight_clicked()
{
    ui->GLwidget->rotateModel(0,stepRotate,0);
}


void MainWindow::on_rotateYLeft_clicked()
{
    ui->GLwidget->rotateModel(0,-stepRotate,0);
}


void MainWindow::on_rotateZRight_clicked()
{
    ui->GLwidget->rotateModel(0,0,stepRotate);
}


void MainWindow::on_rotateZLeft_clicked()
{
    ui->GLwidget->rotateModel(0,0,-stepRotate);
}


void MainWindow::on_rotateAngle_valueChanged(double arg1)
{
    stepRotate = arg1;
}

