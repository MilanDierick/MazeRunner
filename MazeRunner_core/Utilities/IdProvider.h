#pragma once
#include <string>

class IdProvider
{
public:
	int id;
	static int count;
	IdProvider();
	IdProvider(int id,static int count);
	static std::string IdToString(const int id);
};
