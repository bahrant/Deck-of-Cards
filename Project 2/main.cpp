//
//  main.cpp
//  Project 2
//
//  Created by Bahran Temesgen on 5/7/23.
//
#include<iomanip>

#include <iostream>
#include "P_Cards.h"
#include "Decks.h"

using namespace std;

int main() {

 
    Decks deck1;
    deck1.spawn();
    deck1.shuffle();

    deck1.dealCards();
    deck1.bestHand();
    
    return 0;
}
