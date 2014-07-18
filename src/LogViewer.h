//
//  LogViewer.h
//  StackManagerQt/src
//
//  Created by Mohammed Nafees on 07/10/14.
//  Copyright (c) 2014 High Fidelity. All rights reserved.
//

#ifndef LOGVIEWER_H
#define LOGVIEWER_H

#include <QWidget>
#include <QFile>

namespace Ui {
    class LogViewer;
}

class LogViewer : public QWidget
{
    Q_OBJECT
public:
    explicit LogViewer(const QString& type, QWidget* parent = 0);
    ~LogViewer();

public slots:
    void updateForFileChanges();

private:
    Ui::LogViewer *ui;
    QString _outputLogFilePath;
    QString _errorLogFilePath;
};

#endif
