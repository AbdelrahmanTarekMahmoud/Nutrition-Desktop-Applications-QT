#ifndef USER_H
#define USER_H

#include <QString>

class User {
public:
    User() = default;

    QString getName() const;
    int getAge() const;
    QString getGender() const;
    float getWeight() const;
    float getHeight() const;
    QString getBloodPressure() const;
    QString getGoal() const;
    int getSleepHours() const;

    void setName(const QString &name);
    void setAge(int age);
    void setGender(const QString &gender);
    void setWeight(float weight);
    void setHeight(float height);
    void setBloodPressure(const QString &bloodPressure);
    void setGoal(const QString &goal);
    void setSleepHours(int sleepHours);

private:
    QString name;
    int age;
    QString gender;
    float weight;
    float height;
    QString bloodPressure;
    QString goal;
    int sleepHours;
};

#endif // USER_H
