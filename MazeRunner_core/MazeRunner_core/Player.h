#pragma once

#include "Position.h"
#include  <string>

using namespace std;


class Player
{
public:
	Player();
	Player(string &name, Position *position);


private:
	string name_;
	Position *position_;

};
