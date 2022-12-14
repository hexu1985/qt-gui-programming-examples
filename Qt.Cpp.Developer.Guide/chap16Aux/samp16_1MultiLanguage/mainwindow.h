#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


#include    <QLabel>
#include    <QStandardItemModel>
#include    <QItemSelectionModel>
#include    <QModelIndex>

#include    "qwdialogheaders.h"
#include    "qwdialoglocate.h"

class   QWDialogLocate;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:

    //用于状态栏的信息显示
    QLabel  *LabCellPos;    //当前单元格行列号
    QLabel  *LabCellText;   //当前单元格内容

    QStandardItemModel  *theModel;//数据模型
    QItemSelectionModel *theSelection;//Item选择模型

//    QWDialogSize    *dlgTableSize=NULL; //初值赋值为NULL
    QWDialogHeaders *dlgSetHeaders=NULL;//设置表头文字对话框, 一次创建，exec()重复调用
//    QWDialogLocate  *dlgLocate=NULL;//定位单元格对话框，show()调用，关闭时自己删除

    void closeEvent(QCloseEvent *event);//关闭窗口时间，可以询问是否退出

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

//    QStandardItemModel *dataModel(); //数据模型的指针
//    QItemSelectionModel *selectionModel();//选择模型

    void    selectACell(int row,int column);//选择一个单元格,由dlgLocate调用
//    void    setDlgLocateNull();//将dlgLocate指针设置为NULL
private slots:
    void on_currentChanged(const QModelIndex &current, const QModelIndex &previous);

    void on_actTab_SetSize_triggered();

    void on_actTab_SetHeader_triggered();

    void on_actTab_Locate_triggered();

    void on_tableView_clicked(const QModelIndex &index);

    void on_actLang_CN_triggered();

    void on_actLang_EN_triggered();

public slots:
    void    setACellText(int row, int column, QString &text);//设置一个单元格的内容
    void    setActLocateEnable(bool enable);//设置actTab_Locate的enabled属性

signals:
    void    cellIndexChanged(int rowNo, int colNo);//当前单元格发生变化

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
