#include "paintmainwindow.h"
#include "ui_paintmainwindow.h"
#include <QTimer>
#include <QResizeEvent>
#include <QMenu>
#include <QColorDialog>
#include <QFileDialog>
#include <QShortcut>
#include <QSlider>
#include <QWidgetAction>
#include <QLabel>

paintMainWindow::paintMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::paintMainWindow)
{
    ui->setupUi(this);

    m_scene = new crappyScene();
    ui->m_graphScene->setScene(m_scene);
    ui->m_graphScene->setAlignment(Qt::AlignLeft | Qt::AlignTop);

    m_timer = new QTimer();
    connect(m_timer, SIGNAL(timeout()), this, SLOT(slotTimer()));
    m_timer->start(100);

    connect(this, SIGNAL(win_colorChanged(QColor)), m_scene, SLOT(colorChanged(QColor)));
    connect(this, SIGNAL(win_toolChanged(currentTool)), m_scene, SLOT(toolChanged(currentTool)));
    connect(this, SIGNAL(isZooming(bool)), m_scene, SLOT(isZooming(bool)));

    QShortcut* zoomingIn = new QShortcut(QKeySequence(Qt::CTRL | Qt::Key_Equal), this);
    QShortcut* zoomingOut = new QShortcut(QKeySequence(Qt::CTRL | Qt::Key_Minus), this);
    connect(zoomingIn, &QShortcut::activated, this, &paintMainWindow::zoomIn);
    connect(zoomingOut, &QShortcut::activated, this, &paintMainWindow::zoomOut);

    eraserButtonFill();
    textButtonFill();
    brushButtonFill();
    figuresButtonFill();

    connect(this, SIGNAL(figureChanged(figureTool)), m_scene, SLOT(on_figureChanged(figureTool)));
}

paintMainWindow::~paintMainWindow()
{
    delete ui;
    delete m_scene;
}

void paintMainWindow::zoomIn()
{
    emit isZooming(true);
    ui->m_graphScene->scale(1.1, 1.1);
}

void paintMainWindow::zoomOut()
{
    emit isZooming(true);
    ui->m_graphScene->scale(1 / 1.1, 1 / 1.1);
}

void paintMainWindow::figureChangedLine()
{
    emit figureChanged(figureTool::line);
}

void paintMainWindow::figureChangedCurve()
{
    emit figureChanged(figureTool::curve);
}

void paintMainWindow::figureChangedEllipse()
{
    emit figureChanged(figureTool::ellipse);
}

void paintMainWindow::figureChangedSquare()
{
    emit figureChanged(figureTool::square);
}

void paintMainWindow::figureChangedPolygon()
{
    emit figureChanged(figureTool::polygon);
}

void paintMainWindow::on_m_PB_Pencil_clicked()
{
        m_currToolFlag = currentTool::pencil;
        emit win_toolChanged(m_currToolFlag);
}

void paintMainWindow::on_m_PB_Rect_clicked()
{
        m_currToolFlag = currentTool::figure;
        emit win_toolChanged(m_currToolFlag);
        setCursor(Qt::ArrowCursor);
}

void paintMainWindow::on_m_PB_Text_clicked()
{
        m_currToolFlag = currentTool::text;
        emit win_toolChanged(m_currToolFlag);
        setCursor(Qt::IBeamCursor);
}

void paintMainWindow::on_m_PB_Eraser_clicked()
{
        m_currToolFlag = currentTool::eraser;
        emit win_toolChanged(m_currToolFlag);
}

void paintMainWindow::on_m_PB_Brush_clicked()
{
        m_currToolFlag = currentTool::brush;
        emit win_toolChanged(m_currToolFlag);
}

void paintMainWindow::slotTimer()
{
    m_timer->stop();
    m_scene->setSceneRect(0,0, ui->m_graphScene->width() - 20, ui->m_graphScene->height() - 20);
}

void paintMainWindow::resizeEvent(QResizeEvent *event)
{
    m_timer->start(100);
    QWidget::resizeEvent(event);
}

void paintMainWindow::eraserButtonFill()
{
    QSlider* eraserSize = new QSlider(Qt::Orientation::Horizontal);
    eraserSize->setMaximum(128);
    eraserSize->setMinimum(1);
    eraserSize->setBaseSize(512,10);

    QLabel* eraseSizeLabel = new QLabel(QString::number(eraserSize->value()));
    eraseSizeLabel->setBuddy(eraserSize);
    connect(eraserSize, SIGNAL(valueChanged(int)), eraseSizeLabel, SLOT(setNum(int)));

    QVBoxLayout* ersLayout = new QVBoxLayout();
    ersLayout->addWidget(eraseSizeLabel);
    ersLayout->addWidget(eraserSize);

    QWidget* popupEraserSize = new QWidget();
    popupEraserSize->setLayout(ersLayout);

    QWidgetAction* eraserSizePicker = new QWidgetAction(ui->m_PB_Eraser);
    eraserSizePicker->setDefaultWidget(popupEraserSize);
    ui->m_PB_Eraser->setMenu(new QMenu());
    ui->m_PB_Eraser->menu()->addAction(eraserSizePicker);

    connect(ui->m_PB_Eraser->menu(), SIGNAL(aboutToShow()), this, SLOT(on_m_PB_Eraser_clicked()));
    connect(eraserSize, SIGNAL(valueChanged(int)), m_scene, SLOT(eraserSizeChanged(int)));
}

void paintMainWindow::textButtonFill()
{
    QLineEdit* lndtText = new QLineEdit;
    lndtText->setBaseSize(512,10);
    lndtText->setText("Your Text Here");

    QVBoxLayout* txtLayout = new QVBoxLayout;
    txtLayout->addWidget(lndtText);

    QWidget* popupText = new QWidget;
    popupText->setLayout(txtLayout);

    QWidgetAction* textInput = new QWidgetAction(ui->m_PB_Text);
    textInput->setDefaultWidget(popupText);
    ui->m_PB_Text->setMenu(new QMenu());
    ui->m_PB_Text->menu()->addAction(textInput);

    connect(ui->m_PB_Text->menu(), SIGNAL(aboutToShow()), this, SLOT(on_m_PB_Text_clicked()));
    connect(lndtText, SIGNAL(textChanged(QString)), m_scene, SLOT(textInputChanged(QString)));
}

void paintMainWindow::brushButtonFill()
{
    QSlider* brushSize = new QSlider(Qt::Orientation::Horizontal);
    brushSize->setMaximum(128);
    brushSize->setMinimum(1);
    brushSize->setBaseSize(512,10);

    QLabel* brushSizeLabel = new QLabel(QString::number(brushSize->value()));
    brushSizeLabel->setBuddy(brushSize);
    connect(brushSize, SIGNAL(valueChanged(int)), brushSizeLabel, SLOT(setNum(int)));

    QVBoxLayout* brshLayout = new QVBoxLayout();
    brshLayout->addWidget(brushSizeLabel);
    brshLayout->addWidget(brushSize);

    QWidget* popupBrushSize = new QWidget();
    popupBrushSize->setLayout(brshLayout);

    QWidgetAction* brushSizePicker = new QWidgetAction(ui->m_PB_Brush);
    brushSizePicker->setDefaultWidget(popupBrushSize);
    ui->m_PB_Brush->setMenu(new QMenu());
    ui->m_PB_Brush->menu()->addAction(brushSizePicker);

    connect(ui->m_PB_Brush->menu(), SIGNAL(aboutToShow()), this, SLOT(on_m_PB_Brush_clicked()));
    connect(brushSize, SIGNAL(valueChanged(int)), m_scene, SLOT(brushSizeChanged(int)));

}

void paintMainWindow::figuresButtonFill()
{
    ui->m_PB_Rect->setMenu(new QMenu);

    auto actLine = new QAction(QIcon(":/rsc/rsc/line.png"), "&Line", this);
    connect(actLine, &QAction::triggered, this, &paintMainWindow::figureChangedLine);
    actLine->setToolTip("Draw a line by pressing and holding left mouse button.");

    auto actCurve = new QAction(QIcon(":/rsc/rsc/curve.png"), "&Curve", this);
    connect(actCurve, &QAction::triggered, this, &paintMainWindow::figureChangedCurve);
    actCurve->setToolTip("Draw a curve by pressing left mouse button for each point of the curve.\nDouble click to set last point of the curve");

    auto actEllipse = new QAction(QIcon(":/rsc/rsc/ellipse.png"), "&Ellipse", this);
    connect(actEllipse, &QAction::triggered, this, &paintMainWindow::figureChangedEllipse);
    actEllipse->setToolTip("Draw an ellipse by pressing and holding left mouse button.");

    auto actSquare = new QAction(QIcon(":/rsc/rsc/rectangle.png"), "&Rectangle", this);
    connect(actSquare, &QAction::triggered, this, &paintMainWindow::figureChangedSquare);
    actSquare->setToolTip("Draw a square by pressing and holding left mouse button.");

    auto actPolygon = new QAction(QIcon(":/rsc/rsc/polygon.png"), "&Polygon", this);
    connect(actPolygon, &QAction::triggered, this, &paintMainWindow::figureChangedPolygon);
    actPolygon->setToolTip("Draw a polygon by pressing left mouse button for each point of the polygon.\nDouble click to set last point of the polygon");

    QList<QAction*> lst;
    lst << actLine << actCurve << actEllipse << actSquare << actPolygon;
    ui->m_PB_Rect->menu()->addActions(lst);
    ui->m_PB_Rect->menu()->setToolTipsVisible(true);
    connect(ui->m_PB_Rect->menu(), SIGNAL(aboutToShow()), this, SLOT(on_m_PB_Rect_clicked()));
}

void paintMainWindow::on_m_PB_Color_clicked()
{
    m_currentColor = QColorDialog::getColor(QColorConstants::Blue);

    emit win_colorChanged(m_currentColor);
}
