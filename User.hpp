#pragma once
#include <string>
#include <list>
#include "Meeting.hpp"
using namespace std;

class User{
private:
	string name;
	string password;
	string email;
	string phone;
public:
	User(string name,string password,string email,string phone);
	string getName();
	void setName(string name);
	string getPassword();
	void setPassword(string password);
	string getEmail();
	void setEmail(string email);
	string getPhone();
	void setPhone(string phone);
//	list<Meeting> getAllMeetings();
//	list<Meeting> getAllSponsorMeetings();
//	list<Meeting> getAllParticipateMeetings();

};