#include "ConsoleUI.h"
#include <iostream>

using namespace std;

void ConsoleUI::displayWelcome() {
    cout << "Welcome to Yahtzee!\n";
}

void ConsoleUI::displayDice(const string& diceValues) {
    cout << "Your dice: ";
    for (char ch : diceValues)
        cout << ch << " ";
    cout << endl;
}

string ConsoleUI::promptDiceToReroll() {
    cout << "Enter indices (0-4) of dice to reroll (e.g., 024 to reroll 0,2,4). Press enter to keep all: ";
    string input;
    cin >> input;
    return input;
}

int ConsoleUI::promptCategory(const string& usedCategories) {
    int choice;
    do {
        cout << "Choose a scoring category (1–6): ";
        cin >> choice;
    } while (choice < 1 || choice > 6 || usedCategories[choice - 1] == '1');
    return choice;
}

void ConsoleUI::displayScoreCard(const string& scores) {
    cout << "\nScorecard:\n";
    for (size_t i = 0; i < scores.length(); ++i) {
        cout << (i + 1) << ": " << (scores[i] - '0') << endl;
    }
}

void ConsoleUI::displayFinalScore(int score) {
    cout << "Final Score: " << score << endl;
}

bool ConsoleUI::askPlayAgain() {
    char response;
    cout << "Play again? (y/n): ";
    cin >> response;
    return response == 'y' || response == 'Y';
}
