/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *courses;
    QLabel *label;
    QListWidget *students;
    QLabel *label_2;
    QLineEdit *name;
    QLabel *label_3;
    QPushButton *addCourse;
    QLineEdit *pr;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *sem;
    QLabel *label_7;
    QLineEdit *sr;
    QLineEdit *hw;
    QLabel *label_8;
    QLineEdit *exam;
    QLabel *label_9;
    QLineEdit *fname;
    QLineEdit *lname;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *addUser;
    QLineEdit *ca_id;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *sa_id;
    QPushButton *addC2S;
    QLabel *label_14;
    QLineEdit *cm_id;
    QLabel *label_15;
    QLineEdit *sm_id;
    QLineEdit *hw_m;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *sr_m;
    QLabel *label_18;
    QLineEdit *pr_m;
    QLabel *label_19;
    QLineEdit *sem_m;
    QLineEdit *exam_m;
    QLabel *label_20;
    QPushButton *addMark;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        courses = new QListWidget(centralwidget);
        courses->setObjectName(QString::fromUtf8("courses"));
        courses->setGeometry(QRect(60, 60, 256, 192));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 40, 58, 16));
        students = new QListWidget(centralwidget);
        students->setObjectName(QString::fromUtf8("students"));
        students->setGeometry(QRect(510, 60, 256, 192));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(620, 40, 71, 16));
        name = new QLineEdit(centralwidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(110, 270, 111, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 270, 81, 16));
        addCourse = new QPushButton(centralwidget);
        addCourse->setObjectName(QString::fromUtf8("addCourse"));
        addCourse->setGeometry(QRect(110, 440, 111, 32));
        pr = new QLineEdit(centralwidget);
        pr->setObjectName(QString::fromUtf8("pr"));
        pr->setGeometry(QRect(110, 330, 111, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 290, 221, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 330, 101, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 350, 91, 16));
        sem = new QLineEdit(centralwidget);
        sem->setObjectName(QString::fromUtf8("sem"));
        sem->setGeometry(QRect(110, 350, 111, 21));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 370, 91, 16));
        sr = new QLineEdit(centralwidget);
        sr->setObjectName(QString::fromUtf8("sr"));
        sr->setGeometry(QRect(110, 370, 111, 21));
        hw = new QLineEdit(centralwidget);
        hw->setObjectName(QString::fromUtf8("hw"));
        hw->setGeometry(QRect(110, 390, 111, 21));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 390, 91, 16));
        exam = new QLineEdit(centralwidget);
        exam->setObjectName(QString::fromUtf8("exam"));
        exam->setGeometry(QRect(110, 410, 111, 21));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 410, 91, 16));
        fname = new QLineEdit(centralwidget);
        fname->setObjectName(QString::fromUtf8("fname"));
        fname->setGeometry(QRect(650, 270, 113, 21));
        lname = new QLineEdit(centralwidget);
        lname->setObjectName(QString::fromUtf8("lname"));
        lname->setGeometry(QRect(650, 290, 113, 21));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(530, 270, 91, 16));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(530, 290, 91, 16));
        addUser = new QPushButton(centralwidget);
        addUser->setObjectName(QString::fromUtf8("addUser"));
        addUser->setGeometry(QRect(540, 320, 211, 32));
        ca_id = new QLineEdit(centralwidget);
        ca_id->setObjectName(QString::fromUtf8("ca_id"));
        ca_id->setGeometry(QRect(250, 300, 113, 21));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(250, 280, 81, 16));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(380, 280, 111, 16));
        sa_id = new QLineEdit(centralwidget);
        sa_id->setObjectName(QString::fromUtf8("sa_id"));
        sa_id->setGeometry(QRect(380, 300, 113, 21));
        addC2S = new QPushButton(centralwidget);
        addC2S->setObjectName(QString::fromUtf8("addC2S"));
        addC2S->setGeometry(QRect(250, 320, 241, 32));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(250, 380, 81, 16));
        cm_id = new QLineEdit(centralwidget);
        cm_id->setObjectName(QString::fromUtf8("cm_id"));
        cm_id->setGeometry(QRect(320, 380, 113, 21));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(450, 380, 81, 16));
        sm_id = new QLineEdit(centralwidget);
        sm_id->setObjectName(QString::fromUtf8("sm_id"));
        sm_id->setGeometry(QRect(540, 380, 113, 21));
        hw_m = new QLineEdit(centralwidget);
        hw_m->setObjectName(QString::fromUtf8("hw_m"));
        hw_m->setGeometry(QRect(250, 430, 31, 21));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(250, 410, 21, 16));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(290, 410, 21, 16));
        sr_m = new QLineEdit(centralwidget);
        sr_m->setObjectName(QString::fromUtf8("sr_m"));
        sr_m->setGeometry(QRect(290, 430, 31, 21));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(330, 410, 21, 16));
        pr_m = new QLineEdit(centralwidget);
        pr_m->setObjectName(QString::fromUtf8("pr_m"));
        pr_m->setGeometry(QRect(330, 430, 31, 21));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(370, 410, 31, 16));
        sem_m = new QLineEdit(centralwidget);
        sem_m->setObjectName(QString::fromUtf8("sem_m"));
        sem_m->setGeometry(QRect(370, 430, 31, 21));
        exam_m = new QLineEdit(centralwidget);
        exam_m->setObjectName(QString::fromUtf8("exam_m"));
        exam_m->setGeometry(QRect(410, 430, 31, 21));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(410, 410, 21, 16));
        addMark = new QPushButton(centralwidget);
        addMark->setObjectName(QString::fromUtf8("addMark"));
        addMark->setGeometry(QRect(250, 450, 191, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "CourseName", nullptr));
        addCourse->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\321\203\321\200\321\201", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\244\320\276\321\200\320\274\321\203\320\273\320\260 \320\276\321\206\320\265\320\275\320\270\320\262\320\260\320\275\320\270\321\217 \321\203\320\272\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217\n"
" \320\262 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\260\321\205, \320\274\320\260\320\272\321\201\320\270\321\201\320\274\321\203\320\274 100", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\320\272\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\320\265\320\274\320\270\320\275\320\260\321\200\321\213", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\241\320\260\320\274. \321\200\320\260\320\261.", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\224\320\267", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\320\267\320\260\320\274\320\265\320\275", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        addUser->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Id \320\272\321\203\321\200\321\201\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Id \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        addC2S->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\321\203\321\200\321\201 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\321\203", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "id \320\232\321\203\321\200\321\201\320\260", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "id \320\241\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\264\320\267", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\321\201/\321\200", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\277/\321\200", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\321\201\320\265\320\274", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\321\215\320\272\320\267", nullptr));
        addMark->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\276\321\206\320\265\320\275\320\272\320\270 \320\267\320\260 \320\272\321\203\321\200\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
