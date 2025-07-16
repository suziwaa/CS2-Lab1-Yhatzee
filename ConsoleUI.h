#ifndef CONSOLE_UI_H
#define CONSOLE_UI_H

#include <string>
using namespace std;

class ConsoleUI {
public:
    void displayWelcome();
    void displayDice(const int diceValues[5]);
    string promptDiceToReroll();
    int promptCategory();
    void displayFinalScore(int score);
    bool askPlayAgain();
};

#endif
