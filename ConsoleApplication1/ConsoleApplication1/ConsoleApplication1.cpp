// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string> //include string for purpose of requesting name as a var
using namespace std;




int main()
{
	std::cout << "Hello world!  Tell me your name: " << std::endl;

	string myname;
	std::cin >> myname;

	int number;
	std::cout << "Pick a number from 1 to 5: ";
	std::cin >> number;
	std::cout << "You picked: " << number << std::endl;

	string names[5] = { "Jack", "Jim", "John", "Jerry", "Bill" };

	string compname = names[int(number)];

	std::cout << "Nice to meet you, " << myname << ", my name is " << compname << std::endl;
	return 0;
}