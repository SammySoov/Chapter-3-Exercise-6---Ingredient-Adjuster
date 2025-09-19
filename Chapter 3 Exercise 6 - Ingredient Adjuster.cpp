/*Project Name : Chapter 3 Exercise 6 - Ingredient Adjuster
File Name : Chapter 3 Exercise 6 - Ingredient Adjuster.cpp
Programmer : Samuel Soovajian
Date : 09 / 13
Requirements:
*/

#include <iostream>
using namespace std;

int main()
{
	double amount = 0;
	double sugar = 1.5/48;
	double butter = 1/48;
	double flour = 2.75/48;

	cout << "How many cookies do you want? " << endl;
	cin >> amount;

	sugar = sugar * amount;
	butter = butter * amount;
	flour = flour * amount;

	cout << "You will need " << sugar << " cups of sugar" << endl;
	cout << "You will need " << butter << " cups of butter" << endl;
	cout << "You will need " << flour << " cups of flour" << endl;


}


