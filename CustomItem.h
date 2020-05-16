#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H


#include "IceCreamItem.h"
#include <map>
using namespace std;

class CustomItem : public IceCreamItem {
	
	public:
		CustomItem(string size);
		void addTopping(string topping);
		string composeItem();
		double getPrice();

		virtual ~CustomItem();

	protected:
		map<string, int> toppings;
		string size;
		double price;
};
#endif
