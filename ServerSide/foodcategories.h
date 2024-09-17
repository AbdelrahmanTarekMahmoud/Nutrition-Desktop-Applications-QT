#ifndef FOODCATEGORIES_H
#define FOODCATEGORIES_H

#include <QString>
#include <QList>
#include <QMap>


class FoodCategories {
public:

    FoodCategories();


    QMap<QString, QList<QString>> categories;

private:

    void populateCategories();
};

#endif // FOODCATEGORIES_H
