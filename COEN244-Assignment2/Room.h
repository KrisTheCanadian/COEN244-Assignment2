#pragma once
#include "Date.h"
class Room
{
private:
	unsigned int m_number;
	unsigned int m_reserve[12][30]; //month //day //0 if day is available but reservation number if not available.
	unsigned int m_room;


public:
	Room(int s_num, Date date, int m_room ) : m_number(s_num), m_reserve() {

		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 30; j++) {
				m_reserve[i][j] = 0;
			}
		}

		unsigned int month = (int)date.get_month();
		unsigned int day = date.get_day();
		unsigned int year = date.get_year();

		m_reserve[month][day];
		
	}
	Room(int s_num, int m_room) : m_number(s_num), m_reserve() {

		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 30; j++) {
				m_reserve[i][j] = 0;
			}
		}
	}
	
};

