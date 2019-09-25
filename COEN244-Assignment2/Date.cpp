#include "Date.h"

void Date::set_month(unsigned int s_month) { m_month = (Month)s_month; };
void Date::set_day(unsigned int s_day) { m_day = s_day; };
void Date::set_day(unsigned int s_year) { m_year = s_year; };
Date::Date(unsigned int day, int month, unsigned int year) :m_day(day), m_month((Month)month), m_year(year) {}