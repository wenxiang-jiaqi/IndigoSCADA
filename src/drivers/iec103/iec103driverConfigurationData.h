/**********************************************************************
--- Qt Architect generated file ---
File: Iec103driverConfigurationData.h
Last generated: Thu Jan 4 16:13:32 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#ifndef Iec103driverConfigurationData_included
#define Iec103driverConfigurationData_included

#include <qt.h>

class Iec103driverConfigurationData : public QDialog
{
	Q_OBJECT
	public:
	Iec103driverConfigurationData(QWidget *parent = NULL, const char *name = NULL);
	virtual ~Iec103driverConfigurationData();
	protected slots:
	virtual void Help() =0;
	virtual void OkClicked() =0;
	protected:
	QLabel *Name;
	QSpinBox *NItems;
	QSpinBox *PollInterval;
	QLineEdit *IEC103LinkAddressText;
	QLineEdit *BaudRateText;
	QLineEdit *COMPortNameText;
};
#endif // Iec103driverConfigurationData_included

