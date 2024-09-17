#ifndef NAMEVALIDATOR_H
#define NAMEVALIDATOR_H

#include "basevalidator.h"
#include <QRegularExpression>

class NameValidator : public BaseValidator {
public:
    bool validate(const QString &value, QString &errorMessage) const override {
        if (value.length() < 3) {
            errorMessage = "Name must be at least 3 characters long.";
            return false;
        }
        QRegularExpression regex("^[a-zA-Z ]+$");
        QRegularExpressionMatch match = regex.match(value);
        if (!match.hasMatch()) {
            errorMessage = "Name must contain only letters and spaces.";
            return false;
        }
        return true;
    }
};

#endif // NAMEVALIDATOR_H
