#include "ItemCollection.h"

ItemCollection::ItemCollection()
= default;

ItemCollection::ItemCollection(const std::vector<Item> itemCollection)
{
	this->collection = itemCollection;
}
