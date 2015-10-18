#include <QtGui>
#include <QPushButton>
#include<QBoxLayout>
#include<QApplication>
int main(int argc, char** argv)
{
QApplication app(argc, argv);
QWidget wgt;


QPushButton* pcmdA = new QPushButton("A");
QPushButton* pcmdB = new QPushButton("A");
QPushButton* pcmdC = new QPushButton("B");
QPushButton* pcmdD = new QPushButton("C");

QVBoxLayout* pvbxLayout = new QVBoxLayout;
QHBoxLayout* phbxLayout = new QHBoxLayout;

phbxLayout->setMargin(5);
phbxLayout->setSpacing(15);
phbxLayout->addWidget(pcmdC);
phbxLayout->addWidget(pcmdD);
pvbxLayout->setMargin(5);
pvbxLayout->setSpacing(15);
pvbxLayout->addWidget(pcmdA);
pvbxLayout->addWidget(pcmdB);
pvbxLayout->addLayout(phbxLayout);
wgt.setLayout(pvbxLayout);
wgt.show();
return app.exec();
}
