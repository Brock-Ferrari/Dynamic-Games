// Dynamic Games
// Brock Ferrari
// IMPLEMENTATION FILE

#pragma once

#include <iostream>
#include "Game.h";

	Game::Game(std::string n, std::string g, int d)
	{
		std::cout << "Creating a new game." << std::endl;
		setName(n);
		setGenre(g);
		setDifficulty(d);
	}
	Game::~Game()
	{
		std::cout << "In the Game destructor." << std::endl;
	}
	void Game::setName(std::string n) { name = n; }
	void Game::setGenre(std::string g) { genre = g; }
	void Game::setDifficulty(int d) { difficultyLevel = d; }
	std::string Game::getName() { return name; }
	std::string Game::getGenre() { return genre; }
	int Game::getDifficulty() { return difficultyLevel; }
