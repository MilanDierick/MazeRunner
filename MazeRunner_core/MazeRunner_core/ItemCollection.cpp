#include "ItemCollection.h"
#include "Item.h"

ItemCollection::ItemCollection()
= default;

ItemCollection::ItemCollection(std::vector<Item> itemCollection)
{
	this->Collection = itemCollection;
}
