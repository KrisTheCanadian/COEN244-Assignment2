#include "Guest.h"

Guest::Guest() {}
Guest::~Guest() {}
Guest::Guest(std::string name, Date birthday, unsigned int room)
	:m_name(name), m_birthday(birthday), m_room(room)
{

}
std::string Guest::get_name() { return m_name; }
Date Guest::get_birthday() { return m_birthday; }
unsigned int Guest::get_room() { return m_room; }
void Guest::display() {
	std::cout << "[Guest] Name of Guest: " << m_name << std::endl;
	m_birthday.display();
	std::cout << "[Guest] Reserved Room number: " << m_room << std::endl;
}