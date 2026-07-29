#include "DeckOfCards.h"
#include <cstdlib>
#include <ctime>

using namespace std;

DeckOfCards::DeckOfCards()
{
    currentCard = 0;

    for (int suit = 0; suit < 4; suit++)
    {
        for (int face = 0; face < 13; face++)
        {
            deck.push_back(Card(face, suit));
        }
    }
}

void DeckOfCards::shuffle()
{
    srand((unsigned)time(0));

    for (int i = 0; i < 52; i++)
    {
        int j = rand() % 52;

        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }

    currentCard = 0;
}

Card DeckOfCards::dealCard()
{
    return deck[currentCard++];
}

bool DeckOfCards::moreCards() const
{
    return currentCard < 52;
}
