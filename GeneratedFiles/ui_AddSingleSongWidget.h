/********************************************************************************
** Form generated from reading UI file 'AddSingleSongWidget.ui'
**
** Created: Mon Aug 8 19:08:15 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSINGLESONGWIDGET_H
#define UI_ADDSINGLESONGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddSingleSongWidgetClass
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QComboBox *comboBox_4;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QPushButton *fileChooser;
    QLabel *label_7;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_3;
    QLineEdit *openFileNameLabel;
    QLabel *label_9;
    QLineEdit *lineEdit;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_3;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QWidget *tab_2;
    QLabel *label_10;
    QLineEdit *lineEdit_5;
    QPushButton *fileChooser_2;
    QWidget *tab_3;
    QPushButton *scrollTextConfirmButton;
    QLabel *label_11;
    QLineEdit *scrollTextContent;
    QPushButton *scrollTextDeleteButton;

    void setupUi(QDialog *AddSingleSongWidgetClass)
    {
        if (AddSingleSongWidgetClass->objectName().isEmpty())
            AddSingleSongWidgetClass->setObjectName(QString::fromUtf8("AddSingleSongWidgetClass"));
        AddSingleSongWidgetClass->resize(572, 382);
        tabWidget = new QTabWidget(AddSingleSongWidgetClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 571, 381));
        tabWidget->setIconSize(QSize(16, 16));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        comboBox_2 = new QComboBox(tab);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(140, 240, 51, 31));
        comboBox_2->setMaxVisibleItems(100);
        comboBox_2->setMaxCount(100);
        comboBox_2->setModelColumn(0);
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(140, 190, 51, 31));
        comboBox->setMaxVisibleItems(100);
        comboBox->setMaxCount(100);
        comboBox->setModelColumn(0);
        comboBox_4 = new QComboBox(tab);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(390, 240, 51, 31));
        comboBox_4->setMaxVisibleItems(100);
        comboBox_4->setMaxCount(100);
        comboBox_4->setModelColumn(0);
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 140, 111, 31));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 140, 91, 31));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 90, 51, 31));
        label->setFont(font);
        lineEdit_4 = new QLineEdit(tab);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(390, 90, 111, 31));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 190, 91, 31));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        fileChooser = new QPushButton(tab);
        fileChooser->setObjectName(QString::fromUtf8("fileChooser"));
        fileChooser->setGeometry(QRect(470, 30, 31, 31));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(280, 190, 111, 31));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 240, 91, 31));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox_3 = new QComboBox(tab);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(390, 190, 51, 31));
        comboBox_3->setMaxVisibleItems(100);
        comboBox_3->setMaxCount(100);
        comboBox_3->setModelColumn(0);
        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(true);
        lineEdit_3->setGeometry(QRect(390, 140, 111, 31));
        lineEdit_3->setReadOnly(false);
        openFileNameLabel = new QLineEdit(tab);
        openFileNameLabel->setObjectName(QString::fromUtf8("openFileNameLabel"));
        openFileNameLabel->setEnabled(false);
        openFileNameLabel->setGeometry(QRect(140, 30, 321, 31));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 30, 91, 31));
        label_9->setFont(font);
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 90, 111, 31));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(280, 240, 111, 31));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 90, 51, 31));
        label_6->setFont(font);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 140, 91, 31));
        label_3->setFont(font);
        confirmButton = new QPushButton(tab);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(140, 310, 71, 31));
        cancelButton = new QPushButton(tab);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(330, 310, 71, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 90, 91, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_10->setFont(font1);
        lineEdit_5 = new QLineEdit(tab_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setEnabled(false);
        lineEdit_5->setGeometry(QRect(170, 90, 251, 31));
        fileChooser_2 = new QPushButton(tab_2);
        fileChooser_2->setObjectName(QString::fromUtf8("fileChooser_2"));
        fileChooser_2->setGeometry(QRect(430, 90, 31, 31));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        scrollTextConfirmButton = new QPushButton(tab_3);
        scrollTextConfirmButton->setObjectName(QString::fromUtf8("scrollTextConfirmButton"));
        scrollTextConfirmButton->setGeometry(QRect(390, 50, 51, 23));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(50, 50, 71, 21));
        QFont font2;
        font2.setPointSize(12);
        label_11->setFont(font2);
        scrollTextContent = new QLineEdit(tab_3);
        scrollTextContent->setObjectName(QString::fromUtf8("scrollTextContent"));
        scrollTextContent->setGeometry(QRect(130, 50, 191, 21));
        scrollTextDeleteButton = new QPushButton(tab_3);
        scrollTextDeleteButton->setObjectName(QString::fromUtf8("scrollTextDeleteButton"));
        scrollTextDeleteButton->setGeometry(QRect(330, 50, 51, 23));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(AddSingleSongWidgetClass);

        tabWidget->setCurrentIndex(2);
        comboBox_2->setCurrentIndex(-1);
        comboBox->setCurrentIndex(-1);
        comboBox_4->setCurrentIndex(-1);
        comboBox_3->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(AddSingleSongWidgetClass);
    } // setupUi

    void retranslateUi(QDialog *AddSingleSongWidgetClass)
    {
        AddSingleSongWidgetClass->setWindowTitle(QApplication::translate("AddSingleSongWidgetClass", "AddSingleSongWidget", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddSingleSongWidgetClass", "\346\255\214\345\220\215\346\213\274\351\237\263\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddSingleSongWidgetClass", "\346\255\214\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddSingleSongWidgetClass", "\351\237\263\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
        fileChooser->setText(QApplication::translate("AddSingleSongWidgetClass", "...", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("AddSingleSongWidgetClass", "\346\226\207\344\273\266\347\247\215\347\261\273\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddSingleSongWidgetClass", "\350\257\255\347\247\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("AddSingleSongWidgetClass", "\346\226\207\344\273\266\350\267\257\345\276\204\357\274\232", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("AddSingleSongWidgetClass", "\346\255\214\346\233\262\345\210\206\347\261\273\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AddSingleSongWidgetClass", "\346\255\214\346\230\237\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddSingleSongWidgetClass", "\346\255\214\345\220\215\345\255\227\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        confirmButton->setText(QApplication::translate("AddSingleSongWidgetClass", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("AddSingleSongWidgetClass", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AddSingleSongWidgetClass", "\345\215\225\351\246\226\345\212\240\346\255\214", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("AddSingleSongWidgetClass", "\346\225\260\346\215\256\345\272\223\346\226\207\344\273\266\357\274\232", 0, QApplication::UnicodeUTF8));
        fileChooser_2->setText(QApplication::translate("AddSingleSongWidgetClass", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AddSingleSongWidgetClass", "\346\211\271\351\207\217\345\212\240\346\255\214", 0, QApplication::UnicodeUTF8));
        scrollTextConfirmButton->setText(QApplication::translate("AddSingleSongWidgetClass", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("AddSingleSongWidgetClass", "\346\273\232\345\212\250\345\255\227\345\271\225\357\274\232", 0, QApplication::UnicodeUTF8));
        scrollTextDeleteButton->setText(QApplication::translate("AddSingleSongWidgetClass", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AddSingleSongWidgetClass", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddSingleSongWidgetClass: public Ui_AddSingleSongWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSINGLESONGWIDGET_H
