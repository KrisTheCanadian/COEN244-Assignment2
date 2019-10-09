#include "HotelManager.h"

unsigned int HotelManager::reserve(ReservationRequest& res_request) {

	unsigned int month = res_request.get_res().get_month();
	unsigned int day = res_request.get_res().get_day();

	for (int i = 0; i < room_array_index; i++) {

		if (roomArray[i].get_number() != -1 && roomArray[i].get_number() == res_request.get_bed_num())  //get room number that has the SAME number of beds as requested 
		{
			if (roomArray[i].get_reservation(day, month) == 0)
			{
				roomArray[i].set_reservation(day, month, res_request.get_id()); //put the request id in room calendar
				res_request.get_guest()->set_room(roomArray[i].get_room()); //assign the guest a room number
				ReservationArray[request_array_index++] = res_request; //assign reservationrequest to reservation array
				return roomArray[i].get_room(); //returning room number 
			}
		}
	}
	return 0;
}

HotelManager::HotelManager(unsigned int hotel_size, Room room, ReservationRequest res) : m_hotel_size(hotel_size)
{
	room.set_room(room_array_index);
	roomArray[room_array_index++] = room; //assume room is valid
	this->reserve(res);
	
}

HotelManager::HotelManager(unsigned int hotel_size, Room room) : m_hotel_size(hotel_size)
{
	room.set_room(room_array_index);
	roomArray[room_array_index++] = room; //assume room is valid
}

HotelManager::HotelManager(unsigned int hotel_size) : m_hotel_size(hotel_size) {}

HotelManager::HotelManager(HotelManager& copied)
	: room_array_index(copied.room_array_index), request_array_index(copied.request_array_index),
	m_hotel_size(copied.m_hotel_size)
{
	roomArray = new Room[m_hotel_size];
	for (int i = 0; i < room_array_index; i++)
	{
		roomArray[i] = copied.roomArray[i];
	}
	ReservationArray = new ReservationRequest[m_hotel_size];
	for (int i = 0; i < request_array_index; i++)
	{
		ReservationArray[i] = copied.ReservationArray[i];
	}
}

void HotelManager::reservation_display(ReservationRequest& res_request) {
	if (res_request.get_id() == -1 || res_request.get_id() > res_request.get_count()) {
		std::cout << "[Reservation] This reservation was canceled or Does not Exist" << std::endl;
		return;
	}
	std::cout << "[Reservation Request]" << std::endl;
	res_request.get_guest()->display();
	std::cout << "[Reservation] Reservation request #: " << res_request.get_id() << std::endl;
	std::cout << "[Reservation] Number of beds: " << res_request.get_bed_num() << std::endl;
}

void HotelManager::reservation_cancel(ReservationRequest& res_request, Date& date) {
	if (res_request.get_id() == -1 || res_request.get_id() > res_request.get_count()) {
		std::cout << "[Reservation] This reservation was canceled or Does not Exist" << std::endl;
		return;
	}

	int room_location = res_request.get_guest()->get_room(); //this is the room number which corresponds to the index of the array where the room is located
	if (room_location == -1 || room_location > room_array_index) {
		return; //bad array index *maybe wrong hotel.
	}

	int month = res_request.get_res().get_month();
	int day = res_request.get_res().get_day();
	roomArray[room_location].set_reservation(day, month, 0); //making it available again
	res_request.set_id(-1); //setting the id of reservation request to a invalid id 
}

HotelManager::~HotelManager() { delete[] roomArray; delete[] ReservationArray; std::cout << "Memory has be released" << std::endl; }