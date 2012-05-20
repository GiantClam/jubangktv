#include <QGraphicsView>


#include "SceneParameter.h"

SceneParameter::SceneParameter()
{
	scene = new QGraphicsScene;
}

SceneParameter::~SceneParameter()
{
	delete scene;
}

void SceneParameter::addToView(QGraphicsView* const _view) const
{
	_view->setScene(scene);
}

void SceneParameter::clearItems() const
{
	/*scene->clear();*/
}

