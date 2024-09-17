#include "user.h"

// Getter methods
QString User::getName() const { return name; }
int User::getAge() const { return age; }
QString User::getGender() const { return gender; }
float User::getWeight() const { return weight; }
float User::getHeight() const { return height; }
QString User::getBloodPressure() const { return bloodPressure; }
QString User::getGoal() const { return goal; }
int User::getSleepHours() const { return sleepHours; }

// Setter methods
void User::setName(const QString &name) { this->name = name; }
void User::setAge(int age) { this->age = age; }
void User::setGender(const QString &gender) { this->gender = gender; }
void User::setWeight(float weight) { this->weight = weight; }
void User::setHeight(float height) { this->height = height; }
void User::setBloodPressure(const QString &bloodPressure) { this->bloodPressure = bloodPressure; }
void User::setGoal(const QString &goal) { this->goal = goal; }
void User::setSleepHours(int sleepHours) { this->sleepHours = sleepHours; }
