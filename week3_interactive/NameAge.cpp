#include "NameAge.h"
#include <iostream>
using namespace std;

//Ask the user for her/his name eg.Alice
//Display personalized message, eg.Hello Alice!


void NameAge::interactWithUserV1()
{


	string myName;


	cout << "What is your name? ";
	cin >> myName;
	cout << "Hello " << myName << "!" << endl;





}


//Create a loop with 4 iterations. (for loop)

//If iteration is even, then ask for age.
//If iteration is odd, then ask for name.

//Ask the user for her / his age.eg. 60
//Display personalized message, eg. "So, you are 60 years old!"


// Version 2 code ready to be implemented
void NameAge::interactWithUserV2()
{

	//creating a loop with four interations
	for (int i = 0; i < 8; i++)//3 parts in a for loop, Counter; condition for continuing; increment

	{

		if ((i % 2) == 0)// i is tracking the iteration number

		{

			int myAge;
			string myName;


			//If iteration is even, then ask for age.
			cout << "What is your age? ";
			cin >> myAge;
			cout << "So you are " << myAge << " yrs. old!" << endl;

		}


		else if ((i % 2) == 1)// i is tracking the iteration number

		{

			int myAge;
			string myName;
			//If iteration is odd, then ask for name.

			cout << "What is your name? ";
			cin >> myName;
			cout << "Hello " << myName << "!" << endl << endl;



		}
	}
}