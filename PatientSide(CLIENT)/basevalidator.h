#ifndef BASEVALIDATOR_H
#define BASEVALIDATOR_H

#include <QString>

class BaseValidator {
public:
    virtual bool validate(const QString &value, QString &errorMessage) const = 0;
    virtual ~BaseValidator() = default;
};

#endif // BASEVALIDATOR_H
