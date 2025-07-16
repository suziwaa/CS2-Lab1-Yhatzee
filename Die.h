#ifndef DIE_H
#define DIE_H

class Die {
private:
    int numSides;
    int faceValue;
public:
    Die(int sides = 6);
    void roll();
    int getFaceValue() const;
};

#endif
