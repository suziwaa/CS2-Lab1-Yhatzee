#ifndef CONSOLE_UI_H
#define CONSOLE_UI_H

#include <string>

using namespace std;

class ConsoleUI {
public:
    void displayWelcome();
    void displayDice(const string& diceValues);
    string promptDiceToReroll();
    int promptCategory(const string& usedCategories);
    void displayScoreCard(const string& scores);
    void displayFinalScore(int score);
    bool askPlayAgain();
};

#endif
