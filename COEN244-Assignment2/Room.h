#pragma once
#include "Date.h"
#include "ReservationRequest.h"
class Room
{
private:
	unsigned int m_bed_number;
	unsigned int m_reserve[12][30]; //month //day //0 if day is available but reservation number if not available.
	int m_room = -1; //only 1 room can be assigned per hotel, a room cannot belong to 2 hotels. (-1 is unassigned)
public:
	Room(); // default constructor
	Room(int , Date);
	Room(int);
	unsigned int get_number();
	int get_room();
	void set_room(int room);
	int get_reservation(int month,int day);
	void display();
	void set_reservation(int month, int day, int res_num);
};

