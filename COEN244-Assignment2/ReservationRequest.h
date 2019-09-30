#pragma once
#include "Guess.h"

class ReservationRequest
{
	private:
		Guess* m_guess;
		static int s_count;
		unsigned int m_id = 0;
		unsigned int m_requests = 0;
		unsigned int m_bed_num = 0;
		Date m_checkin;
		Date m_checkout;
	public:
		ReservationRequest(Guess& guess, int bed_num, Date& checkin, Date& checkout);
		// START OF Get - Set Functions //
		Guess* get_guess();
		void set_guess(Guess* other_guess);
		unsigned int get_count();
		void set_bed_num(unsigned int bed_num);
		unsigned int get_bed_num();
		void set_checkin(Date& checkin);
		Date get_checkin();
		void set_checkout(Date& checkout);
		Date get_checkout();
		// END OF Get - Set Functions //
};

