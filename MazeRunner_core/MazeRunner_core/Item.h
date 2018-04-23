#pragma once
#include <string>

class Item
{
public:
	std::string name;
	std::string id;
	Item();
	Item(const std::string& name, const std::string& id);	
};
