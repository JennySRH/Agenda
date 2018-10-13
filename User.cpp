#include "User.hpp"


User::User(string name,string password,string email,string phone) {
	this->name = name;
	this->password = password;
	this->email = email;
	this->phone = phone;
}

string User::getName() {
	return name;
}

void User::setName(string name) {
	this->name = name;
}

string User::getPassword() {
	return password;
}

void User::setPassword(string password) {
	this->password = password;
}

string User::getEmail() {
	return email;
}

void User::setEmail(string email) {
	this->email = email;
}

string User::getPhone() {
	return this->phone;
}

void User::setPhone(string phone) {
	this->phone = phone;
}
