#ifndef BASEVALIDATOR_H
#define BASEVALIDATOR_H

#include "user.h"
#include <QString>

class BaseValidator {
public:
    virtual bool validate(const User &user, QString &errorMessage) const = 0;
    virtual ~BaseValidator() = default;
};

#endif // BASEVALIDATOR_H
