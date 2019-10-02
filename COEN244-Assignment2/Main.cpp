#include <iostream>
#include "Date.h"
#include "Guest.h"
#include "HotelManager.h"
#include "ReservationRequest.h"
#include "Room.h"

void test() 
{
	Date checkin(1, 12, 2019);
	Date checkout(5, 12, 2019);
	Date reservation(4, 12, 2019);

	Room room(2, 203);
	room.display();
}

int main() {
	
	test();

	return 0;
}