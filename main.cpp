#include <QtGui>
#include <QApplication>
#include<QWidget>
#include<QFrame>
#include<QScrollArea>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QPixmap pix("//home//danek//idiot.png");//this is png pixmap
    QFrame frame;
    frame.setFrameStyle(QFrame::NoFrame);
    //frame.setLineWidth(34);

    //QApplication::setOverrideCursor(pix);

    QWidget wgt;

    QScrollArea sa;                 //scroll instans
    QWidget* pwgt1 = new QWidget;



    QPixmap temp("//home//danek//fon.jpg");
    int width = temp.width();
    int height = temp.height();

    QPalette pal1;
    pal1.setBrush(pwgt1->backgroundRole(), QBrush(temp));//provide background image (this is png)
    //pal1.setColor(pwgt1->backgroundRole(), Qt::red); //provide background image (this is qt namespace red)
    pwgt1->setPalette(pal1);
    pwgt1->resize(width, height);
    //pwgt1->move(25, 25);
    pwgt1->setAutoFillBackground(true);





//    wgt.resize(width, height);
//    wgt.show();


    sa.resize(150,150); // size in scroll window
    sa.setWidget(pwgt1);// set child in scroll instance


    sa.show(); // show scrol image

    return app.exec();
}
