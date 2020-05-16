#ifndef PREMADEITEM_H
#define PREMADEITEM_H


#include "IceCreamItem.h"
using namespace std;

class PreMadeItem : public IceCreamItem {

	public:
		PreMadeItem(string name, string size);
                virtual ~PreMadeItem();
		string composeItem();
		double getPrice();
	
	protected:
		string name;
		string size;
		double price;
};
#endif
