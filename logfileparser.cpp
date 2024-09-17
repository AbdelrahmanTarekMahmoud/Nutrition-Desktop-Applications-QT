#include "logfileparser.h"
#include <QFile>
#include <QTextStream>
#include <QRegularExpression>

void LogFileParser::parse(const QString &filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return;
    }

    ageData.clear();
    maleCount = 0;
    femaleCount = 0;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QRegularExpression ageRegex(": \\w+, (\\d+),");
        QRegularExpression genderRegex(": \\w+, \\d+, (\\w+),");

        QRegularExpressionMatch ageMatch = ageRegex.match(line);
        if (ageMatch.hasMatch()) {
            int age = ageMatch.captured(1).toInt();
            ageData.append(age);
        }

        QRegularExpressionMatch genderMatch = genderRegex.match(line);
        if (genderMatch.hasMatch()) {
            QString gender = genderMatch.captured(1);
            if (gender == "Male") {
                maleCount++;
            } else if (gender == "Female") {
                femaleCount++;
            }
        }
    }

    file.close();
}

QVector<int> LogFileParser::getAgeData() const {
    return ageData;
}

int LogFileParser::getMaleCount() const {
    return maleCount;
}

int LogFileParser::getFemaleCount() const {
    return femaleCount;
}
