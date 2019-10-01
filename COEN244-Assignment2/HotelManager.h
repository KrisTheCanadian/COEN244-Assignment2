#pragma once
#include "Room.h"
#include "Guest.h"
#include "ReservationRequest.h"
#include <iostream>
class HotelManager
{
private:
	unsigned int m_hotel_size;
	Room* roomArray = new Room[m_hotel_size];
	ReservationRequest* ReservationArray = new ReservationRequest[m_hotel_size];
public:
	unsigned int reserve(ReservationRequest& res_request);
	void reservation_display(ReservationRequest& res_request);
	void reservation_cancel(ReservationRequest& res_request, Date& date);
	~HotelManager();
};