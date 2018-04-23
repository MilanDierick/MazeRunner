#include "IdProvider.h"

IdProvider::IdProvider()
{
	this->id = 0;
	count = 0;
}
IdProvider::IdProvider(const int id, const static int count)
{
	this->id = id;
	IdProvider::count = count;
}

std::string IdProvider::IdToString(const int id)
{
	auto idstring = std::to_string(id);
	return idstring;
}

int IdProvider::count;

