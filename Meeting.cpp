#include "Meeting.hpp"


//	string sponsor;
//	vector<string> participator;
//	Date startDate;
//	Date endDate;
//	string title;

Meeting::Meeting() {}

Meeting::Meeting(string sponsor,vector<string> participator,Date startDate,Date endDate,string title){
	this->sponsor = sponsor;
	this->participator = participator;
	this->startDate = startDate;
	this->endDate = endDate;
	this->title = title;
}

string Meeting::getSponsor(){
	return sponsor;
}

void Meeting::setSponsor(string sponsor) {
	this->sponsor = sponsor;
}

vector<string> Meeting::getParticipator() {
	return participator;
}

void Meeting::setParticipator(vector<string> participator) {
	this->participator = participator;
}

Date Meeting::getStartDate() {
	return startDate;
}

void Meeting::setStartDate(Date startDate) {
	this->startDate = startDate;
}

Date Meeting::getEndDate() {
	return endDate;
}

void Meeting::setEndDate(Date endDate) {
	this->endDate = endDate;
}

string Meeting::getTitle() {
	return title;
}
	
void Meeting::setTitle(string title) {
	this->title = title;
}
