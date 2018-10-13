#pragma once
#include <string>
#include <sstream>

class Date{
private:
	int year;
	int month;
	int day;
	int hour;
	int minute;
public:
	Date();	
	Date(string date);
	bool checkDate(string date);
	Date stringToDate(string date);
	string dateToString();
}
