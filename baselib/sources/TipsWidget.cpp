#include <QPainter>
#include "TipsWidget.h"


TipsWidget::TipsWidget(const QString &_imagePath, QWidget *parent) 
: text(""), curImage(_imagePath), QWidget(parent,Qt::FramelessWindowHint)
{
	setCursor(Qt::PointingHandCursor);
	setMinimumWidth(curImage.width());
	setMinimumHeight(curImage.height());
	setVisible(false);
}

TipsWidget::~TipsWidget(void)
{

}

void TipsWidget::setShowCoordinateInGlobal(const QPoint &_point)
{
	setGeometry(_point.x() - 25, _point.y() - 75, curImage.width(), curImage.height());
}

void TipsWidget::paintEvent(QPaintEvent *enent)
{
	printf("TipsWidget::paintEvent start!\n");

	QPainter painter(this);
	if(curImage.isNull()){
		printf("TipsWidget::curImage is NULL!\n");
		return;
	}
	
	painter.setOpacity(0.99);
	painter.drawPixmap(QPoint(0,0), curImage);

	painter.setPen(QPen(Qt::white));
	painter.drawText(curImage.rect(), Qt::AlignCenter, text);

	printf("TipsWidget::paintEvent end!\n");
}

void TipsWidget::setText(const QString &_text)
{
	text = _text;
	update();
}

