#include "../Headers/game.h"
#include "../Headers/helpers.h"

#include <iostream>

Game::Game() {

}

bool Game::askYesNo(const string& question) {
    while (true) {
        cout << "\n" << question << " (y/n): ";
        string answer;
        getline(cin, answer);

        string lowered = toLower(answer);
        if (lowered == "y" || lowered == "yes") return true;
        else if (lowered == "n" || lowered == "no") return false;

        cerr << "\nError: Please enter 'yes' or 'no'.";
    }
}

