/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *filename;
    QPushButton *pushButton;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_3;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *line;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QDoubleSpinBox *rotateAngle;
    QGridLayout *RotateXGroup;
    QPushButton *rotateXRight;
    QLabel *label_16;
    QPushButton *rotatexLeft;
    QGridLayout *RotateYGroup;
    QLabel *label_17;
    QPushButton *rotateYLeft;
    QPushButton *rotateYRight;
    QGridLayout *RotateZGroup;
    QLabel *label_18;
    QPushButton *rotateZLeft;
    QPushButton *rotateZRight;
    QFrame *line_2;
    QGridLayout *gridLayout_8;
    QLabel *label_15;
    QPushButton *pushButton_4;
    QDoubleSpinBox *stepTranslate;
    QGridLayout *TraslateXGroup;
    QLabel *label_19;
    QPushButton *translateXLeft;
    QPushButton *translateXRight;
    QGridLayout *TraslateYGroup;
    QPushButton *translateYLeft;
    QLabel *label_22;
    QPushButton *translateYRight;
    QGridLayout *TraslateZGroup;
    QPushButton *translateZRight;
    QPushButton *translateZLeft;
    QLabel *label_23;
    QFrame *line_3;
    QGridLayout *gridLayout_17;
    QLabel *label_24;
    QPushButton *scaleMinus;
    QPushButton *scalePlus;
    QFrame *line_4;
    QGridLayout *gridLayout_19;
    QLabel *LabBackground;
    QPushButton *pushButton_24;
    QTextEdit *ColorBackShow;
    QFrame *line_5;
    QGroupBox *GroupTypeProjection;
    QGridLayout *GridTypeProjection;
    QRadioButton *projectionOrtho;
    QRadioButton *projectionFrustum;
    QFrame *line_6;
    QGridLayout *gridLayout_21;
    QLabel *label_27;
    QPushButton *chooseColorVert;
    QTextEdit *ColorVertexShow;
    QGridLayout *gridLayout_22;
    QDoubleSpinBox *doubleSpinVert;
    QLabel *label_28;
    QGroupBox *GroupVertexType;
    QGridLayout *VertexTypeGroup;
    QRadioButton *vertexTypeNone;
    QRadioButton *vertexTypeCicle;
    QRadioButton *vertexTypeSquare;
    QFrame *line_7;
    QGridLayout *gridLayout_23;
    QPushButton *chooseColorEdge;
    QLabel *label_29;
    QTextEdit *ColorEdgeShow;
    QGridLayout *gridLayout_24;
    QDoubleSpinBox *spinWidthLine;
    QLabel *label_30;
    QGridLayout *GridTypeLine;
    QGroupBox *groupBox;
    QRadioButton *radioBSolid;
    QRadioButton *radioBDashed;
    QFrame *line_8;
    QGridLayout *gridLayout_26;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    GLWidget *GLwidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1339, 1045);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 12);
        filename = new QLabel(centralwidget);
        filename->setObjectName(QString::fromUtf8("filename"));
        filename->setMinimumSize(QSize(300, 30));
        filename->setMaximumSize(QSize(300, 30));
        filename->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}\n"
""));

        verticalLayout->addWidget(filename);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(300, 30));
        pushButton->setMaximumSize(QSize(300, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(255, 255, 255);\n"
"	background: rgb(85,85,127);\n"
"}"));

        verticalLayout->addWidget(pushButton);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(100, 30));
        label_4->setMaximumSize(QSize(100, 30));
        QFont font;
        font.setBold(true);
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 30));
        label_3->setMaximumSize(QSize(100, 30));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}\n"
""));

        gridLayout_2->addWidget(label_3, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(100, 30));
        label_5->setMaximumSize(QSize(100, 30));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}\n"
""));

        gridLayout_3->addWidget(label_5, 0, 1, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(100, 30));
        label_6->setMaximumSize(QSize(100, 30));
        label_6->setFont(font);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(100, 30));
        label_8->setMaximumSize(QSize(100, 30));
        label_8->setFont(font);

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}\n"
""));

        gridLayout_4->addWidget(pushButton_2, 0, 1, 1, 1);

        rotateAngle = new QDoubleSpinBox(centralwidget);
        rotateAngle->setObjectName(QString::fromUtf8("rotateAngle"));
        rotateAngle->setDecimals(2);
        rotateAngle->setMaximum(360.000000000000000);

        gridLayout_4->addWidget(rotateAngle, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        RotateXGroup = new QGridLayout();
        RotateXGroup->setObjectName(QString::fromUtf8("RotateXGroup"));
        rotateXRight = new QPushButton(centralwidget);
        rotateXRight->setObjectName(QString::fromUtf8("rotateXRight"));
        rotateXRight->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}"));

        RotateXGroup->addWidget(rotateXRight, 0, 2, 1, 1);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(100, 30));
        label_16->setMaximumSize(QSize(100, 30));
        label_16->setFont(font);

        RotateXGroup->addWidget(label_16, 0, 0, 1, 1);

        rotatexLeft = new QPushButton(centralwidget);
        rotatexLeft->setObjectName(QString::fromUtf8("rotatexLeft"));
        rotatexLeft->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}\n"
""));

        RotateXGroup->addWidget(rotatexLeft, 0, 1, 1, 1);


        verticalLayout->addLayout(RotateXGroup);

        RotateYGroup = new QGridLayout();
        RotateYGroup->setObjectName(QString::fromUtf8("RotateYGroup"));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(100, 30));
        label_17->setMaximumSize(QSize(100, 30));
        label_17->setFont(font);

        RotateYGroup->addWidget(label_17, 0, 0, 1, 1);

        rotateYLeft = new QPushButton(centralwidget);
        rotateYLeft->setObjectName(QString::fromUtf8("rotateYLeft"));
        rotateYLeft->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}\n"
""));

        RotateYGroup->addWidget(rotateYLeft, 0, 1, 1, 1);

        rotateYRight = new QPushButton(centralwidget);
        rotateYRight->setObjectName(QString::fromUtf8("rotateYRight"));
        rotateYRight->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}"));

        RotateYGroup->addWidget(rotateYRight, 0, 2, 1, 1);


        verticalLayout->addLayout(RotateYGroup);

        RotateZGroup = new QGridLayout();
        RotateZGroup->setObjectName(QString::fromUtf8("RotateZGroup"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(100, 30));
        label_18->setMaximumSize(QSize(100, 30));
        label_18->setFont(font);

        RotateZGroup->addWidget(label_18, 0, 0, 1, 1);

        rotateZLeft = new QPushButton(centralwidget);
        rotateZLeft->setObjectName(QString::fromUtf8("rotateZLeft"));
        rotateZLeft->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}\n"
""));

        RotateZGroup->addWidget(rotateZLeft, 0, 1, 1, 1);

        rotateZRight = new QPushButton(centralwidget);
        rotateZRight->setObjectName(QString::fromUtf8("rotateZRight"));
        rotateZRight->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}"));

        RotateZGroup->addWidget(rotateZRight, 0, 2, 1, 1);


        verticalLayout->addLayout(RotateZGroup);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(100, 30));
        label_15->setMaximumSize(QSize(100, 30));
        label_15->setFont(font);

        gridLayout_8->addWidget(label_15, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}\n"
""));

        gridLayout_8->addWidget(pushButton_4, 0, 1, 1, 1);

        stepTranslate = new QDoubleSpinBox(centralwidget);
        stepTranslate->setObjectName(QString::fromUtf8("stepTranslate"));

        gridLayout_8->addWidget(stepTranslate, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_8);

        TraslateXGroup = new QGridLayout();
        TraslateXGroup->setObjectName(QString::fromUtf8("TraslateXGroup"));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(100, 30));
        label_19->setMaximumSize(QSize(100, 30));
        label_19->setFont(font);

        TraslateXGroup->addWidget(label_19, 0, 0, 1, 1);

        translateXLeft = new QPushButton(centralwidget);
        translateXLeft->setObjectName(QString::fromUtf8("translateXLeft"));
        translateXLeft->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}\n"
""));

        TraslateXGroup->addWidget(translateXLeft, 0, 1, 1, 1);

        translateXRight = new QPushButton(centralwidget);
        translateXRight->setObjectName(QString::fromUtf8("translateXRight"));
        translateXRight->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}"));

        TraslateXGroup->addWidget(translateXRight, 0, 2, 1, 1);


        verticalLayout->addLayout(TraslateXGroup);

        TraslateYGroup = new QGridLayout();
        TraslateYGroup->setObjectName(QString::fromUtf8("TraslateYGroup"));
        translateYLeft = new QPushButton(centralwidget);
        translateYLeft->setObjectName(QString::fromUtf8("translateYLeft"));
        translateYLeft->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}\n"
""));

        TraslateYGroup->addWidget(translateYLeft, 0, 1, 1, 1);

        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(100, 30));
        label_22->setMaximumSize(QSize(100, 30));
        label_22->setFont(font);

        TraslateYGroup->addWidget(label_22, 0, 0, 1, 1);

        translateYRight = new QPushButton(centralwidget);
        translateYRight->setObjectName(QString::fromUtf8("translateYRight"));
        translateYRight->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}"));

        TraslateYGroup->addWidget(translateYRight, 0, 2, 1, 1);


        verticalLayout->addLayout(TraslateYGroup);

        TraslateZGroup = new QGridLayout();
        TraslateZGroup->setObjectName(QString::fromUtf8("TraslateZGroup"));
        translateZRight = new QPushButton(centralwidget);
        translateZRight->setObjectName(QString::fromUtf8("translateZRight"));
        translateZRight->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}"));

        TraslateZGroup->addWidget(translateZRight, 0, 2, 1, 1);

        translateZLeft = new QPushButton(centralwidget);
        translateZLeft->setObjectName(QString::fromUtf8("translateZLeft"));
        translateZLeft->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}\n"
""));

        TraslateZGroup->addWidget(translateZLeft, 0, 1, 1, 1);

        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(100, 30));
        label_23->setMaximumSize(QSize(100, 30));
        label_23->setFont(font);

        TraslateZGroup->addWidget(label_23, 0, 0, 1, 1);


        verticalLayout->addLayout(TraslateZGroup);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMinimumSize(QSize(100, 30));
        label_24->setMaximumSize(QSize(100, 30));
        label_24->setFont(font);

        gridLayout_17->addWidget(label_24, 0, 0, 1, 1);

        scaleMinus = new QPushButton(centralwidget);
        scaleMinus->setObjectName(QString::fromUtf8("scaleMinus"));
        scaleMinus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}\n"
""));

        gridLayout_17->addWidget(scaleMinus, 0, 1, 1, 1);

        scalePlus = new QPushButton(centralwidget);
        scalePlus->setObjectName(QString::fromUtf8("scalePlus"));
        scalePlus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}"));

        gridLayout_17->addWidget(scalePlus, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_17);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        gridLayout_19 = new QGridLayout();
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        LabBackground = new QLabel(centralwidget);
        LabBackground->setObjectName(QString::fromUtf8("LabBackground"));
        LabBackground->setMinimumSize(QSize(100, 30));
        LabBackground->setMaximumSize(QSize(100, 30));
        LabBackground->setFont(font);

        gridLayout_19->addWidget(LabBackground, 0, 0, 1, 1);

        pushButton_24 = new QPushButton(centralwidget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        pushButton_24->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(255, 255, 255);\n"
"	background: rgb(85,85,127);\n"
"}"));

        gridLayout_19->addWidget(pushButton_24, 0, 1, 1, 1);

        ColorBackShow = new QTextEdit(centralwidget);
        ColorBackShow->setObjectName(QString::fromUtf8("ColorBackShow"));
        ColorBackShow->setEnabled(false);
        ColorBackShow->setMinimumSize(QSize(50, 50));
        ColorBackShow->setMaximumSize(QSize(50, 50));

        gridLayout_19->addWidget(ColorBackShow, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_19);

        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        GroupTypeProjection = new QGroupBox(centralwidget);
        GroupTypeProjection->setObjectName(QString::fromUtf8("GroupTypeProjection"));
        GridTypeProjection = new QGridLayout(GroupTypeProjection);
        GridTypeProjection->setObjectName(QString::fromUtf8("GridTypeProjection"));
        projectionOrtho = new QRadioButton(GroupTypeProjection);
        projectionOrtho->setObjectName(QString::fromUtf8("projectionOrtho"));
        projectionOrtho->setAutoFillBackground(false);

        GridTypeProjection->addWidget(projectionOrtho, 0, 0, 1, 1);

        projectionFrustum = new QRadioButton(GroupTypeProjection);
        projectionFrustum->setObjectName(QString::fromUtf8("projectionFrustum"));

        GridTypeProjection->addWidget(projectionFrustum, 0, 1, 1, 1);


        verticalLayout->addWidget(GroupTypeProjection);

        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_6);

        gridLayout_21 = new QGridLayout();
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(100, 30));
        label_27->setMaximumSize(QSize(100, 30));
        label_27->setFont(font);

        gridLayout_21->addWidget(label_27, 0, 0, 1, 1);

        chooseColorVert = new QPushButton(centralwidget);
        chooseColorVert->setObjectName(QString::fromUtf8("chooseColorVert"));
        chooseColorVert->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(255, 255, 255);\n"
"	background: rgb(85,85,127);\n"
"}"));

        gridLayout_21->addWidget(chooseColorVert, 0, 1, 1, 1);

        ColorVertexShow = new QTextEdit(centralwidget);
        ColorVertexShow->setObjectName(QString::fromUtf8("ColorVertexShow"));
        ColorVertexShow->setEnabled(false);
        ColorVertexShow->setMaximumSize(QSize(50, 50));

        gridLayout_21->addWidget(ColorVertexShow, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_21);

        gridLayout_22 = new QGridLayout();
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        doubleSpinVert = new QDoubleSpinBox(centralwidget);
        doubleSpinVert->setObjectName(QString::fromUtf8("doubleSpinVert"));
        doubleSpinVert->setMinimum(0.000000000000000);

        gridLayout_22->addWidget(doubleSpinVert, 0, 1, 1, 1);

        label_28 = new QLabel(centralwidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(100, 30));
        label_28->setMaximumSize(QSize(100, 30));
        label_28->setFont(font);

        gridLayout_22->addWidget(label_28, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_22);

        GroupVertexType = new QGroupBox(centralwidget);
        GroupVertexType->setObjectName(QString::fromUtf8("GroupVertexType"));
        VertexTypeGroup = new QGridLayout(GroupVertexType);
        VertexTypeGroup->setObjectName(QString::fromUtf8("VertexTypeGroup"));
        vertexTypeNone = new QRadioButton(GroupVertexType);
        vertexTypeNone->setObjectName(QString::fromUtf8("vertexTypeNone"));

        VertexTypeGroup->addWidget(vertexTypeNone, 1, 2, 1, 1);

        vertexTypeCicle = new QRadioButton(GroupVertexType);
        vertexTypeCicle->setObjectName(QString::fromUtf8("vertexTypeCicle"));

        VertexTypeGroup->addWidget(vertexTypeCicle, 1, 3, 1, 1);

        vertexTypeSquare = new QRadioButton(GroupVertexType);
        vertexTypeSquare->setObjectName(QString::fromUtf8("vertexTypeSquare"));

        VertexTypeGroup->addWidget(vertexTypeSquare, 1, 4, 1, 1);


        verticalLayout->addWidget(GroupVertexType);

        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_7);

        gridLayout_23 = new QGridLayout();
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        chooseColorEdge = new QPushButton(centralwidget);
        chooseColorEdge->setObjectName(QString::fromUtf8("chooseColorEdge"));
        chooseColorEdge->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(255, 255, 255);\n"
"	background: rgb(85,85,127);\n"
"}"));

        gridLayout_23->addWidget(chooseColorEdge, 0, 1, 1, 1);

        label_29 = new QLabel(centralwidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMinimumSize(QSize(100, 30));
        label_29->setMaximumSize(QSize(100, 30));
        label_29->setFont(font);

        gridLayout_23->addWidget(label_29, 0, 0, 1, 1);

        ColorEdgeShow = new QTextEdit(centralwidget);
        ColorEdgeShow->setObjectName(QString::fromUtf8("ColorEdgeShow"));
        ColorEdgeShow->setEnabled(false);
        ColorEdgeShow->setMaximumSize(QSize(50, 50));

        gridLayout_23->addWidget(ColorEdgeShow, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_23);

        gridLayout_24 = new QGridLayout();
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        spinWidthLine = new QDoubleSpinBox(centralwidget);
        spinWidthLine->setObjectName(QString::fromUtf8("spinWidthLine"));
        spinWidthLine->setStyleSheet(QString::fromUtf8("QDoubleSpinBoxl {\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(154, 153, 155);\n"
"	background: white;\n"
"}\n"
""));
        spinWidthLine->setMinimum(1.000000000000000);

        gridLayout_24->addWidget(spinWidthLine, 0, 1, 1, 1);

        label_30 = new QLabel(centralwidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMinimumSize(QSize(100, 30));
        label_30->setMaximumSize(QSize(100, 30));
        label_30->setFont(font);

        gridLayout_24->addWidget(label_30, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_24);

        GridTypeLine = new QGridLayout();
        GridTypeLine->setObjectName(QString::fromUtf8("GridTypeLine"));

        verticalLayout->addLayout(GridTypeLine);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        radioBSolid = new QRadioButton(groupBox);
        radioBSolid->setObjectName(QString::fromUtf8("radioBSolid"));
        radioBSolid->setGeometry(QRect(10, 10, 111, 21));
        radioBDashed = new QRadioButton(groupBox);
        radioBDashed->setObjectName(QString::fromUtf8("radioBDashed"));
        radioBDashed->setGeometry(QRect(160, 10, 131, 21));

        verticalLayout->addWidget(groupBox);

        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_8);

        gridLayout_26 = new QGridLayout();
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(255, 255, 255);\n"
"	background: rgb(85,85,127);\n"
"}"));

        gridLayout_26->addWidget(pushButton_14, 0, 0, 1, 1);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(255, 255, 255);\n"
"	background: rgb(85,85,127);\n"
"}"));

        gridLayout_26->addWidget(pushButton_15, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_26);


        horizontalLayout->addLayout(verticalLayout);

        GLwidget = new GLWidget(centralwidget);
        GLwidget->setObjectName(QString::fromUtf8("GLwidget"));
        GLwidget->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(GLwidget->sizePolicy().hasHeightForWidth());
        GLwidget->setSizePolicy(sizePolicy2);
        GLwidget->setMinimumSize(QSize(1000, 1000));
        GLwidget->setMaximumSize(QSize(1000, 16777215));
        GLwidget->setAutoFillBackground(true);

        horizontalLayout->addWidget(GLwidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "3D Viewer", nullptr));
        filename->setText(QCoreApplication::translate("MainWindow", "Choose an .obj file", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Find File", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Edges", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Angle", nullptr));
        rotateXRight->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "X Axis", nullptr));
        rotatexLeft->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Y Axis", nullptr));
        rotateYLeft->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        rotateYRight->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Z Axis", nullptr));
        rotateZLeft->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        rotateZRight->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Translate", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "X Axis", nullptr));
        translateXLeft->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        translateXRight->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        translateYLeft->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Y Axis", nullptr));
        translateYRight->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        translateZRight->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        translateZLeft->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Z Axis", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        scaleMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        scalePlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        LabBackground->setText(QCoreApplication::translate("MainWindow", "Background", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "Choose Color", nullptr));
        projectionOrtho->setText(QCoreApplication::translate("MainWindow", "Parallel", nullptr));
        projectionFrustum->setText(QCoreApplication::translate("MainWindow", "Central", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        chooseColorVert->setText(QCoreApplication::translate("MainWindow", "Choose Color", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Vertices width", nullptr));
        vertexTypeNone->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        vertexTypeCicle->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        vertexTypeSquare->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        chooseColorEdge->setText(QCoreApplication::translate("MainWindow", "Choose Color", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Edges", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Edges width", nullptr));
        groupBox->setTitle(QString());
        radioBSolid->setText(QCoreApplication::translate("MainWindow", "Solid", nullptr));
        radioBDashed->setText(QCoreApplication::translate("MainWindow", "Dashed", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Screenshot", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "Record", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
