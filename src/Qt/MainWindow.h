/*
 * Project: FullereneViewer
 * Version: 1.0
 * Copyright: (C) 2011-14 Dr.Sc.KAWAMOTO,Takuji (Ext)
 */

#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include <QMainWindow>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT
    
public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
    
private slots:
  void setGuruguruMode();
  void setPickingMode();
  void memoryShape();
  void recallShape();
  void drawSixViews();
  void drawSnapshot();
  void setupDialog();
  void formulaDialog();
  void selectFullereneDialog();
  void showHelp();
  void showAbout();

private:
  Ui::MainWindow *ui;
};

#endif /* __MAINWINDOW_H__ */

/* Local Variables:	*/
/* mode: c++		*/
/* End:			*/
