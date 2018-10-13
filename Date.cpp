#include "Date.hpp"

Date::Date(){}

Date::Date(string date) {	
	if(checkDate(date)){
		setDate(date);
	}
}

void Date::setDate(string date) {
	year = date.substr(0,4);
	month = date.substr(5,2);
	day = date.substr(8,2);
	hour = date.substr(11,2);
	minute = date.substr(14,2)
}

bool Date::checkDate(string date) {
	if(date.length() != 16) {
		return false;
	}
	for(int i = 0;i < 4;i ++) {
		if(date[i] < '0' || date[i] > '9') {
			return false;
		}
	}
	for(int i = 5;i < 7;i ++) {
		if(date[i] < '0' || date[i] > '9') {
			return false;
		}
	}
	for(int i = 8;i < 10;i ++) {
		if(date[i] < '0' || date[i] > '9') {
			return false;
		}
	}
	for(int i = 11;i < 13;i ++) {
		if(date[i] < '0' || date[i] > '9') {
			return false;
		}
	}
	for(int i = 14;i < 16;i ++) {
		if(date[i] < '0' || date[i] > '9') {
			return false;
		}
	}
	int year_t,month_t,day_t,hour_t,minute_t;
	string year_temp = date.substr(0,4);
	string month_temp = date.substr(5,2);
	string day_temp = date.substr(8,2);
	string hour_temp = date.substr(11,2);
	string minute_temp = date.substr(14,2)
	stringstream ss;
	ss << year_temp;
	ss >> year_t;
	ss.clear();
	ss << month_temp;
	ss >> month_t;
	ss.clear();
	ss << day_temp;
	ss >> day_t;
	ss.clear();
	ss << hour_temp;
	ss >> hour_t;
	ss.clear();
	ss << minute_temp;
	ss >> minute_t;
	ss.clear();
	if(year_t < 1000) {
		return false;
	}
	if(month_t > 12 || month_t < 1){
		return false;
	}
	switch(month_t){
		case 1,3,5,7,8,10,12: 
			if(day_t > 31 || day_t < 1) {
				return false;
			}
			break;
		case 2:
			if( data_t != 29 && year_t%400 == 0 ) {
				return false
			}
			else if(data_t != 28){
				return false;
			}
			break;
		default:
			if(day_t > 30 || day_t < 1) {
				return false;
			}
			break;
	}
	if(hour_t > 23 || hour_t < 0) {
		return false;
	}
	if(minute_t > 59 || minute_t < 0) {
		return false;
	}
	return true;
}

Date Date::stringToDate(string date){
	Date temp(date);
	return temp;
}

string Date::dateToString(){
	string date = "";
	date += year;
	date += "-";
	date += month;
	date += "-";
	date += day;
	date += "/";
	date += hour;
	date += ":";
	date += minute;
	return date;
}
