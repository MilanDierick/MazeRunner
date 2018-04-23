#include "Item.h"

Item::Item()
{
	this->name = "";
	this->id = "";
	
}
Item::Item(const std::string& name, const std::string& id)
{
	this->name = name;
	this->id = id;
}

