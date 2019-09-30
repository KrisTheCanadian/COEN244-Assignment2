#pragma once
#include "Date.h"
class Room
{
private:
	unsigned int m_bed_number;
	unsigned int m_reserve[12][30]; //month //day //0 if day is available but reservation number if not available.
	unsigned int m_room;
public:
	Room() {}; // default constructor
	Room(int , Date , int );
	Room(int, int);
	unsigned int get_number();
	unsigned int get_room();
	auto get_reversation();
};

