#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H

#include "Die.h"
#include <string>

class GameLogic {
private:
    Die dice[5];
    int diceValues[5];
    int totalScore;
    int turnsPlayed;
public:
    GameLogic();
    void rollAll();
    void reroll(const std::string& indices);
    const int* getDiceValues();
    bool isGameOver() const;
    int calculateScore(int category);
    void applyScore(int category);
    int getTotalScore() const;
};

#endif
