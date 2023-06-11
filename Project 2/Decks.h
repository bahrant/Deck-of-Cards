//
//  Decks.h
//  Project 2
//
//  Created by Bahran Temesgen on 5/7/23.
//
#include <iomanip>
#ifndef Decks_h
#define Decks_h
#include "P_Cards.h"

#pragma once 
class Decks {
    
    private:
   
    public:
    PlayingCard Deck [52];
    
    void dealCards();
    
    void bestHand();
    
    int randomNumber();
    
    void shuffle(); 
    
    void spawn();
    
};

#endif /* Decks_h */
