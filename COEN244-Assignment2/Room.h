#pragma once
#include "Date.h"
#include "ReservationRequest.h"
class Room
{
private:
	unsigned int m_bed_number;
	unsigned int m_reserve[12][30]; //month //day //0 if day is available but reservation number if not available.
	int m_room = 0;
public:
	Room(); // default constructor
	Room(int , Date , int );
	Room(int, int);
	unsigned int get_number();
	int get_room();
	int get_reservation(int monday,int day);
	void display();
	void remove_reservation(int month, int day);
};

