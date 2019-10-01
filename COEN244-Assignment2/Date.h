#pragma once
class Date
{
private:
	unsigned int m_day;
	unsigned int m_month;
	unsigned int m_year;
	
public:
	void set_month(unsigned int s_month);
	void set_day(unsigned int s_day);
	void set_year(unsigned int s_year);
	unsigned int get_month();
	unsigned int get_day();
	unsigned int get_year();
	Date(unsigned int day, int month, unsigned int year);
	Date();
	void display();
};