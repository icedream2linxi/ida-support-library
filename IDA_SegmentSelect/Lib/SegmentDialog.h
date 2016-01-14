
#pragma once

#include <Windows.h>
#include <QtWidgets/QDialog>

// The default macro creates unnecessary instanced conversion code
#undef QStringLiteral
#define QStringLiteral(_str) _str
#include "ui_SegmentDialog.h"

#define USE_DANGEROUS_FUNCTIONS
#include <ida.hpp>
#include <idp.hpp>
#include "SegSelect.h"

class SegmentDialog : public QDialog, public Ui::Dialog
{
    Q_OBJECT
public:
    SegmentDialog(QWidget *parent, UINT flags, LPCSTR title, LPCSTR styleSheet, LPCSTR icon);
	virtual ~SegmentDialog() { Q_CLEANUP_RESOURCE(QtResource); }
    void saveGeometry() { geom = geometry(); }
    SegSelect::segments *getSelected();

private:
    static QRect geom;

private slots:
    void onDoubleRowClick(int row, int column);
};


