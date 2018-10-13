#include "Date.hpp"
#include "Meeting.hpp"

int main() {
	Date a("2014-02-13/12:33");
	cout << a.dateToString() << endl;
	vector<string> b;
	b.push_back("ajkl");
	Meeting meet("asdf",b,a,a,"hello world");
	cout << meet.getSponsor() << endl;
	cout << meet.getTitle() << endl;
	cout << meet.getStartDate().dateToString() << endl;
}