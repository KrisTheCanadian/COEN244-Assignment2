#include "Room.h"
#include <iostream>
Room::Room(int s_num, Date date, int m_room) : m_bed_number(s_num), m_reserve() {
	for (int i = 0; i < 12; i++) { for (int j = 0; j < 30; j++) { m_reserve[i][j] = 0; } }
	unsigned int month = (int)date.get_month();
	unsigned int day = date.get_day();
	unsigned int year = date.get_year();
	m_reserve[month][day];
}
Room::Room(int s_num, int m_room) : m_bed_number(s_num) {
	for (int i = 0; i < 12; i++) { for (int j = 0; j < 30; j++) { m_reserve[i][j] = 0; } }
}
Room::Room() { for (int i = 0; i < 12; i++) { for (int j = 0; j < 30; j++) { m_reserve[i][j] = 0; } } }
unsigned int Room::get_number() { return m_bed_number; }
int Room::get_room() { return m_room; }
int Room::get_reservation(int day, int month) { return m_reserve[month][day]; }
void Room::remove_reservation(int month, int day) { m_reserve[month][day] = 0; }
void Room::display() {
	std::cout << "[Room] Number of Beds: " << m_bed_number << std::endl;
	std::cout << "[Room] Room Number: " << m_room << std::endl;
}