//Date Parser

#include <iostream>
#include <string>
using namespace std;

int main() {

	int days;
	int dayselect;
	cout << "select the date";
	cin >> dayselect;
	
	if (dayselect == 01, 21, 31) {
		if (dayselect == 01) {
			cout << "1st";
		}
		else {
			cout << dayselect << "st";
		}
	}
	
	if (dayselect == 02, 22) {
		if (dayselect == 02) {
			cout << "2nd";
		}
		else {
			cout << dayselect << "nd";
		}
	}

	if (dayselect == 03, 23) {
		if (dayselect == 03) {
			cout << "3rd";
		}
		else {
			cout << dayselect << "rd";
		}
	}

	else {
		cout << dayselect << "th";
	}
}