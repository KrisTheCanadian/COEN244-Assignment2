#pragma once
#include "Room.h"
#include "Guess.h"
#include "ReservationRequest.h"
#include <iostream>
class HotelManager
{
private:
	unsigned int m_hotel_size;
	Room* roomArray = new Room[m_hotel_size];
	Guess* GuestsArray = new Guess[m_hotel_size];
public:
	unsigned int reserve(ReservationRequest res_request) {
		for (int i = 0; i < m_hotel_size; i++) {
			if (roomArray[i].get_number() != -1  && roomArray[i].get_number() > res_request.get_bed_num())  //get room number that has the SAME number of beds as requested 
			{
				return roomArray[i].get_number();
			}
		}
		return 0;
	}

	void reservation_display(ReservationRequest res_request) {
		if (res_request.get_id() == -1 || res_request.get_id() > res_request.get_count()) {
			std::cout << "[Reservation] This reservation was cancelled or Does not Exist" << std::endl;
		}
		std::cout << "[Reservation] Guess: " << res_request.get_guess() << std::endl;
		std::cout << "[Reservation] Reservation request #: " << res_request.get_id() << std::endl;
		std::cout << "[Reservation] Number of beds: " << res_request.get_bed_num() << std::endl;
		std::cout << "[Reservation] Checkin: MM-DD-YYYY: " << res_request.get_checkin().get_month() << "-" << res_request.get_checkin().get_day() << "-" << res_request.get_checkin().get_year() <<  std::endl;
		std::cout << "[Reservation] Checkout: MM-DD-YYYY: " << res_request.get_checkout().get_month() << "-" << res_request.get_checkout().get_day() << "-" << res_request.get_checkout().get_year() << std::endl;
	}

	void reservation_cancel(ReservationRequest res_request, Date date) {

		if (!(res_request.get_id() > 0) && !(res_request.get_id() < res_request.get_count())) {
			res_request.set_id(-1); //setting id to invalid number

		}
		

	}

	~HotelManager() { delete[] roomArray; delete[] GuestsArray; }
};