// Dynamic Games
// Brock Ferrari
// DRIVER FILE

#include <iostream>
#include "Game.h"
using namespace std;

int main()
{
	cout << "Dynamics Games Appliction" << endl << endl;
	cout << "Enter the number of games you have played in the past year: ";
	int games = 0;
	cin >> games;

	Game** gameList = new Game*[games]; // Generates dynamic array

	string name = "";
	string genre = "";
	int diff = 0;

	srand(100); // Seeds random number generator
	for (int i = 0; i < games; ++i) // Sets each object of dynamic array
	{
		cout << endl << "Enter the name of the game: ";
		cin >> name;
		cout << "Enter the genre of the game: ";
		cin >> genre;
		diff = rand() % 10 + 1;	// Random difficulty
		gameList[i] = new Game(name, genre, diff);
	}

	cout << endl << "The games are: " << endl; // Prints game information
	for (int i = 0; i < games; ++i)
	{
		cout << "Game name:\t\t" << gameList[i]->getName() << endl;
		cout << "Game genre:\t\t" << gameList[i]->getGenre() << endl;
		cout << "Game difficulty:\t" << gameList[i]->getDifficulty() << endl << endl;
	}

	for (int i = 0; i < games; ++i)
	{
		delete gameList[i];
	}

	delete [] gameList; // Deletes dynamic array

	for (int i = 0; i < games; ++i) // Sets pointers to NULL
	{
		gameList = nullptr;
	}

	cout << endl << "Data cleared...." << endl << endl;
	
	system("pause");
	return 0;
}