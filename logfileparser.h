#ifndef LOGFILEPARSER_H
#define LOGFILEPARSER_H

#include "ifileparser.h"
#include <QVector>

class LogFileParser : public IFileParser {
public:
    void parse(const QString &filePath) override;
    QVector<int> getAgeData() const override;
    int getMaleCount() const override;
    int getFemaleCount() const override;

private:
    QVector<int> ageData;
    int maleCount;
    int femaleCount;
};

#endif // LOGFILEPARSER_H
