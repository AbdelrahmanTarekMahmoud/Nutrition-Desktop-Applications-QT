#include "dietplangenerator.h"
#include <cstdlib>


DietPlanGenerator::DietPlanGenerator(const FoodCategories &foodCategories)
    : foodCategories(foodCategories) {}


QJsonArray DietPlanGenerator::generateDietPlan() const {
    QJsonArray dietPlan;

    // Get the list of all food categories
    QStringList categories = foodCategories.categories.keys();

    // Generate diet plan for each day of the week
    for (int day = 0; day < 7; ++day) {
        QJsonObject dayPlan;
        QJsonArray meals;

        // Generate meals for each day
        for (int meal = 0; meal < 4; ++meal) {
            QStringList mealItems;

            // Select random items from each category
            for (const QString &category : categories) {
                const QList<QString> &items = foodCategories.categories[category];
                mealItems.append(items.at(std::rand() % items.size()));
            }

            // Add meal to the meals array
            meals.append(QString("Meal %1: %2").arg(meal + 1).arg(mealItems.join(", ")));
        }

        // Add meals to the day's plan
        dayPlan["meals"] = meals;

        // Add the day's plan to the diet plan array
        dietPlan.append(dayPlan);
    }

    return dietPlan;
}
