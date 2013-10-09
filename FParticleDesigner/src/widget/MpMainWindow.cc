#include <QMenuBar>
#include "widget/MpMainWindow.h"

MpMainWindow::MpMainWindow()
{
	initMenuBar();
	initWidget();
}


MpMainWindow::~MpMainWindow()
{

}


void MpMainWindow::initMenuBar()
{
	m_menuBar=menuBar();

	/* file */
	mn_file=m_menuBar->addMenu("&File");
	{
		ma_newProject=mn_file->addAction("New Project");
		ma_openProject=mn_file->addAction("Open Project");
		ma_closeProject=mn_file->addAction("Close Project");
		ma_saveProject=mn_file->addAction("Save Project");
		ma_saveProjectAs=mn_file->addAction("Save Project As");
		ma_newParticle=mn_file->addAction("New Particle");
		ma_exportParticle=mn_file->addAction("Export Particle");
		ma_exportAll=mn_file->addAction("Export All");
		ma_quit=mn_file->addAction("Quit");
	}

	/* example */
	mn_example=m_menuBar->addMenu("&Example");
	{
		ma_fire=mn_example->addAction("Fire");
	}

	/* about */
	mn_about=m_menuBar->addMenu("About");
	{
        ma_aboutThis=mn_about->addAction("About Particle Designer");
        ma_onlineTutorial=mn_about->addAction("Online Tutorial");
	}
}

#define WIDGET_HEIGHT 295

void MpMainWindow::initWidget()
{
	/* emitter setting */
	m_emitterSettingWidget=new MpEmitterSettingWidget;
    QDockWidget* m_emitterSettingDockWidget=new QDockWidget(QString("Emitter"));
    m_emitterSettingDockWidget->setWidget(m_emitterSettingWidget);
    m_emitterSettingDockWidget->setFixedSize(WIDGET_HEIGHT,140);


	/* particle setting */
	m_particleSettingWidget=new MpParticleSettingWidget;
	m_particleSettingDockWidget=new QDockWidget(QString("Particle"));
	m_particleSettingDockWidget->setWidget(m_particleSettingWidget);
	m_particleSettingDockWidget->setFixedSize(WIDGET_HEIGHT,410);



	/* texture setting */
	m_textureSettingWidget=new MpTextureSettingWidget;
	m_textureSettingDockWidget=new QDockWidget(QString("texture"));
	m_textureSettingDockWidget->setWidget(m_textureSettingWidget);
	m_textureSettingDockWidget->setFixedSize(WIDGET_HEIGHT,219);



	/* environment setting */
	m_environmentSettingWidget=new MpEnvironmentSettingWidget;
	m_environmentSettingDockWidget=new QDockWidget(QString("Environment"));
	m_environmentSettingDockWidget->setWidget(m_environmentSettingWidget);
	m_environmentSettingDockWidget->setFixedSize(WIDGET_HEIGHT,270);



	/* dock widget */
    addDockWidget(Qt::LeftDockWidgetArea,m_emitterSettingDockWidget);
	addDockWidget(Qt::LeftDockWidgetArea,m_particleSettingDockWidget);
	addDockWidget(Qt::LeftDockWidgetArea,m_environmentSettingDockWidget);
    addDockWidget(Qt::RightDockWidgetArea,m_textureSettingDockWidget);
   	m_emitterSettingDockWidget->setFeatures(QDockWidget::DockWidgetMovable); 
	m_particleSettingDockWidget->setFeatures(QDockWidget::DockWidgetMovable);
	m_environmentSettingDockWidget->setFeatures(QDockWidget::DockWidgetMovable);
	m_textureSettingDockWidget->setFeatures(QDockWidget::DockWidgetMovable);



	/* view widget */
	m_particleViewWidget=new MpParticleViewWidget;
    setCentralWidget(m_particleViewWidget);
}











