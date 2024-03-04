/********************************************************************************
** Form generated from reading UI file 'linwriter.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINWRITER_H
#define UI_LINWRITER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_linwriter
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_Text;
    QAction *actionSave_As;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionSelect_All;
    QAction *actionFind;
    QAction *actionFind_Replace;
    QAction *actionBold;
    QAction *actionItalics;
    QAction *actionUnderline;
    QAction *actionStrike_Through;
    QAction *actionFont;
    QAction *actionBackground;
    QAction *actionText_Color;
    QAction *actionHighlight;
    QAction *actionAlign_Left;
    QAction *actionAlign_Right;
    QAction *actionAlign_Center;
    QAction *actionAlign_ustified;
    QAction *actionBullet_List;
    QAction *actionNumber_List;
    QAction *actionCheckbox;
    QAction *actionImage;
    QAction *actionSpread_Sheet_Table_Insert;
    QAction *actionText_From_File_Insert;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionContents;
    QAction *actionFAQ;
    QAction *actionAbout;
    QAction *actionHTML;
    QAction *actionPDF;
    QAction *actionText_Markdown;
    QAction *actionRich_Text;
    QAction *actionPreferences;
    QAction *actionQuick_Save;
    QAction *actionUnderine;
    QAction *actionFormatting_Off;
    QAction *actionPrint_Preview;
    QAction *actionSave_as_Writer_Document;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuExport_As;
    QMenu *menuSave;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QMenu *menuColor;
    QMenu *menuText;
    QMenu *menuInsert;
    QMenu *menuView;
    QMenu *menuHelp;
    QMenu *menuSettings;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *linwriter)
    {
        if (linwriter->objectName().isEmpty())
            linwriter->setObjectName(QString::fromUtf8("linwriter"));
        linwriter->resize(751, 720);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(linwriter->sizePolicy().hasHeightForWidth());
        linwriter->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Comfortaa")});
        font.setPointSize(11);
        linwriter->setFont(font);
        linwriter->setDocumentMode(false);
        actionNew = new QAction(linwriter);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-create-document-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(linwriter);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-opened-folder-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave_Text = new QAction(linwriter);
        actionSave_Text->setObjectName(QString::fromUtf8("actionSave_Text"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-save-64.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSave_Text->setIcon(icon2);
        actionSave_As = new QAction(linwriter);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-save-as-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionSave_As->setIcon(icon3);
        actionPrint = new QAction(linwriter);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-print-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionPrint->setIcon(icon4);
        actionExit = new QAction(linwriter);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-exit-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionExit->setIcon(icon5);
        actionUndo = new QAction(linwriter);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-undo-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionUndo->setIcon(icon6);
        actionRedo = new QAction(linwriter);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-redo-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionRedo->setIcon(icon7);
        actionCut = new QAction(linwriter);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-cut-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionCut->setIcon(icon8);
        actionCopy = new QAction(linwriter);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon9);
        actionPaste = new QAction(linwriter);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-paste-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionPaste->setIcon(icon10);
        actionDelete = new QAction(linwriter);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-exit-64(1).png"), QSize(), QIcon::Active, QIcon::On);
        actionDelete->setIcon(icon11);
        actionSelect_All = new QAction(linwriter);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-select-all-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionSelect_All->setIcon(icon12);
        actionFind = new QAction(linwriter);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-find-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionFind->setIcon(icon13);
        actionFind_Replace = new QAction(linwriter);
        actionFind_Replace->setObjectName(QString::fromUtf8("actionFind_Replace"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-analyze-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionFind_Replace->setIcon(icon14);
        actionBold = new QAction(linwriter);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionBold->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8("../images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon15.addFile(QString::fromUtf8("../images/bold.png"), QSize(), QIcon::Active, QIcon::On);
        actionBold->setIcon(icon15);
        actionItalics = new QAction(linwriter);
        actionItalics->setObjectName(QString::fromUtf8("actionItalics"));
        actionItalics->setCheckable(true);
        actionItalics->setChecked(false);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8("../images/italic2.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon16.addFile(QString::fromUtf8("../images/italic2.png"), QSize(), QIcon::Active, QIcon::On);
        actionItalics->setIcon(icon16);
        actionUnderline = new QAction(linwriter);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        actionUnderline->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8("../images/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon17.addFile(QString::fromUtf8("../images/underline.png"), QSize(), QIcon::Active, QIcon::On);
        actionUnderline->setIcon(icon17);
        actionStrike_Through = new QAction(linwriter);
        actionStrike_Through->setObjectName(QString::fromUtf8("actionStrike_Through"));
        actionStrike_Through->setCheckable(true);
        actionStrike_Through->setChecked(false);
        actionStrike_Through->setEnabled(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8("../images/strikethrough.png"), QSize(), QIcon::Active, QIcon::On);
        actionStrike_Through->setIcon(icon18);
        actionFont = new QAction(linwriter);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8("../images/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon19.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-font-book-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionFont->setIcon(icon19);
        actionBackground = new QAction(linwriter);
        actionBackground->setObjectName(QString::fromUtf8("actionBackground"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8("../images/fill-color.png"), QSize(), QIcon::Active, QIcon::On);
        actionBackground->setIcon(icon20);
        actionText_Color = new QAction(linwriter);
        actionText_Color->setObjectName(QString::fromUtf8("actionText_Color"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8("../images/text-color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionText_Color->setIcon(icon21);
        actionHighlight = new QAction(linwriter);
        actionHighlight->setObjectName(QString::fromUtf8("actionHighlight"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-highlight-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionHighlight->setIcon(icon22);
        actionAlign_Left = new QAction(linwriter);
        actionAlign_Left->setObjectName(QString::fromUtf8("actionAlign_Left"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8("../images/align-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlign_Left->setIcon(icon23);
        actionAlign_Right = new QAction(linwriter);
        actionAlign_Right->setObjectName(QString::fromUtf8("actionAlign_Right"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8("../images/align-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon24.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-align-text-right-64.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAlign_Right->setIcon(icon24);
        actionAlign_Center = new QAction(linwriter);
        actionAlign_Center->setObjectName(QString::fromUtf8("actionAlign_Center"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8("../images/align-center.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon25.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-align-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionAlign_Center->setIcon(icon25);
        actionAlign_ustified = new QAction(linwriter);
        actionAlign_ustified->setObjectName(QString::fromUtf8("actionAlign_ustified"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8("../images/align-justify.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlign_ustified->setIcon(icon26);
        actionBullet_List = new QAction(linwriter);
        actionBullet_List->setObjectName(QString::fromUtf8("actionBullet_List"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-list-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionBullet_List->setIcon(icon27);
        actionNumber_List = new QAction(linwriter);
        actionNumber_List->setObjectName(QString::fromUtf8("actionNumber_List"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-numbered-list-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionNumber_List->setIcon(icon28);
        actionCheckbox = new QAction(linwriter);
        actionCheckbox->setObjectName(QString::fromUtf8("actionCheckbox"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8("../images/checkbox-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheckbox->setIcon(icon29);
        actionImage = new QAction(linwriter);
        actionImage->setObjectName(QString::fromUtf8("actionImage"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-image-file-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionImage->setIcon(icon30);
        actionSpread_Sheet_Table_Insert = new QAction(linwriter);
        actionSpread_Sheet_Table_Insert->setObjectName(QString::fromUtf8("actionSpread_Sheet_Table_Insert"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-insert-table-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionSpread_Sheet_Table_Insert->setIcon(icon31);
        actionText_From_File_Insert = new QAction(linwriter);
        actionText_From_File_Insert->setObjectName(QString::fromUtf8("actionText_From_File_Insert"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-add-file-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionText_From_File_Insert->setIcon(icon32);
        actionZoom_In = new QAction(linwriter);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-zoom-in-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionZoom_In->setIcon(icon33);
        actionZoom_Out = new QAction(linwriter);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-search-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionZoom_Out->setIcon(icon34);
        actionContents = new QAction(linwriter);
        actionContents->setObjectName(QString::fromUtf8("actionContents"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-index-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionContents->setIcon(icon35);
        QFont font1;
        font1.setPointSize(12);
        actionContents->setFont(font1);
        actionFAQ = new QAction(linwriter);
        actionFAQ->setObjectName(QString::fromUtf8("actionFAQ"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-faq-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionFAQ->setIcon(icon36);
        actionAbout = new QAction(linwriter);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-info-64.png"), QSize(), QIcon::Active, QIcon::On);
        actionAbout->setIcon(icon37);
        actionHTML = new QAction(linwriter);
        actionHTML->setObjectName(QString::fromUtf8("actionHTML"));
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-html-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHTML->setIcon(icon38);
        actionPDF = new QAction(linwriter);
        actionPDF->setObjectName(QString::fromUtf8("actionPDF"));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-pdf-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPDF->setIcon(icon39);
        actionText_Markdown = new QAction(linwriter);
        actionText_Markdown->setObjectName(QString::fromUtf8("actionText_Markdown"));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-txt-64.png"), QSize(), QIcon::Normal, QIcon::On);
        actionText_Markdown->setIcon(icon40);
        actionRich_Text = new QAction(linwriter);
        actionRich_Text->setObjectName(QString::fromUtf8("actionRich_Text"));
        QIcon icon41;
        icon41.addFile(QString::fromUtf8("../images/rtf-document.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRich_Text->setIcon(icon41);
        actionPreferences = new QAction(linwriter);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/new/prefix1_icons/Icons8_Lunacy/icons8-preferences-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferences->setIcon(icon42);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Comfortaa")});
        font2.setBold(true);
        actionPreferences->setFont(font2);
        actionQuick_Save = new QAction(linwriter);
        actionQuick_Save->setObjectName(QString::fromUtf8("actionQuick_Save"));
        QIcon icon43;
        icon43.addFile(QString::fromUtf8("../images/quick-save-close-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuick_Save->setIcon(icon43);
        actionUnderine = new QAction(linwriter);
        actionUnderine->setObjectName(QString::fromUtf8("actionUnderine"));
        QIcon icon44;
        icon44.addFile(QString::fromUtf8("../images/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderine->setIcon(icon44);
        actionFormatting_Off = new QAction(linwriter);
        actionFormatting_Off->setObjectName(QString::fromUtf8("actionFormatting_Off"));
        QIcon icon45;
        icon45.addFile(QString::fromUtf8("../images/clear-formatting-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFormatting_Off->setIcon(icon45);
        actionPrint_Preview = new QAction(linwriter);
        actionPrint_Preview->setObjectName(QString::fromUtf8("actionPrint_Preview"));
        QIcon icon46;
        icon46.addFile(QString::fromUtf8("../images/print-preview-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint_Preview->setIcon(icon46);
        actionSave_as_Writer_Document = new QAction(linwriter);
        actionSave_as_Writer_Document->setObjectName(QString::fromUtf8("actionSave_as_Writer_Document"));
        centralwidget = new QWidget(linwriter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 10, 911, 621));
        textEdit->setStyleSheet(QString::fromUtf8(""));
        linwriter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(linwriter);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 751, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuExport_As = new QMenu(menuFile);
        menuExport_As->setObjectName(QString::fromUtf8("menuExport_As"));
        menuSave = new QMenu(menuFile);
        menuSave->setObjectName(QString::fromUtf8("menuSave"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        menuColor = new QMenu(menuFormat);
        menuColor->setObjectName(QString::fromUtf8("menuColor"));
        menuText = new QMenu(menuFormat);
        menuText->setObjectName(QString::fromUtf8("menuText"));
        menuInsert = new QMenu(menubar);
        menuInsert->setObjectName(QString::fromUtf8("menuInsert"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        linwriter->setMenuBar(menubar);
        statusbar = new QStatusBar(linwriter);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        linwriter->setStatusBar(statusbar);
        toolBar = new QToolBar(linwriter);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setMovable(false);
        toolBar->setFloatable(true);
        linwriter->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(linwriter);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        toolBar_2->setToolButtonStyle(Qt::ToolButtonIconOnly);
        linwriter->addToolBar(Qt::LeftToolBarArea, toolBar_2);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menubar->addAction(menuInsert->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionQuick_Save);
        menuFile->addAction(menuSave->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionPrint_Preview);
        menuFile->addSeparator();
        menuFile->addAction(menuExport_As->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuExport_As->addAction(actionHTML);
        menuExport_As->addAction(actionPDF);
        menuExport_As->addAction(actionText_Markdown);
        menuSave->addAction(actionSave_Text);
        menuSave->addAction(actionSave_As);
        menuSave->addAction(actionRich_Text);
        menuSave->addAction(actionSave_as_Writer_Document);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionFind_Replace);
        menuFormat->addAction(actionBold);
        menuFormat->addAction(actionItalics);
        menuFormat->addAction(actionUnderline);
        menuFormat->addAction(actionStrike_Through);
        menuFormat->addSeparator();
        menuFormat->addSeparator();
        menuFormat->addAction(actionFormatting_Off);
        menuFormat->addAction(actionFont);
        menuFormat->addSeparator();
        menuFormat->addAction(menuColor->menuAction());
        menuFormat->addSeparator();
        menuFormat->addAction(menuText->menuAction());
        menuColor->addAction(actionBackground);
        menuColor->addAction(actionText_Color);
        menuColor->addAction(actionHighlight);
        menuText->addAction(actionAlign_Left);
        menuText->addAction(actionAlign_Right);
        menuText->addAction(actionAlign_Center);
        menuText->addAction(actionAlign_ustified);
        menuInsert->addAction(actionBullet_List);
        menuInsert->addAction(actionNumber_List);
        menuInsert->addAction(actionCheckbox);
        menuInsert->addSeparator();
        menuInsert->addAction(actionImage);
        menuInsert->addSeparator();
        menuInsert->addAction(actionSpread_Sheet_Table_Insert);
        menuInsert->addSeparator();
        menuInsert->addAction(actionText_From_File_Insert);
        menuView->addAction(actionZoom_In);
        menuView->addAction(actionZoom_Out);
        menuHelp->addAction(actionContents);
        menuHelp->addAction(actionFAQ);
        menuHelp->addAction(actionAbout);
        menuSettings->addAction(actionPreferences);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionQuick_Save);
        toolBar->addAction(actionSave_Text);
        toolBar->addAction(actionSave_As);
        toolBar->addAction(actionPrint);
        toolBar->addAction(actionPrint_Preview);
        toolBar->addSeparator();
        toolBar->addAction(actionSelect_All);
        toolBar->addAction(actionDelete);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionFind);
        toolBar->addAction(actionFind_Replace);
        toolBar->addSeparator();
        toolBar->addAction(actionZoom_In);
        toolBar->addAction(actionZoom_Out);
        toolBar->addSeparator();
        toolBar->addAction(actionContents);
        toolBar->addAction(actionFAQ);
        toolBar->addAction(actionAbout);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);
        toolBar_2->addAction(actionBold);
        toolBar_2->addAction(actionItalics);
        toolBar_2->addAction(actionUnderline);
        toolBar_2->addAction(actionStrike_Through);
        toolBar_2->addAction(actionFormatting_Off);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionFont);
        toolBar_2->addAction(actionBackground);
        toolBar_2->addAction(actionText_Color);
        toolBar_2->addAction(actionHighlight);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionAlign_Left);
        toolBar_2->addAction(actionAlign_Center);
        toolBar_2->addAction(actionAlign_Right);
        toolBar_2->addAction(actionAlign_ustified);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionImage);
        toolBar_2->addAction(actionSpread_Sheet_Table_Insert);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionBullet_List);
        toolBar_2->addAction(actionNumber_List);
        toolBar_2->addAction(actionCheckbox);
        toolBar_2->addSeparator();

        retranslateUi(linwriter);

        QMetaObject::connectSlotsByName(linwriter);
    } // setupUi

    void retranslateUi(QMainWindow *linwriter)
    {
        linwriter->setWindowTitle(QCoreApplication::translate("linwriter", "linwriter", nullptr));
        actionNew->setText(QCoreApplication::translate("linwriter", "New", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("linwriter", "Create a new document", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("linwriter", "Alt+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("linwriter", "Open", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("linwriter", "Opena document", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("linwriter", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_Text->setText(QCoreApplication::translate("linwriter", "Save As Text", nullptr));
#if QT_CONFIG(tooltip)
        actionSave_Text->setToolTip(QCoreApplication::translate("linwriter", "Save your document to a file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave_Text->setShortcut(QCoreApplication::translate("linwriter", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("linwriter", "Save As Markdown", nullptr));
#if QT_CONFIG(tooltip)
        actionSave_As->setToolTip(QCoreApplication::translate("linwriter", "Save document as", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("linwriter", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("linwriter", "Print", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint->setToolTip(QCoreApplication::translate("linwriter", "Print document to printer or a file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("linwriter", "Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("linwriter", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("linwriter", "Alt+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("linwriter", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        actionUndo->setToolTip(QCoreApplication::translate("linwriter", "Undo previous action", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("linwriter", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("linwriter", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        actionRedo->setToolTip(QCoreApplication::translate("linwriter", "Redo previous action", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("linwriter", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("linwriter", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        actionCut->setToolTip(QCoreApplication::translate("linwriter", "Cut text from document", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("linwriter", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("linwriter", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        actionCopy->setToolTip(QCoreApplication::translate("linwriter", "Copy text to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("linwriter", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("linwriter", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("linwriter", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("linwriter", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete->setToolTip(QCoreApplication::translate("linwriter", "Delete selected text", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("linwriter", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelect_All->setText(QCoreApplication::translate("linwriter", "Select All", nullptr));
#if QT_CONFIG(shortcut)
        actionSelect_All->setShortcut(QCoreApplication::translate("linwriter", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("linwriter", "Find", nullptr));
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("linwriter", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind_Replace->setText(QCoreApplication::translate("linwriter", "Find & Replace", nullptr));
#if QT_CONFIG(shortcut)
        actionFind_Replace->setShortcut(QCoreApplication::translate("linwriter", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBold->setText(QCoreApplication::translate("linwriter", "Bold", nullptr));
        actionItalics->setText(QCoreApplication::translate("linwriter", "Italics", nullptr));
        actionUnderline->setText(QCoreApplication::translate("linwriter", "Underline", nullptr));
        actionStrike_Through->setText(QCoreApplication::translate("linwriter", "Strike Through", nullptr));
        actionFont->setText(QCoreApplication::translate("linwriter", "Font", nullptr));
#if QT_CONFIG(tooltip)
        actionFont->setToolTip(QCoreApplication::translate("linwriter", "change Font face", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBackground->setText(QCoreApplication::translate("linwriter", "Background", nullptr));
#if QT_CONFIG(tooltip)
        actionBackground->setToolTip(QCoreApplication::translate("linwriter", "change Background color", nullptr));
#endif // QT_CONFIG(tooltip)
        actionText_Color->setText(QCoreApplication::translate("linwriter", "Text", nullptr));
#if QT_CONFIG(tooltip)
        actionText_Color->setToolTip(QCoreApplication::translate("linwriter", "change Text color", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHighlight->setText(QCoreApplication::translate("linwriter", "Highlight", nullptr));
        actionAlign_Left->setText(QCoreApplication::translate("linwriter", "Align Left", nullptr));
        actionAlign_Right->setText(QCoreApplication::translate("linwriter", "Align Right", nullptr));
        actionAlign_Center->setText(QCoreApplication::translate("linwriter", "Centered", nullptr));
        actionAlign_ustified->setText(QCoreApplication::translate("linwriter", "Justified", nullptr));
#if QT_CONFIG(tooltip)
        actionAlign_ustified->setToolTip(QCoreApplication::translate("linwriter", "Align text Justified", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBullet_List->setText(QCoreApplication::translate("linwriter", "Bullet List", nullptr));
        actionNumber_List->setText(QCoreApplication::translate("linwriter", "Number List", nullptr));
        actionCheckbox->setText(QCoreApplication::translate("linwriter", "Checkbox", nullptr));
        actionImage->setText(QCoreApplication::translate("linwriter", "Image", nullptr));
#if QT_CONFIG(tooltip)
        actionImage->setToolTip(QCoreApplication::translate("linwriter", "insert an  Image into document", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSpread_Sheet_Table_Insert->setText(QCoreApplication::translate("linwriter", "Spread Sheet Table", nullptr));
        actionText_From_File_Insert->setText(QCoreApplication::translate("linwriter", "Text From File", nullptr));
        actionZoom_In->setText(QCoreApplication::translate("linwriter", "Zoom  In", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_In->setShortcut(QCoreApplication::translate("linwriter", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_Out->setText(QCoreApplication::translate("linwriter", "Zoom Out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_Out->setShortcut(QCoreApplication::translate("linwriter", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionContents->setText(QCoreApplication::translate("linwriter", "Contents", nullptr));
#if QT_CONFIG(shortcut)
        actionContents->setShortcut(QCoreApplication::translate("linwriter", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFAQ->setText(QCoreApplication::translate("linwriter", "FAQ", nullptr));
        actionAbout->setText(QCoreApplication::translate("linwriter", "About", nullptr));
        actionHTML->setText(QCoreApplication::translate("linwriter", "HTML", nullptr));
        actionPDF->setText(QCoreApplication::translate("linwriter", "PDF", nullptr));
        actionText_Markdown->setText(QCoreApplication::translate("linwriter", "MarkDown ", nullptr));
#if QT_CONFIG(tooltip)
        actionText_Markdown->setToolTip(QCoreApplication::translate("linwriter", "Save as Markdown file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRich_Text->setText(QCoreApplication::translate("linwriter", "Save as Rich Text Document", nullptr));
        actionPreferences->setText(QCoreApplication::translate("linwriter", "Preferences", nullptr));
        actionQuick_Save->setText(QCoreApplication::translate("linwriter", "Quick Save", nullptr));
        actionUnderine->setText(QCoreApplication::translate("linwriter", "Underine", nullptr));
        actionFormatting_Off->setText(QCoreApplication::translate("linwriter", "Clear Formatting", nullptr));
        actionPrint_Preview->setText(QCoreApplication::translate("linwriter", "Print Preview", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint_Preview->setToolTip(QCoreApplication::translate("linwriter", "Preview the document for printing", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSave_as_Writer_Document->setText(QCoreApplication::translate("linwriter", "Save as Writer Document", nullptr));
        menuFile->setTitle(QCoreApplication::translate("linwriter", "File", nullptr));
        menuExport_As->setTitle(QCoreApplication::translate("linwriter", "Export As", nullptr));
        menuSave->setTitle(QCoreApplication::translate("linwriter", "Save", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("linwriter", "Edit", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("linwriter", "Format", nullptr));
        menuColor->setTitle(QCoreApplication::translate("linwriter", "Color", nullptr));
        menuText->setTitle(QCoreApplication::translate("linwriter", "Text", nullptr));
        menuInsert->setTitle(QCoreApplication::translate("linwriter", "Insert", nullptr));
        menuView->setTitle(QCoreApplication::translate("linwriter", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("linwriter", "Help", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("linwriter", "Settings", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("linwriter", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("linwriter", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class linwriter: public Ui_linwriter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINWRITER_H
