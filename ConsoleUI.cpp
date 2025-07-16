#include "ConsoleUI.h"
#include <iostream>

void ConsoleUI::displayWelcome() {
    cout << "\nWelcome to Yahtzee!\n";
}

void ConsoleUI::displayDice(const int diceValues[5]) {
    cout << "Your dice: ";
    for (int i = 0; i < 5; ++i) {
        cout << diceValues[i] << " ";
    }
    cout << endl;
}

string ConsoleUI::promptDiceToReroll() {
    cout << "Enter indices (0-4) to reroll";
    string input;
    cin >> input;
    return input;
}

int ConsoleUI::promptCategory() {
    int choice;
    do {
        cout << "Choose a number to score (1–6): ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            choice = -1;
        }
    } while (choice < 1 || choice > 6);
    return choice;
}


void ConsoleUI::displayFinalScore(int score) {
    cout << "\nFinal Score: " << score << endl;
}

bool ConsoleUI::askPlayAgain() {
    cout << "Play again? (y/n): ";
    char input;
    cin >> input;
    if (input == 'y' || input == 'Y') {
        return true;
    }
    else {
        return false;
    }
}