#include "HotelManager.h"

unsigned int HotelManager::reserve(ReservationRequest& res_request) {

	unsigned int month = res_request.get_res().get_month();
	unsigned int day = res_request.get_res().get_day();

	Room* room;
	for (int i = 0; i < m_hotel_size; i++) {
		if (roomArray[i].get_number() != -1 && roomArray[i].get_number() == res_request.get_bed_num())  //get room number that has the SAME number of beds as requested 
		{
			if (roomArray[i].get_reservation(day, month) == 0)
			{
				roomArray[i].get_reservation(day, month) == res_request.get_id(); //put the request id
				return room->get_room(); //returning room number 
			}
		}
	}
	return 0;
}



void HotelManager::reservation_display(ReservationRequest& res_request) {
	if (res_request.get_id() == -1 || res_request.get_id() > res_request.get_count()) {
		std::cout << "[Reservation] This reservation was cancelled or Does not Exist" << std::endl;
		return;
	}
	res_request.get_guest()->display();
	std::cout << "[Reservation] Reservation request #: " << res_request.get_id() << std::endl;
	std::cout << "[Reservation] Number of beds: " << res_request.get_bed_num() << std::endl;
}

void HotelManager::reservation_cancel(ReservationRequest& res_request, Date& date) {
	if (res_request.get_id() == -1 || res_request.get_id() > res_request.get_count()) {
		std::cout << "[Reservation] This reservation was cancelled or Does not Exist" << std::endl;
		return;
	}
	for (int i = 0; i < m_hotel_size; i++) {
		if (ReservationArray[i].get_id() == res_request.get_id()) {

			res_request.set_id(-1); //setting the id to a invalid id
			//unbook the room
			for (int i = 0; i < 30; i++) {
				//rooms in array not initialized
				if (roomArray[i].get_reservation(res_request.get_res().get_month(), res_request.get_res().get_day()) == res_request.get_id()) //double check month and days 
				{
					roomArray[i].remove_reservation(res_request.get_res().get_month(), res_request.get_res().get_day());
				}
			}
		}
	}
}

HotelManager::~HotelManager() { delete[] roomArray; delete[] ReservationArray; }