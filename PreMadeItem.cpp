#include "PreMadeItem.h"
using namespace std;

PreMadeItem::PreMadeItem(string name, string size) : IceCreamItem(size) {
	this->size = size;
	this->name = name;
	if(this->size == "small") {
		this->price = 4.00;
	}else if(this->size == "medium") {
		this->price = 6.00;
	}else if (this->size == "large") {
		this->price = 7.50;
	}
}

string PreMadeItem::composeItem() {
	return "Pre-made Size: " + this->size + "\n" + 
	       "Pre-made Item: " + this->name + "\n" +
	       "Price: $" + to_string(this->price).substr(0, std::to_string(this->price).find(".") + 2 + 1) + "\n";
}

double PreMadeItem::getPrice() {
        return this->price;
}

PreMadeItem::~PreMadeItem() {}
