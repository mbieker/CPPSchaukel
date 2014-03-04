#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    delete ui->graphicsView;
    ui->graphicsView = new GraphicPad(this);
    ui->graphicsView->setBaseSize(500,500);

}

MainWindow::~MainWindow()
{
    delete ui;
}

GraphicPad::GraphicPad(QWidget *parent) :
    QGraphicsView(parent)
{
    scene = new QGraphicsScene();
    this->setSceneRect(50, 50, 350, 350);
    this->setScene(scene);
}

void GraphicPad::mousePressEvent(QMouseEvent * e)
{
    double rad = 1;
    QPointF pt = mapToScene(e->pos());
    scene->addEllipse(pt.x()-rad, pt.y()-rad, rad*2.0, rad*2.0, QPen(), QBrush(Qt::SolidPattern));
}
