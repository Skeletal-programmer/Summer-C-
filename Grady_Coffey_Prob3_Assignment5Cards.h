#ifndef CARD_H
#define CARD_H

#include <string>
#include <vector>

//Sets the private ints suits and face
class Card
{
private:
    int face;
    int suit;

    static std::vector<std::string> faceNames;
    static std::vector<std::string> suitNames;

//Public can be used to call the face and suit later
public:
    Card(int f, int s);

    int getFace() const;
    int getSuit() const;

    std::string toString() const;
};

#endif
