#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include    <QDirModel>
#include    <QFileSystemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
//    QDirModel    *model;
    QFileSystemModel    *model; //定义数据模型变量

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
//    void on_treeView_doubleClicked(const QModelIndex &index);

    void on_treeView_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
