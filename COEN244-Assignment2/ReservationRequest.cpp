#include "ReservationRequest.h"

ReservationRequest::ReservationRequest(Guess& guess, int bed_num, Date& checkin, Date& checkout)
	: m_guess(&guess), m_bed_num(bed_num), m_checkin(checkin), m_checkout(checkout)
{
	s_count++;
}

// START OF Get - Set Functions //
Guess* ReservationRequest::get_guess() { return m_guess; }
void ReservationRequest::set_guess(Guess* other_guess) { m_guess = other_guess; }
unsigned int ReservationRequest::get_count() { return s_count; }
void ReservationRequest::set_bed_num(unsigned int bed_num) { m_bed_num = bed_num; }
unsigned int ReservationRequest::get_bed_num() { return m_bed_num; }
void ReservationRequest::set_checkin(Date& checkin) { m_checkin = checkin; }
Date ReservationRequest::get_checkin() { return m_checkin; }
void ReservationRequest::set_checkout(Date& checkout) { m_checkout = checkout; }
Date ReservationRequest::get_checkout() { return m_checkout; }
// END OF Get - Set Functions //



