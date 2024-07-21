#include "Mainwindow.hpp"

#include <QApplication>
//#include <iostream>
//using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //cout << "test";
    return a.exec();
}
