#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H

#include "Die.h"
#include <string>

using namespace std;

class GameLogic {
private:
    Die dice[5];
    string diceValues;         
    string scores;
    string usedCategories;     
public:
    GameLogic();
    void rollAll();
    void reroll(const string& indices);
    const string& getDiceValues();
    bool isGameOver() const;
    int calculateScore(int category);
    void applyScore(int category);
    int totalScore() const;
    const string& getScores() const;
    const string& getUsedCategories() const;
};

#endif
