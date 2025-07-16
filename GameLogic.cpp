#include "GameLogic.h"

GameLogic::GameLogic() : totalScore(0), turnsPlayed(0) {
    for (int i = 0; i < 5; ++i) diceValues[i] = 0;
}

void GameLogic::rollAll() {
    for (int i = 0; i < 5; ++i) {
        dice[i].roll();
        diceValues[i] = dice[i].getFaceValue();
    }
}

void GameLogic::reroll(const std::string& rerollPositions) {
    for (size_t idx = 0; idx < rerollPositions.size(); ++idx) {
        int i = rerollPositions[idx] - '0';
        if (i >= 0 && i < 5) {
            dice[i].roll();
            diceValues[i] = dice[i].getFaceValue();
        }
    }
}


const int* GameLogic::getDiceValues() {
    return diceValues;
}

bool GameLogic::isGameOver() const {
    return turnsPlayed >= 3;
}

int GameLogic::calculateScore(int category) {
    int score = 0;
    for (int i = 0; i < 5; ++i) {
        if (diceValues[i] == category)
            score += category;
    }
    return score;
}

void GameLogic::applyScore(int category) {
    totalScore += calculateScore(category);
    turnsPlayed++;
}

int GameLogic::getTotalScore() const {
    return totalScore;
}
