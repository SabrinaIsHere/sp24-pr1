#ifndef GAME_H
#define GAME_H

#include <string>
    using std::string;
#include <vector>
    using std::vector;

#include "Grid.h"
#include "../Tokens/Player.h"
#include "../Tokens/Enemy.h"
#include "../UI/Menu.h"
#include "../UI/CharacterCreator.h"

class Game {
private:
    string name;
    string dataPath;
    Grid grid;

    vector<Player> players;
    vector<Enemy> enemies;

    CharacterCreator charCreator;
public:
    // For reloading games on start + static initialization
    static const string dataFolderPath;
    static vector<Game> games;
    static Game currentGame;
    static Menu mainMenu;
    // Load games from data files located in dataFolderPath
    static bool loadGames();
    // Display the main menu and set currentGame
    static void displayMainMenu();
    // Handles initialization of static values and calls static utility functions
    static void init();

    // Constructors
    Game();
    Game(string Name);

    // Getters/Setters
    // Util
    // Gameplay
};

#endif