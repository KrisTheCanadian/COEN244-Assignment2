#include <iostream>
#include "Date.h"
#include "Guest.h"
#include "HotelManager.h"
#include "ReservationRequest.h"
#include "Room.h"

void test() 
{
	//assume perfect user (according to professor)!!!!!!!
	//no validation of parameters.


	Date checkin1(1, 12, 2019);			//need to add date validations
	Date checkout1(5, 12, 2019);
	Date reservation1(4, 12, 2019);

	Room room1(2);

	Date guest1_birthday(28, 5, 1971);

	Guest guest1("Elon Musk",guest1_birthday); //when a reservation is created. This guest must have his room set to the appropriate room #
											   //He must also be removed from that room when a cancelation is created or expired
											   //logically, he should have a reservation number instead of a room number.

	ReservationRequest guest1_resrequest(guest1, 2, checkin1, checkout1, reservation1);

	int hotel_size = 100;
	HotelManager Hotel1(hotel_size,room1, guest1_resrequest);
	std::cout << "Elon books room 1" << std::endl;
	Hotel1.reservation_display(guest1_resrequest);


	Date guest2_birthday(24, 9, 1998);
	Date checkin2(1, 12, 2019);			//need to add date validations
	Date checkout2(5, 12, 2019);
	Date reservation2(4, 12, 2019);
	Guest guest2("Kris", guest2_birthday);
	ReservationRequest guest2_resrequest(guest2, 2, checkin2, checkout2, reservation2);



	Hotel1.reserve(guest2_resrequest);
	Hotel1.reservation_cancel(guest1_resrequest, reservation1); //asking for the date of cancellation is no necessary since resrequest holds it.
	Hotel1.reserve(guest2_resrequest);

	std::cout << "Elon cancels room 1" << std::endl;
	Hotel1.reservation_display(guest1_resrequest);
	std::cout << "Kris booked room 1" << std::endl;
	Hotel1.reservation_display(guest2_resrequest);
	
}

int main() {
	
	test();

	return 0;
}