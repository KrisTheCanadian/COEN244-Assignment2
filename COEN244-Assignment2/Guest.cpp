#include "Guest.h"

Guest::Guest() {}
Guest::~Guest() {}
Guest::Guest(std::string name, Date birthday) :m_name(name), m_birthday(birthday), m_room(0){}
std::string Guest::get_name() { return m_name; }
Date Guest::get_birthday() { return m_birthday; }
int Guest::get_room() { return m_room; }
void Guest::set_room(int room) { m_room = room; }
void Guest::display() {
	std::cout << "[Guest] Name of Guest: " << m_name << std::endl;
	m_birthday.display();
	std::cout << "[Guest] Reserved Room number: " << m_room << std::endl;
}