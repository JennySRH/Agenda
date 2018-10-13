#include "Date.hpp"
#include "Meeting.hpp"

int main() {
	Date a("2014-02-13/12:33");
	cout << a.dateToString() << endl;
}