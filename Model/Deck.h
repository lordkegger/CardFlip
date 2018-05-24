//
//  Deck.hpp
//  cards02
//
//  Created by Dave Burchill on 2016-04-29.
//  Copyright © 2016 Dave Burchill. All rights reserved.
//

#ifndef Deck_hpp
#define Deck_hpp

#include <vector>
#include <memory>
#include<string>
#include "View/cardqpushbutton.h"
// forward declaration
class Card;
using CardPtr = std::shared_ptr<Card>;


class Deck
{
public:
    Deck();
    
  //  CardColor getCardColor();
    bool isEmpty() const;
    //void nextCard();
   // std::string topCardToString() const;
    void shuffle();
   // void sort();
    CardPtr drawCard();
   // bool isFlipped() const {return _isFlipped;}
    
private:
    std::vector<CardPtr> _deck;
    std::vector<CardQPushButton>buttons;
    int _topOfDeck;
    bool _isFlipped;
};


#endif /* Deck_hpp */