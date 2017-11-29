#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>


namespace Ui {
class SettingsDialog;
}

/**
 * @brief The SettingsDialog class
 * in the settings-dialog, we set default-values and settings, we need for the software
 */
class SettingsDialog : public QDialog
{
  Q_OBJECT

public:
  /**
   * @brief SettingsDialog
   * default-constructor
   *
   * @param parent
   * which widget should be the parent
   */
  explicit SettingsDialog(QWidget *parent = 0);

  /**
   * @brief SettingsDialog
   * default-destructor
   */
  ~SettingsDialog();

private:
  Ui::SettingsDialog *ui;
};

#endif // SETTINGSDIALOG_H
