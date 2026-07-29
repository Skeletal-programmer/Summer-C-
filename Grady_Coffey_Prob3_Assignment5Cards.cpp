#include "Card.h"

//Possible Card types
std::vector<std::string> Card::faceNames =
{
    "Ace", "2", "3", "4", "5", "6", "7",
    "8", "9", "10", "Jack", "Queen", "King"
};
//Crad Suits
std::vector<std::string> Card::suitNames =
{
    "Hearts",
    "Diamonds",
    "Clubs",
    "Spades"
};

Card::Card(int f, int s)
{
    face = f;
    suit = s;
}

int Card::getFace() const
{
    return face;
}

int Card::getSuit() const
{
    return suit;
}

std::string Card::toString() const
{
    return faceNames[face] + " of " + suitNames[suit];
}
