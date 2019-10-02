#pragma once
#include "Guest.h"

class ReservationRequest
{
	private:
		Guest* m_guest;
		static int s_count;
		int m_id = 0; //reservation
		unsigned int m_requests = 0;
		unsigned int m_bed_num = 0;
		Date m_res;
		Date m_checkin;
		Date m_checkout;
	public:
		ReservationRequest();
		ReservationRequest(Guest& guest, int bed_num, Date& checkin, Date& checkout, Date& res);
		// START OF Get - Set Functions //
		Guest* get_guest();  
		void set_guest(Guest* other_guest);
		unsigned int get_count();
		void set_bed_num(unsigned int bed_num);
		unsigned int get_bed_num();
		void set_checkin(Date& checkin);
		Date get_checkin();
		void set_checkout(Date& checkout);
		Date get_checkout();
		int get_id();
		void set_id(int id);
		Date get_res();
		void set_res();
		// END OF Get - Set Functions //
		void display();
};


