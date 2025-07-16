#include "ConsoleUI.h"
#include "GameLogic.h"
#include <iostream>
using namespace std;


int main() {
    ConsoleUI ui;
    bool playAgain = true;

    while (playAgain) {
        GameLogic game;
        ui.displayWelcome();

        while (!game.isGameOver()) {
            game.rollAll();
            ui.displayDice(game.getDiceValues());

            for (int i = 0; i < 2; ++i) {
                string reroll = ui.promptDiceToReroll();
                if (reroll.empty()) break;
                game.reroll(reroll);
                ui.displayDice(game.getDiceValues());
            }

            int category = ui.promptCategory();
            game.applyScore(category);
            
        }

        
        ui.displayFinalScore(game.getTotalScore());

       
        playAgain = ui.askPlayAgain();
    }

    return 0;
}
