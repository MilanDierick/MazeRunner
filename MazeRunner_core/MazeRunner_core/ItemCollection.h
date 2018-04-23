#pragma once
#include <vector>
#include "Item.h"

struct ItemCollection
{
	std::vector<Item> Collection;
	ItemCollection();
	ItemCollection(std::vector<Item>Collection);
};
