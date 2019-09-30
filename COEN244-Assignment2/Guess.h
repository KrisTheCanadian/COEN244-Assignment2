#pragma once
#include <string>
#include "Date.h"
#include "Room.h"
class Guess
{
private:
	std::string m_name;
	Date m_birthday;
	unsigned int m_room;
public:
	Guess();
	~Guess();
	std::string get_name();
	Date get_birthday();
	unsigned int get_room();
};

