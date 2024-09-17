#ifndef BLOODPRESSUREVALIDATOR_H
#define BLOODPRESSUREVALIDATOR_H

#include "basevalidator.h"
#include <QRegularExpression>

class BloodPressureValidator : public BaseValidator {
public:
    bool validate(const QString &value, QString &errorMessage) const override {
        QRegularExpression regex("^\\d{2,3}/\\d{2,3}$");
        QRegularExpressionMatch match = regex.match(value);
        if (!match.hasMatch()) {
            errorMessage = "Blood pressure must be in the format 'xyz/ab'.";
            return false;
        }
        return true;
    }
};

#endif // BLOODPRESSUREVALIDATOR_H
