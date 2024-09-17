#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "user.h"
#include "uservalidator.h"

class IUserManager {
public:
    virtual void setUser(const User &user) = 0;
    virtual User getUser() const = 0;
    virtual bool validateUser(QString &errorMessage) const = 0;
    virtual ~IUserManager() = default;
};

class UserManager : public IUserManager {
private:
    User user;
    UserValidator validator;

public:
    void setUser(const User &user) override {
        this->user = user;
    }

    User getUser() const override {
        return user;
    }

    bool validateUser(QString &errorMessage) const override {
        return validator.validate(user, errorMessage);
    }
};

#endif // USERMANAGER_H
