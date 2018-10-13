#pragma once
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

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
	Date & operator=(Date other);
};
