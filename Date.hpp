#pragma once
#include <string>
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
