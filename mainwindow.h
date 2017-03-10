#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QImage>
#include <QLabel>
#include <QDebug>
#include <QStringList>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <mymouseevent.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


    void reSet();
private slots:
    void on_btn_open_clicked();

    void on_btn_last_clicked();

    void on_btn_next_clicked();

    void on_btn_reset_clicked();

private:
    Ui::MainWindow *ui;

    QFileDialog *fileDialog;
    QGraphicsScene * gs;
    MyMouseEvent * gpi;

    QStringList files;

    QFileInfoList images;

    int curIndex = 0;

    void showImage(QImage img);
};

#endif // MAINWINDOW_H
