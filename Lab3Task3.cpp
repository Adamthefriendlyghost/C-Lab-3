//Swimming Pool Calculator - Adam Jackson 20/09/16

//Usual Headers
#include <iostream>
using namespace std;

//To display a pound sign in C++
char pound = 156;

//Initialising Main Program
int main() {

	//Initialising Variables
	int age = 0;
	int stop = 0;
	int totalpeople = 0;
	double totalcost = 0;
	bool discount = false;

	//Looping until -1 is entered
	while (stop != -1) {

		cout << "Please enter the age of the swimmer: "; //Asking the user for the swimmer's age
		cin >> age;
		
		totalpeople = totalpeople + 1; //A basic counter to determine the amount of swimmers

		//The various conditioned statements (could have used a switch but there was only 4)
		if (age < 16) {
			totalcost = totalcost + 2.50;
		}
		if (age > 65) {
			totalcost = totalcost + 3;
		}
		if ((age >= 16) && (age <= 65)) {
			totalcost = totalcost + 5;
		}
		//To determine if the discount for 6 people is applied
		if (totalpeople > 5) {
			discount = true;
		}
		//Asking if the user wants to finish entering data
		cout << "Would you like to end the program? (Yes=-1/No=1)";
		cin >> stop;
	}
	//Calculating the discount
	if (discount == true) {
		totalcost = totalcost - ((totalcost/10) * 2);
	}
	//Outputting the total price
	cout << "The total price for " << totalpeople << " person(s) is: " << pound << totalcost << endl;
	//Exiting the main program
	return 0;
}