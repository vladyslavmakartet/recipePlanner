#ifndef ENTRYDIALOG_H
#define ENTRYDIALOG_H

#include <QDialog>

namespace Ui {
class EntryDialog;
}

class EntryDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EntryDialog(QWidget *parent = nullptr);
    ~EntryDialog();

private:
    Ui::EntryDialog *ui;
};

#endif // ENTRYDIALOG_H
