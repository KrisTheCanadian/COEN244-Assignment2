#include "Room.h"
#include <iostream>
Room::Room(int s_num, Date date) : m_bed_number(s_num) {
	for (int i = 0; i < 12; i++) { for (int j = 0; j < 30; j++) { m_reserve[i][j] = 0; } }
	unsigned int month = date.get_month();
	unsigned int day = date.get_day();
	unsigned int year = date.get_year();
}
Room::Room(int s_num) : m_bed_number(s_num) {
	for (int i = 0; i < 12; i++) { for (int j = 0; j < 30; j++) { m_reserve[i][j] = 0; } }
}
Room::Room() { for (int i = 0; i < 12; i++) { for (int j = 0; j < 30; j++) { m_reserve[i][j] = 0; } } }
unsigned int Room::get_number() { return m_bed_number; }
int Room::get_room() { return m_room; }
void Room::set_room(int room) { m_room = room; }
int Room::get_reservation(int month , int day) { return m_reserve[month-1][day-1]; } 
void Room::display() {
	std::cout << "[Room] Number of Beds: " << m_bed_number << std::endl;
	std::cout << "[Room] Room Number: " << m_room << std::endl;
}
void Room::set_reservation(int month, int day, int res_num) { m_reserve[month - 1][day - 1] = res_num; }