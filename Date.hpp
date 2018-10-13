#pragma once
#include <string>
#include <sstream>

class Date{
private:
	string year;
	string month;
	string day;
	string hour;
	string minute;
public:
	Date();	
	Date(string date);
	bool checkDate(string date);
	void setDate(string date);
	Date stringToDate(string date);
	string dateToString();
}
