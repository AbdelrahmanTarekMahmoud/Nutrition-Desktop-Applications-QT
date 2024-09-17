#ifndef IFILEPARSER_H
#define IFILEPARSER_H

#include <QString>
#include <QVector>

class IFileParser {
public:
    virtual void parse(const QString &filePath) = 0;
    virtual QVector<int> getAgeData() const = 0;
    virtual int getMaleCount() const = 0;
    virtual int getFemaleCount() const = 0;
    virtual ~IFileParser() {}  // Add virtual destructor
};

#endif // IFILEPARSER_H

