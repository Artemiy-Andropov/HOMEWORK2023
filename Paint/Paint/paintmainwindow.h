#ifndef PAINTMAINWINDOW_H
#define PAINTMAINWINDOW_H

#include "crappyscene.h"
#include <QMainWindow>
#include <QAbstractGraphicsShapeItem>
#include <QColor>


QT_BEGIN_NAMESPACE
namespace Ui { class paintMainWindow; }
QT_END_NAMESPACE

class paintMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    paintMainWindow(QWidget *parent = nullptr);
    ~paintMainWindow();

public slots:
    void zoomIn();
    void zoomOut();

signals:
    void win_colorChanged(QColor clr);
    void win_toolChanged(currentTool tool);
    void isZooming(bool flag);
    void figureChanged(figureTool newFigure);


private slots:

    void figureChangedLine();
    void figureChangedCurve();
    void figureChangedEllipse();
    void figureChangedSquare();
    void figureChangedPolygon();

    void slotTimer();

    void on_m_PB_Color_clicked();

    void on_m_PB_Text_clicked();

    void on_m_PB_Eraser_clicked();

    void on_m_PB_Brush_clicked();

    void on_m_PB_Pencil_clicked();

    void on_m_PB_Rect_clicked();

private:
    void resizeEvent(QResizeEvent * event);
    void eraserButtonFill();
    void textButtonFill();
    void brushButtonFill();
    void figuresButtonFill();

    Ui::paintMainWindow *ui;
    QTimer*             m_timer;
    QColor              m_currentColor;

    currentTool         m_currToolFlag = currentTool::none;
    crappyScene*        m_scene;
};
#endif // PAINTMAINWINDOW_H
