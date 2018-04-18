#pragma once

struct Position
{
	int x;
	int y;
	int z;
	
	/**
	 * \brief Constructor to generate a default position.
	 */
	Position();

	/**
	 * \brief Constructor to generate a position with certain parameters
	 * \param x Represents the x coordinate
	 * \param y Represents the y coordinate
	 * \param z Represents the z coordinate 
	 */
	Position(int x, int y, int z);
};
