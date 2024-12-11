#pragma once
#include "widget/button.h"
#include "widget/lineedit.h"
#include "widget/label.h"

#include <QWidget>

class TitleBar : public QWidget {
    Q_OBJECT
public:
    TitleBar(QWidget *parent = nullptr);
    ~TitleBar() override {
    }

private:
    void createUi();
    void connectSig();

private slots:
    void slotCloseBtnClicked();
    void slotMaximizeBtnClicked();
    void slotMinimizeBtnClicked();
    void slotShowPlayBarBtnClicked();
    void slotThemeBtnClicked();
    void slotSettingBtnClicked();
    void slotMessageBtnClicked();
    void slotUserInfoBtnClicked();

private:
    widget::VectorButton *m_pCloseBtn = nullptr;
    widget::VectorButton *m_pMaximizeBtn = nullptr;
    widget::VectorButton *m_pMinimizeBtn = nullptr;
    widget::VectorButton *m_pShowPlayBarBtn = nullptr;
    widget::VectorButton *m_pThemeBtn = nullptr;
    widget::VectorButton *m_pSettingBtn = nullptr;
    widget::VectorButton *m_pMessageBtn = nullptr;
    widget::VectorButton *m_pUserInfoBtn = nullptr;

    widget::DiscountLabel *m_pDiscountLabel = nullptr;

    widget::VectorButton *m_pIdentifySongBtn = nullptr;
    widget::VectorButton *m_pBackBtn = nullptr;
    
    widget::SearchLineEdit *m_pSearchLineEdit = nullptr;
};