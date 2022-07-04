#include "painter.h"
#include "ui_painter.h"

Painter::Painter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Painter)
{
    ui->setupUi(this);
}

Painter::~Painter()
{
    delete ui;
}

void Painter::paintEvent(QPaintEvent *event)
{
    // Crear el objeto painter. Establecer el formulario como su lienzo
    QPainter pintor(this);

    // establecer un color a su pincel
    pintor.setPen(Qt::blue);

    // Dibujar una linea
    pintor.drawLine(100, 100, 200, 200);

    // Cambiar el color del pincel
    pintor.setPen(Qt::red);

    // Establecer un tipo y tamaño de letra
    pintor.setFont(QFont("Arial",30));

    // Dibujar un texto
    pintor.drawText(250,150,"Picaso");

    // Crear un nuevo pincel
    QPen pincel;
    pincel.setColor(Qt::green);
    pincel.setWidth(10);
    pincel.setCapStyle(Qt::RoundCap);

    // Utilizar el nuevo pincel
    pintor.setPen(pincel);

    // Establecer una brocha
    pintor.setBrush(Qt::black);

    // Dibujar un rectangulo
    pintor.drawRect(400, 100, 100, 100);

    // Crear un nuevo color
    QColor miColor(255,221,129,128);

    // Crear un nuevo pincel
    QPen pincel2;
    pincel2.setColor(Qt::yellow);
    pincel2.setWidth(5);
    pincel2.setStyle(Qt::DotLine);

    // Establecer el nuevo pincel
    pintor.setPen(pincel2);

    // Cambiar la brocha
    pintor.setBrush(miColor);

    // Dibuar un circulo
    pintor.drawEllipse(450, 100, 100, 100);

    // Crear un nuevo pincel
    QPen pincel3;
    pincel3.setColor(Qt::red);
    pincel3.setWidth(6);
    pincel3.setStyle(Qt::DotLine);

    // Establecer el nuevo pincel
    pintor.setPen(pincel3);
    // Cambiar la brocha
    pintor.setBrush(miColor);

    // Dibuar un cuadrado
    pintor.drawEllipse(410, 400, 350, 90);

    QPen pincel4;
         pintor.setFont(QFont("TimeNewRoman",25));
        pintor.drawText(300,250,"Sebastian");
        pincel2.setColor(Qt::blue);
        pincel2.setWidth(5);
        pincel2.setStyle(Qt::DotLine);
       pintor.setPen(pincel4);
        pintor.drawEllipse(200, 200, 300, 200);

        QPen pincel5;
            pintor.setFont(QFont("TimeNewRoman",25));
           pintor.drawText(600,300,"Jorge");
           pincel2.setColor(Qt::blue);
           pincel2.setWidth(11);
           pincel.setCapStyle(Qt::RoundCap);
          pintor.setPen(pincel5);
           pintor.drawRect(600, 250, 150, 150);

        QPen pincel6;
               pintor.setFont(QFont("TimeNewRoman",25));
              pintor.drawText(600,300,"");
              pincel2.setColor(Qt::blue);
              pincel2.setWidth(11);
              pincel.setCapStyle(Qt::RoundCap);
             pintor.setPen(pincel6);
              pintor.drawRect(50, 250, 150, 150);
 }


