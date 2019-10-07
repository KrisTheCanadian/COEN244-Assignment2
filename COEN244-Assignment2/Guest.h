#pragma once
#include <iostream>
#include "Date.h"
class Guest
{
private:
	std::string m_name;
	Date m_birthday;
	int m_room = -1;
public:
	Guest();
	~Guest();
	Guest(std::string name, Date birthday);
	std::string get_name();
	Date get_birthday();
	int get_room();
	void set_room(int room);
	void display();

};

