#include "Player.h"
#include <string>

Player::Player()
{
	this->name_ = "player";
	this->position_ = new Position();
}
Player::Player(string &name, Position *position)
{
	this->name_ = name;
	this->position_ = position;
}
