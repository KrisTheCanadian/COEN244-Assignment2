#include "ReservationRequest.h"

ReservationRequest::ReservationRequest(Guest& guest, int bed_num, Date& checkin, Date& checkout)
	: m_guest(&guest), m_bed_num(bed_num), m_checkin(checkin), m_checkout(checkout)
{
	m_id = s_count;
	s_count++;
}
ReservationRequest::ReservationRequest() {}


Guest* ReservationRequest::get_guest() { return m_guest; }
void ReservationRequest::set_guest(Guest* other_guest) { m_guest = other_guest; }
unsigned int ReservationRequest::get_count() { return s_count; }
void ReservationRequest::set_bed_num(unsigned int bed_num) { m_bed_num = bed_num; }
unsigned int ReservationRequest::get_bed_num() { return m_bed_num; }
void ReservationRequest::set_checkin(Date& checkin) { m_checkin = checkin; }
Date ReservationRequest::get_checkin() { return m_checkin; }
void ReservationRequest::set_checkout(Date& checkout) { m_checkout = checkout; }
Date ReservationRequest::get_checkout() { return m_checkout; }
int ReservationRequest::get_id() { return m_id; }
void ReservationRequest::set_id(int id) { m_id = id; }
Date ReservationRequest::get_res() { return m_res; };
void ReservationRequest::set_res() {};
void ReservationRequest::display() {
	m_guest->display();
	std::cout << "[Reservation Request] Reservation request #: " << m_id << std::endl;
	std::cout << "[Reservation Request] # of beds: " << m_id << std::endl;
	std::cout << "[Reservation Request] Reservation Date" << std::endl;
	m_res.display();
	std::cout << "[Reservation Request] Checkin Date" << std::endl;
	m_checkin.display();
	std::cout << "[Reservation Request] Checkout Date" << std::endl;
	m_checkout.display();
};



