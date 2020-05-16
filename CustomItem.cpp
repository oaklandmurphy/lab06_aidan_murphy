#include "CustomItem.h"
#include <iostream>
using namespace std;

CustomItem::CustomItem(string size) : IceCreamItem(size) {
	this->size = size;

        if(this->size == "small") {
                this->price = 3.00;
        }else if(this->size == "medium") {
                this->price = 5.00;
        }else if (this->size == "large") {
                this->price = 6.50;
        }


}

void CustomItem::addTopping (string topping) {
	this->price = this->price + .40;
	if(toppings.count(topping) > 0) {
		toppings[topping] = toppings[topping] + 1;
	}

	toppings.insert(pair<string, int> (topping, 1));
}

string CustomItem::composeItem() {
	string ans = "Custom Size: " + this->size + "\n" +
		     "Toppings:\n";
	map<std::string, int>::iterator it = toppings.begin();
 
	// Iterate over the map using Iterator till end.
	while (it != toppings.end())
	{
		string word = it->first;
 		int count = it->second;
		ans += word + ": " + to_string(count) + " oz\n";
 
		// Increment the Iterator to point to next entry
		it++;
	}
	ans +=  "Price: $" + to_string(this->price).substr(0, std::to_string(this->price).find(".") + 2 + 1) + "\n";

	return ans;

}

double CustomItem::getPrice() {
        return this->price;
}

CustomItem::~CustomItem() {}
