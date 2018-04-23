#pragma once
#include <vector>
#include "Item.h"

struct ItemCollection
{
	std::vector<Item> collection;
	ItemCollection();
	explicit ItemCollection(std::vector<Item> itemCollection);
};
