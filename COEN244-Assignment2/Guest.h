#pragma once
#include <iostream>
#include "Date.h"
class Guest
{
private:
	std::string m_name;
	Date m_birthday;
	unsigned int m_room = 0;
public:
	Guest();
	~Guest();
	Guest(std::string name, Date birthday, unsigned int room);
	std::string get_name();
	Date get_birthday();
	unsigned int get_room();
	void display();

};

