#include "crappyscene.h"
#include "qgraphicsitem.h"
#include <QDebug>
#include <QLineEdit>
#include <limits>
crappyScene::crappyScene(QObject *parent)
    : QGraphicsScene{parent}
{

}

void crappyScene::colorChanged(QColor clr)
{
    m_sceneCurrColor = clr;
}

void crappyScene::toolChanged(currentTool tool)
{
    m_sceneCurrTool = tool;
}

void crappyScene::isZooming(bool flag)
{
    m_isZoomingFlag = flag;
}

void crappyScene::eraserSizeChanged(int value)
{
    m_eraserSize = value;
}

void crappyScene::textInputChanged(const QString &newText)
{
    m_textTool = newText;
}

void crappyScene::brushSizeChanged(int value)
{
    m_brushSize = value;
}

void crappyScene::on_figureChanged(figureTool newFigure)
{
    m_currFigureTool = newFigure;

    m_figureIsPainting = false;
    m_lastDrawn = nullptr;
    m_previousPoint = QPointF();

}

void crappyScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(!m_isZoomingFlag)
    {
            switch (m_sceneCurrTool)
            {
            case currentTool::pencil:
            {
                paintWithPencil(0, event);
                break;
            }
            case currentTool::brush:
            {
                paintWithBrush(0, event);
                break;
            }
            case currentTool::text:
            {
                paintWithText(event);
                break;
            }
            case currentTool::eraser:
            {
                paintWithEraser(event);
                break;
            }
            case currentTool::figure:
            {
                paintWithFigure(0, event);
                break;
            }
            case currentTool::none:
                break;
            }
    }
    else
        m_isZoomingFlag = false;
}

void crappyScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(!m_isZoomingFlag)
    {
        switch (m_sceneCurrTool)
        {
         case currentTool::pencil:
        {
            paintWithPencil(1, event);
            break;
        }
        case currentTool::brush:
        {
            paintWithBrush(1, event);
            break;
        }
        case currentTool::text:
        {
            break;
        }
        case currentTool::eraser:
        {
            paintWithEraser(event);
            break;
        }
        case currentTool::figure:
        {
            paintWithFigure(1, event);
            break;
        }
        case currentTool::none:
            break;
        }
    }
    else
        m_isZoomingFlag = false;
}

void crappyScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if(!m_isZoomingFlag)
    {
        if(m_sceneCurrTool == currentTool::figure)
        {
            paintWithFigure(0, event);
        }
    }
    else
        m_isZoomingFlag = false;
}

void crappyScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    if(m_sceneCurrTool == currentTool::figure )
        if(m_currFigureTool == figureTool::curve || m_currFigureTool == figureTool::polygon)
        {
            paintWithFigure(0, event);
        }
}

void crappyScene::paintWithPencil(bool moved, QGraphicsSceneMouseEvent *event)
{
    if(moved == false)
    {
        addEllipse(event->scenePos().x(),
                    event->scenePos().y(),
                    1,
                    1,
                    QPen(Qt::NoPen),
                    QBrush(m_sceneCurrColor));

         m_previousPoint = event->scenePos();
    }
    else
    {
        addLine(m_previousPoint.x(),
                m_previousPoint.y(),
                event->scenePos().x(),
                event->scenePos().y(),
                QPen(m_sceneCurrColor,1,Qt::SolidLine,Qt::RoundCap));


        m_previousPoint = event->scenePos();
    }
}

void crappyScene::paintWithBrush(bool moved, QGraphicsSceneMouseEvent *event)
{
    if(moved == false)
    {
        addEllipse( event->scenePos().x() - m_brushSize/2,
                    event->scenePos().y() - m_brushSize/2,
                    m_brushSize,
                    m_brushSize,
                    QPen(Qt::NoPen),
                    QBrush(m_sceneCurrColor));

         m_previousPoint = event->scenePos();
    }
    else
    {
        addLine(m_previousPoint.x(),
                m_previousPoint.y(),
                event->scenePos().x(),
                event->scenePos().y(),
                QPen(m_sceneCurrColor,m_brushSize,Qt::SolidLine,Qt::RoundCap));

        m_previousPoint = event->scenePos();
    }

}

void crappyScene::paintWithFigure(bool moved, QGraphicsSceneMouseEvent *event)
{

    switch(m_currFigureTool)
    {
    case figureTool::line:
    {
        paintWithFigureLine(moved, event);
        break;
    }
    case figureTool::curve:
    {
        paintWithFigureCurve(moved, event);
        break;
    }
    case figureTool::square:
    {
        paintWithFigureSquare(moved, event);
        break;
    }
    case figureTool::ellipse:
    {
        paintWithFigureEllipse(moved, event);
        break;
    }
    case figureTool::polygon:
    {
        paintWithFigurePolygon(moved, event);
        break;
    }
    }
}

void crappyScene::paintWithFigureLine(bool moved, QGraphicsSceneMouseEvent *event)
{
    if(moved == false)
    {
        if(!m_figureIsPainting)
        {
            m_figureIsPainting  = true;
            m_previousPoint     = event->scenePos();
            qDebug() << "im drawing: " << m_previousPoint;
        }
        else
        {
            m_figureIsPainting = false;
            m_lastDrawn = nullptr;
            m_previousPoint = QPointF();
        }
    }
    else
    {
        if(m_lastDrawn != nullptr)
            removeItem(m_lastDrawn);

        m_lastDrawn = addLine(m_previousPoint.x(),
                m_previousPoint.y(),
                event->scenePos().x(),
                event->scenePos().y(),
                QPen(m_sceneCurrColor,2,Qt::SolidLine,Qt::RoundCap));
    }
}

void crappyScene::paintWithFigureEllipse(bool moved, QGraphicsSceneMouseEvent *event)
{
    if(moved == false)
    {
        if(!m_figureIsPainting)
        {
            m_figureIsPainting  = true;
            m_previousPoint     = event->scenePos();
            qDebug() << "im drawing: " << m_previousPoint;
        }
        else
        {
            m_figureIsPainting = false;
            m_lastDrawn = nullptr;
            m_previousPoint = QPointF();
        }
    }
    else
    {
        if(m_lastDrawn != nullptr)
            removeItem(m_lastDrawn);

        QPointF topLeft(qMin<qreal>(m_previousPoint.x(), event->scenePos().x()),
                        qMin<qreal>(m_previousPoint.y(), event->scenePos().y()));
        QPointF rightBottom(qMax<qreal>(m_previousPoint.x(), event->scenePos().x()),
                            qMax<qreal>(m_previousPoint.y(), event->scenePos().y()));
        m_lastDrawn = addEllipse(QRectF(topLeft, rightBottom),
                              QPen(m_sceneCurrColor,3,Qt::SolidLine,Qt::RoundCap));

    }

}

void crappyScene::paintWithFigureCurve(bool moved, QGraphicsSceneMouseEvent *event)
{
    if(moved == false && event->type() != QEvent::GraphicsSceneMouseRelease)
    {
        if(!m_figureIsPainting)
        {
            m_figureIsPainting  = true;
            m_previousPoint     = event->scenePos();
            qDebug() << "im drawing: " << m_previousPoint;

        }
        else if (event->type() == QEvent::GraphicsSceneMouseDoubleClick)
        {

            m_figureIsPainting = false;
            m_lastDrawn = nullptr;
            m_previousPoint = QPointF();
        }
        else
        {
            m_lastDrawn = addLine(m_previousPoint.x(),
                    m_previousPoint.y(),
                    event->scenePos().x(),
                    event->scenePos().y(),
                    QPen(m_sceneCurrColor,2,Qt::SolidLine,Qt::RoundCap));
            m_previousPoint = event->scenePos();
        }
    }

}

void crappyScene::paintWithFigureSquare(bool moved, QGraphicsSceneMouseEvent *event)
{
    if(moved == false)
    {
        if(!m_figureIsPainting)
        {
            m_figureIsPainting  = true;
            m_previousPoint     = event->scenePos();
            qDebug() << "im drawing: " << m_previousPoint;
        }
        else
        {
            m_figureIsPainting = false;
            m_lastDrawn = nullptr;
            m_previousPoint = QPointF();
        }
    }
    else
    {
        if(m_lastDrawn != nullptr)
            removeItem(m_lastDrawn);

        QPointF topLeft(qMin<qreal>(m_previousPoint.x(), event->scenePos().x()),
                        qMin<qreal>(m_previousPoint.y(), event->scenePos().y()));
        QPointF rightBottom(qMax<qreal>(m_previousPoint.x(), event->scenePos().x()),
                            qMax<qreal>(m_previousPoint.y(), event->scenePos().y()));
        m_lastDrawn = addRect(QRectF(topLeft, rightBottom),
                              QPen(m_sceneCurrColor,3,Qt::SolidLine,Qt::RoundCap));
    }

}

void crappyScene::paintWithFigurePolygon(bool moved, QGraphicsSceneMouseEvent *event)
{
    if(moved == false && event->type() != QEvent::GraphicsSceneMouseRelease)
    {
        if(!m_figureIsPainting)
        {
            m_figureIsPainting  = true;
            m_previousPoint     = event->scenePos();
            qDebug() << "im drawing: " << m_previousPoint;

            m_polyPoints << event->scenePos().toPoint();
            m_lastDrawn = addPolygon(QPolygon(m_polyPoints),
                                     QPen(m_sceneCurrColor,3,Qt::SolidLine,Qt::RoundCap));
        }
        else if (event->type() == QEvent::GraphicsSceneMouseDoubleClick)
        {

            m_figureIsPainting = false;
            m_lastDrawn = nullptr;
            m_previousPoint = QPointF();
            m_polyPoints.clear();
        }
        else
        {
            if(m_lastDrawn != nullptr)
                removeItem(m_lastDrawn);
            m_polyPoints << event->scenePos().toPoint();
            m_lastDrawn = addPolygon(QPolygon(m_polyPoints),
                                     QPen(m_sceneCurrColor,3,Qt::SolidLine,Qt::RoundCap));

        }
    }
}

void crappyScene::paintWithText(QGraphicsSceneMouseEvent *event)
{
    if(!m_textTool.isNull())
    {
        QGraphicsSimpleTextItem* newTextItem = addSimpleText(m_textTool);
        newTextItem->setPos(event->scenePos());
    }
}

void crappyScene::paintWithEraser(QGraphicsSceneMouseEvent *event)
{
    QPointF upperLeft = event->scenePos();
    upperLeft.setX(upperLeft.x() - m_eraserSize/2);
    upperLeft.setY(upperLeft.y() - m_eraserSize/2);

    QPointF bottomRight = event->scenePos();
    bottomRight.setX(bottomRight.x() + m_eraserSize/2);
    bottomRight.setY(bottomRight.y() + m_eraserSize/2);

    QPolygonF erasingArea(QRectF(upperLeft, bottomRight));

    auto lst = items(erasingArea);
    for(auto it : lst)
    {
        removeItem(it);
        delete it;
    }
}
