#include "Die.h"
#include <cstdlib>
#include <ctime>

Die::Die(int sides) : numSides(sides), faceValue(1) {
    static bool seeded = false;
    if (!seeded) {
        srand(time(0));
        seeded = true;
    }
}

void Die::roll() {
    faceValue = (rand() % numSides) + 1;
}

int Die::getFaceValue() const {
    return faceValue;
}
