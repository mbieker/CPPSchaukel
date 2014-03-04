#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMouseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene* scene;
};

class GraphicPad : public  QGraphicsView
{
    Q_OBJECT
      public:
          explicit GraphicPad(QWidget *parent = 0);

      signals:

      public slots:
          void mousePressEvent(QMouseEvent * e);
          // void mouseReleaseEvent(QMouseEvent * e);
          // void mouseDoubleClickEvent(QMouseEvent * e);
          // void mouseMoveEvent(QMouseEvent * e);
      private:
          QGraphicsScene * scene;
};

#endif // MAINWINDOW_H
