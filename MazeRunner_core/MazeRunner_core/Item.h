#pragma once
#include  <vector>

using namespace std;

class Item
{
public:
	Item();
	Item(vector<int> itemcollection);

private:
	vector<int> itemcollection;
	
};
