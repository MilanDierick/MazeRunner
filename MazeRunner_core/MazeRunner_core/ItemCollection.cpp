#include "ItemCollection.h"

ItemCollection::ItemCollection()
= default;

ItemCollection::ItemCollection(std::vector<int> itemCollection)
{
	this->Collection = itemCollection;
}
