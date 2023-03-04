#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QString"
#include "QVector"
using namespace std;

class Student{
public:
    QString name;
    QString surname;
};

class Course{
public:
    QString name;
    float pract_koef = 0.0;
    float sem_koef = 0.0;
    float sam_koef = 0.0;
    float dom_koef = 0.0;
    float ekz_koef = 0.0;
    QVector<Student> Students;
};

class Marks{
    Student Student1;
    Course Course1;
    float pract = 0.0;
    float sem = 0.0;
    float sam = 0.0;
    float dom = 0.0;
    float ekz = 0.0;
    float final = pract * Course1.pract_koef + sem * Course1.sem_koef + sam * Course1.sam_koef + dom * Course1.dom_koef + ekz * Course1.ekz_koef;
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addStudent_clicked()
{
    QString name = ui->lineEdit->text();
    QString surname = ui->lineEdit_2->text();
    Student Student1;
    Student1.surname = surname;
    Student1.name = name;
    ui->listWidget->addItem(Student1.name);
}


void MainWindow::on_addStudent_2_clicked()
{
    QString name = ui->lineEdit_3->text();
    Course Course1;
    Course1.name = name;
    ui->listWidget_2->addItem(Course1.name);
}

