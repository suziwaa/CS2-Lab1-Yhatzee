#include "Die.h"
#include <cstdlib>
#include <ctime> //Need both of these for srand to work properly

Die::Die(int sides) : numSides(sides), faceValue(1) {
    std::srand(std::time(0));
}

void Die::roll() {
    faceValue = (std::rand() % numSides) + 1; //Assigns the face value of the die based on what random number was generated
}

int Die::getFaceValue() const {
    return faceValue;
}
