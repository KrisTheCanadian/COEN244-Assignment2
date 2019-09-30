#pragma once
#include "Room.h"
#include "Guess.h"
#include "ReservationRequest.h"
class HotelManager
{
private:
	unsigned int m_hotel_size;
	Room* roomArray = new Room[m_hotel_size];
	Guess* GuestsArray = new Guess[m_hotel_size];
public:
	bool reserve(ReservationRequest res_request) {
		bool isSucessful = false;
		for (int i = 0; i < m_hotel_size; i++) {
			roomArray[i].get_number(); //get room number
		}

	}
	~HotelManager() { delete[] roomArray; delete[] roomArray; }
};

/*A member function that processes a reservation request received as a parameter.
Reservation will be successful, if a room with requested number of beds is available
during the requested period. If reservation is successfuI, then it should return reservation
request number otherwise zero.*/
