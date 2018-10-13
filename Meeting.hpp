/*		Meeting
	- sponsor: string
	- participator: vector<string>
	- startData: Data
	- endDate: Date
	- title: string
	
	+ Meeting()
	+ Meeting(string,vector<string>,Data,data,string)
	+ getSponsor(): string
	+ setSponsor(string): void
	+ getParticipator(): vector<string>
	+ setParticipator(vector<string>): void
	+ getStartDate(): Date
	+ setStartDate(Date): void
	+ getEndDate(): Date
	+ setEndDate(Date): void
	+ getTitle(): string
	+ setTitle(string): void
*/
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Date.hpp"
class Meeting{
private:
	string sponsor;
	vector<string> participator;
	Date startDate;
	Date endDate;
	string title;
public:
	Meeting();
	Meeting(string sponsor,vector<string> participator,Date startDate,Date endDate,string title);
	string getSponsor();
	void setSponsor(string sponsor);
	vector<string> getParticipator();
	void setParticipator(vector<string> participator);
	Date getStartDate();
	void setStartDate(Date startDate);
	Date getEndDate();
	void setEndDate(Date endDate);
	string getTitle();
	void setTitle(string title);
};
