#ifndef USERVALIDATOR_H
#define USERVALIDATOR_H

#include "namevalidator.h"
#include "bloodpressurevalidator.h"
#include "user.h"
#include <vector>
#include <memory>

class UserValidator {
public:
    UserValidator() {
        validators.push_back(std::make_unique<NameValidator>());
        validators.push_back(std::make_unique<BloodPressureValidator>());
    }

    bool validate(const User &user, QString &errorMessage) const {
        // Validate name
        if (!validators[0]->validate(user.getName(), errorMessage)) {
            return false;
        }

        if (!validateUserAttributes(user, errorMessage))
        {
            return false;
        }

        // Validate blood pressure
        if (!validators[1]->validate(user.getBloodPressure(), errorMessage)) {
            return false;
        }

        // Validate other user attributes
        return true;
    }

private:
    bool validateUserAttributes(const User &user, QString &errorMessage) const {
        if (user.getAge() <= 15) {
            errorMessage = "Age must be greater than 15.";
            return false;
        }
        if (user.getWeight() <= 30) {
            errorMessage = "Weight must be greater than 30.";
            return false;
        }
        if (user.getHeight() <= 55) {
            errorMessage = "Height must be greater than 55.";
            return false;
        }
        if (user.getSleepHours() < 4 || user.getSleepHours() > 12) {
            errorMessage = "Sleep hours must be between 4 and 12.";
            return false;
        }
        return true;
    }

    std::vector<std::unique_ptr<BaseValidator>> validators;
};

#endif // USERVALIDATOR_H
