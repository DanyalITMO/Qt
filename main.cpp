#include <QtGui>
#include <QPushButton>
#include<QBoxLayout>
#include<QApplication>
int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget wgt;



    QPushButton* pb0 = new QPushButton("0");

    QPushButton* pb1 = new QPushButton("1");
    QPushButton* pb2 = new QPushButton("2");
    QPushButton* pb3 = new QPushButton("3");

    QPushButton* pb4 = new QPushButton("4");
    QPushButton* pb5 = new QPushButton("5");
    QPushButton* pb6 = new QPushButton("6");

    QPushButton* pb7 = new QPushButton("7");
    QPushButton* pb8 = new QPushButton("8");
    QPushButton* pb9 = new QPushButton("9");

    QPushButton* pb_plus = new QPushButton("+");
    QPushButton* pb_div = new QPushButton("-");
    QPushButton* pb_multipli = new QPushButton("*");

    QGridLayout* pgrdLayout = new QGridLayout;
    pgrdLayout->setMargin(5);
    pgrdLayout->setSpacing(15);



    pgrdLayout->addWidget(pb7, 2, 0);
    pgrdLayout->addWidget(pb8, 2, 1);
    pgrdLayout->addWidget(pb9, 2, 2);
    pgrdLayout->addWidget(pb_plus, 2, 3);

    pgrdLayout->addWidget(pb4, 3, 0);
    pgrdLayout->addWidget(pb5, 3, 1);
    pgrdLayout->addWidget(pb6, 3, 2);
    pgrdLayout->addWidget(pb_div, 3, 3);

    pgrdLayout->addWidget(pb1, 4, 0);
    pgrdLayout->addWidget(pb2, 4, 1);
    pgrdLayout->addWidget(pb3, 4, 2);
    pgrdLayout->addWidget(pb_multipli, 4, 3);

    wgt.setLayout(pgrdLayout);
    wgt.show();
    return app.exec();
}
