/*
Jeff Koss
04/07/24
MS549
*/

// include header files 
#include <iostream>
#include <random>
#include <stdlib.h>
#include <windows.h>
#include <string>

// namespace
using namespace std;

// global variables
bool playAgain = true;
int counter = 4;
int random;

// function prototypes
void intro();
void recursivePin();
void endGame();

// main function
int main()
{
	while (playAgain == true)
	{
		intro();
	}
	return 0;
	
}

// intro function
void intro()
{
	counter = 4;
	system("CLS");
	cout << "\t\t ******************" << endl;
	cout << "\t\t *   Recursive    *" << endl;
	cout << "\t\t * Pin Generator  *" << endl;
	cout << "\t\t ******************" << endl;
	cout << "\n\t\t Generate a random pin number." << endl;
	cout << "\n\t\t Would you like generate a pin nymber (y/n): ";
	char answer;
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
	{
		recursivePin();
		cout << "\n You Pin is Finnished. " << endl;
		cout << "\n";
		system("pause");
	}
	if (answer == 'n' || answer == 'N')
	{
		endGame();
	}
	
}

// endGame function
	void endGame()
	{
		playAgain = false;
	}

// recursivePin function
	void recursivePin()
	{
		
		srand((unsigned)time(NULL));
		random = (rand() % 8) + 1;
		cout << random << " ";
		Sleep(1000);
		counter--;

		while(counter > 0)
		{
			recursivePin();			
		}
	}

