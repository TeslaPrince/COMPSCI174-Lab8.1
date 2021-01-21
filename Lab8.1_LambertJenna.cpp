//Jenna Lambert
//Lab 8.1

//Header files
#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>

//Namespace
using namespace std;

//Prototypes
double getSales(string);
void findHighest(double[], string[]);

//~~~~~~MAIN~~~~~
int main() {
	//declare/initialize arrays
	double Sales[4];
	string Branches[4] = {"Northeast", "Southeast", "Northwest", "Southwest"};
	
	//Get the sales ammounts for each branch
	for (int i = 0; i < 4; i++) {
		Sales[i] = getSales(Branches[i]);
	}
	
	//Call findHighest and pass both arrays to the function
	findHighest(Sales, Branches);
}

//~~~~GETSALES~~~
double getSales(string branchName) {
	//declare variables
	double saleAmount = 0.00;
	
	//Prompt the user for the amount
	cout << "Ender the dollar ammount of " << branchName << " division: ";
	
	//take input and make sure it is above 0
	while (saleAmount >= 0) {
		cin >> saleAmount;
	}
		return saleAmount;
}

//~~FINDHIGHEST~~
void findHighest(double Sales[4], string Branches[4]) {
	//declare variables
	double highest = 0;
	int win;

	//check which amout is the highest
	for (int i = 0; i < 4; i++)
	{
		if (highest < Sales[i]) {
			highest = Sales[i];
			win = i;
		}
	}
	
	//display final verdict
	cout << "Division " << Branches[win] << " has the greatest sales: $" << fixed << setprecision(2) << Sales[win];
}