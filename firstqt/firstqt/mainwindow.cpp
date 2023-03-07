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
public:
    Student Student1;
    Course Course1;
    float pract = 0.0;
    float sem = 0.0;
    float sam = 0.0;
    float dom = 0.0;
    float ekz = 0.0;
};

QVector<Student> students;
QVector<Course> courses;
QVector<Marks> markss;

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
    students.append(Student1);
    ui->listWidget->clear();
    for (auto s  : students){
        ui->listWidget->addItem(s.name);
    }
}


void MainWindow::on_addStudent_2_clicked()
{
    QString name = ui->lineEdit_3->text();
    QString pract = ui->lineEdit_4->text();
    QString sem = ui->lineEdit_5->text();
    QString sam = ui->lineEdit_6->text();
    QString dom = ui->lineEdit_7->text();
    QString ekz = ui->lineEdit_8->text();
    Course Course1;
    Course1.name = name;
    Course1.pract_koef = pract.toFloat();
    Course1.sem_koef = sem.toFloat();
    Course1.sam_koef = sam.toFloat();
    Course1.dom_koef = dom.toFloat();
    Course1.ekz_koef = ekz.toFloat();
    courses.append(Course1);
    ui->listWidget_2->clear();
    for (auto c  : courses){
        ui->listWidget_2->addItem(c.name);
    }
}


void MainWindow::on_pushButton_clicked()
{
    QString course_name = ui->listWidget_2->currentItem()->text();
    QString student_name = ui->listWidget->currentItem()->text();
    Student student_obj;
    Course course_obj;
    Marks mark;
    for (auto i : students)
    {
       if(i.name==student_name){
           student_obj = i;
           mark.Student1=student_obj;
       }
    }
    for (auto i : courses)
    {
       if(i.name==course_name){
           i.Students.append(student_obj);;
           mark.Course1=i;
       }
    }
    markss.append(mark);
}


void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    QString student_name = ui->listWidget->currentItem()->text();
    Student student_obj;
    QVector<Marks> marks_obj;
    for (auto i : students)
    {
       if(i.name==student_name){
           student_obj = i;
           for (auto i1 : markss)
           {
              if(i1.Student1.name==i.name){
                  marks_obj.append(i1);
              }
           }
       }
    }
    ui->label->setText(student_obj.name);
    ui->label_2->setText(student_obj.surname);
    ui->listWidget_3->clear();
    for (auto c  : marks_obj){
        ui->listWidget_3->addItem(c.Course1.name);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QString course_name = ui->listWidget_3->currentItem()->text();
    QString student_name = ui->listWidget->currentItem()->text();
    Marks final_mark;
    for (auto i : markss)
    {
       if((i.Student1.name==student_name)and(i.Course1.name==course_name)){
           i.pract = ui->lineEdit_9->text().toFloat();
           i.sam = ui->lineEdit_10->text().toFloat();
           i.sem = ui->lineEdit_11->text().toFloat();
           i.dom = ui->lineEdit_12->text().toFloat();
           i.ekz = ui->lineEdit_13->text().toFloat();
           float final = i.pract * i.Course1.pract_koef + i.sem * i.Course1.sem_koef + i.sam * i.Course1.sam_koef + i.dom * i.Course1.dom_koef + i.ekz * i.Course1.ekz_koef;
           QString text1;
           text1.setNum(final);
           ui->label_4->setText(text1);
       }
    }

}

void MainWindow::on_listWidget_3_doubleClicked(const QModelIndex &index)
{
    QString course_name = ui->listWidget_3->currentItem()->text();
    QString student_name = ui->listWidget->currentItem()->text();
    Marks final_mark;
    for (auto i : markss)
    {
       if((i.Student1.name==student_name)and(i.Course1.name==course_name)){
            QString text2;
            text2.setNum(i.pract);
            ui->lineEdit_9->setText(text2);
            QString text3;
            text3.setNum(i.sam);
            ui->lineEdit_10->setText(text3);
            QString text4;
            text4.setNum(i.sem);
            ui->lineEdit_11->setText(text4);
            QString text5;
            text5.setNum(i.dom);
            ui->lineEdit_12->setText(text5);
            QString text6;
            text6.setNum(i.ekz);
            ui->lineEdit_13->setText(text6);
       }
    }
}

