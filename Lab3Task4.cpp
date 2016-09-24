//Discount Calculations - Adam Jackson 20/09/16

//Usual Headers
#include <iostream>
using namespace std;

//To show a pound sign in C++
char pound = 156;

//Main Program
int main() {

	//Initialising Variables
	int Discount = 0;
	int Price = 0;
	int counter = 0;
	int DiscountTotal = 0;
	int Input;

	//Looping for 6 Items
	for (int i = 0; i < 6; i++) {
		
		Input = 0; //Reset Input every time
		counter = counter + 1; //Rolling counter to find the 3rd and 6th position
		cout << "Please enter the cost of item " << counter << "/6" << endl << pound; //Asking the user for the prices
		cin >> Input; //Recieving prices
		Price = Price + Input; //Saving prices as we go

		//To catch the 3rd and 6th price (which will be later discounted
		if ((counter == 3)||(counter == 6)) {
			Discount = Discount + Input; //Saving the prices to be discounted off
		}
	}

	//Final calculations and outputs
	DiscountTotal = Price - Discount; //Calculating the total discount
	//Self-Explainitory Outputs
	cout << "The full total of these items is: " << pound << Price << endl;
	cout << "The total discount of these items are: " << pound << Discount << endl;
	cout << "Leaving the final price as: " << pound << DiscountTotal << endl;

	//Finalising the Program
	return 0;
}
