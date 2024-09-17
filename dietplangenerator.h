#ifndef DIETPLANGENERATOR_H
#define DIETPLANGENERATOR_H

#include "foodcategories.h"
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>


class DietPlanGenerator {
public:

    explicit DietPlanGenerator(const FoodCategories &foodCategories);


    QJsonArray generateDietPlan() const;

private:
    FoodCategories foodCategories;
};

#endif // DIETPLANGENERATOR_H
