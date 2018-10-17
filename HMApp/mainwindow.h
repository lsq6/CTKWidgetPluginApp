#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class ctkPluginContext;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void loadPlugin(const QString& pluginDir);

private:
    Ui::MainWindow *ui;

    ctkPluginContext *context;
};

#endif // MAINWINDOW_H
