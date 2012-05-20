#ifndef SCENE_PARAMETER_H
#define SCENE_PARAMETER_H

#include <QObject>
#include <QGraphicsScene>

class QGraphicsView;

struct SceneParameter : public QObject
{
	SceneParameter();
	~SceneParameter();
	void addToView(QGraphicsView* const _view) const;
	void clearItems() const;

public: 
	virtual void displayAllItems() = 0;

protected:
	virtual void addAction() = 0;
	

protected:
	QGraphicsScene *scene;
};

#endif
