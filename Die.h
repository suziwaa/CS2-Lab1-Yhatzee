//This class implements the behavior and data for a singular die.
#ifndef DIE_H
#define DIE_H

class Die {
private:
    int numSides;
    int faceValue;
public:
    Die(int sides = 6); //Default constructor as yhatzee uses 6 sided die.
    void roll();
    int getFaceValue() const;
};

#endif
