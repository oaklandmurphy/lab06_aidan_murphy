#include "IceCreamItem.h"
#include <iostream>

using namespace std;

IceCreamItem::IceCreamItem(string size) {
	this->size = size;
}

double IceCreamItem::getPrice() {
	return this->price;
}


