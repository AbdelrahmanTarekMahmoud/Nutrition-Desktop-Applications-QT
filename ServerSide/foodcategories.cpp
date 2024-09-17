#include "foodcategories.h"


FoodCategories::FoodCategories() {
    populateCategories();
}


void FoodCategories::populateCategories() {
    categories["Carbs"] = {"Rice", "Bread", "Pasta", "Potatoes", "SweetPotato"};
    categories["Protein"] = {"Chicken", "Beef", "Eggs", "Beans", "Steak"};
    categories["Sweets"] = {"Chocolate", "Cookies", "Cake", "SugarCane", "Candy"};
    categories["Veggies"] = {"Carrots", "Broccoli", "Spinach", "Cucumber", "Lettuce"};
}
