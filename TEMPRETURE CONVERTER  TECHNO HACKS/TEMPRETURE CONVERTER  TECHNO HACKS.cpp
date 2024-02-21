// TEMPRETURE CONVERTER  TECHNO HACKS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double tofarhenhiet(double a)// a is the tempretur in celicius 
{
	double Farhenheit = (9.0 / 5) * (a)-32;
	return Farhenheit;
}
double tocelicius(double b) // b is is tempreture in farhenheit
{
	double Celicius = (b - 32) * (5.0 / 9);
	return Celicius;
}

int main()
{
	int choice; 
	double tempreture;
	std::cout << "ENTER 1 TO CONVERT TO FARHENHEIT \N ENTER 2 TO CONVERT TO CELICIUS";
	std::cin >> choice;
	std::cout << "Enter the tempreture ";
	std::cin >> tempreture;
	if (choice == 1) {
	  std::cout<<"In farhenhiet:"<<tofarhenhiet(tempreture);
	}
	else if (choice == 2) { std::cout<<" In Celicius:" << tocelicius(tempreture); }
	else { cout << "invelid choice"; }

	return 0;
   
}

