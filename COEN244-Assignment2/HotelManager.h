#pragma once
#include "Room.h"
#include "Guest.h"
#include "ReservationRequest.h"
#include <iostream>
class HotelManager
{
private:
	unsigned int room_array_index = 0;
	unsigned int request_array_index = 0;
	unsigned int m_hotel_size;
	Room* roomArray = new Room[m_hotel_size];
	ReservationRequest* ReservationArray = new ReservationRequest[m_hotel_size]; 
public:
	HotelManager(unsigned int hotel_size, Room room, ReservationRequest res);
	HotelManager(unsigned int hotel_size, Room room);
	HotelManager(unsigned int hotel_size);
	HotelManager(HotelManager& copied);
	unsigned int reserve(ReservationRequest& res_request);
	void reservation_display(ReservationRequest& res_request);
	void reservation_cancel(ReservationRequest& res_request, Date& date);
	~HotelManager();
};