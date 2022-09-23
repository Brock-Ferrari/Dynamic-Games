// Dynamic Games
// Brock Ferrari
// HEADER FILE

#pragma once

#include <iostream>

class Game 
{
public:
	Game(std::string n = " ", std::string g = " ", int d = 0); //Constructor for Game Class
	~Game();
	void setName(std::string n); // Sets name
	void setGenre(std::string g); // Sets genre
	void setDifficulty(int d); // Sets difficulty
	std::string getName(); // Gets name
	std::string getGenre(); // Gets genre
	int getDifficulty(); // Gets difficulty
private:
	std::string name;
	std::string genre;
	int difficultyLevel;
};