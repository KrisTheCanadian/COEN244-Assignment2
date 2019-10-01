#include "Date.h"
#include <iostream>
void Date::set_month(unsigned int s_month) { m_month = s_month; };
void Date::set_day(unsigned int s_day) { m_day = s_day; };
void Date::set_year(unsigned int s_year) { m_year = s_year; };
unsigned int Date::get_month() { return m_month; };
unsigned int Date::get_day() { return m_day; };
unsigned int Date::get_year() { return m_year; };
Date::Date(unsigned int day, int month, unsigned int year) :m_day(day), m_month(month), m_year(year) {}
Date::Date() {}
void Date::display() 
{
	std::cout << "[Date] : MM-DD-YYYY: " << m_month << "-" << m_day << "-" << m_year << std::endl;
}