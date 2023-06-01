#ifndef CRAPPYSCENE_H
#define CRAPPYSCENE_H

#include <QGraphicsScene>
#include <QObject>
#include <QWidget>
#include <QGraphicsSceneMouseEvent>
#include <QLineEdit>
#include <QAbstractGraphicsShapeItem>

enum class currentTool{
    pencil,
    brush,
    text,
    eraser,
    figure,
    none
};

enum class figureTool{
    line,
    curve,
    ellipse,
    square,
    polygon,
    none
};

class crappyScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit crappyScene(QObject *parent = nullptr);

public slots:
    void colorChanged(QColor clr);
    void toolChanged(currentTool tool);
    void isZooming(bool flag);
    void eraserSizeChanged(int value);
    void textInputChanged(const QString& newText);
    void brushSizeChanged(int value);
    void on_figureChanged(figureTool newFigure);

private:
    QPointF     m_previousPoint;
    QColor      m_sceneCurrColor;
    bool        m_isZoomingFlag;
    bool        m_figureIsPainting  = false;
    currentTool m_sceneCurrTool     = currentTool::none;
    figureTool  m_currFigureTool    = figureTool::none;
    double      m_eraserSize        = 1.0;
    double      m_brushSize         = 1.0;
    QString     m_textTool          = "Your Text Here";

    QGraphicsItem* m_lastDrawn = nullptr;
    QList<QPoint> m_polyPoints;

private:
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);

    void paintWithPencil(bool moved, QGraphicsSceneMouseEvent *event);
    void paintWithBrush (bool moved, QGraphicsSceneMouseEvent *event);
    void paintWithFigure(bool moved, QGraphicsSceneMouseEvent *event);
    void paintWithFigureLine(bool moved, QGraphicsSceneMouseEvent *event);
    void paintWithFigureCurve(bool moved, QGraphicsSceneMouseEvent *event);
    void paintWithFigureEllipse(bool moved, QGraphicsSceneMouseEvent *event);
    void paintWithFigureSquare(bool moved, QGraphicsSceneMouseEvent *event);
    void paintWithFigurePolygon(bool moved, QGraphicsSceneMouseEvent *event);
    void paintWithText  (QGraphicsSceneMouseEvent *event);
    void paintWithEraser(QGraphicsSceneMouseEvent *event);
};

#endif // CRAPPYSCENE_H
