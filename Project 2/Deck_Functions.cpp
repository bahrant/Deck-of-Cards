//
//  Deck_Functions.cpp
//  Project 2
//
//  Created by Bahran Temesgen on 5/9/23.
//
#include <algorithm>
#include<iostream>
#include <stdio.h>
#include "Decks.h"
#include "P_Cards.h"
#include <ctime>
using namespace std;


void Decks::dealCards(){
    cout<<"The cards dealt were:: "<<endl;
    for(int i=0; i<5;i++){
        cout<<Deck[i].value<<" of "<<Deck[i].suit<<" "<<endl;
    }
}



void Decks::bestHand() {
    string suits[4] = {
        "Spades","Diamonds","Clubs","Hearts"
    };
    string values[13] = {
        "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"
    };

    vector<int> valueIndices(5);
    bool isFlush = true;
    string suitOfFirstCard = Deck[0].suit;

    for (int i = 0; i < 5; ++i) {
        if (Deck[i].suit != suitOfFirstCard) {
            isFlush = false;
        }

        valueIndices[i] = find(values, values + 13, Deck[i].value) - values;
    }

    sort(valueIndices.begin(), valueIndices.end());

    bool isStraight = true;
    for (int i = 0; i < 4; ++i) {
        if (valueIndices[i] + 1 != valueIndices[i+1]) {
            isStraight = false;
        }
    }

 
    if (valueIndices == vector<int>{0, 1, 2, 3, 12}) {
        isStraight = true;
    }

    int sameValueCount = 1;
    int pairsCount = 0, threeOfAKindCount = 0, fourOfAKindCount = 0;

    for (int i = 0; i < 4; ++i) {
        if (valueIndices[i] == valueIndices[i+1]) {
            sameValueCount++;
        } else {
            if (sameValueCount == 2) pairsCount++;
            else if (sameValueCount == 3) threeOfAKindCount++;
            else if (sameValueCount == 4) fourOfAKindCount++;

            sameValueCount = 1;
        }
    }

    // check last count
    if (sameValueCount == 2) pairsCount++;
    else if (sameValueCount == 3) threeOfAKindCount++;
    else if (sameValueCount == 4) fourOfAKindCount++;

    string bestHand;

    if (isFlush && isStraight && valueIndices[4] == 12) bestHand = "Royal Flush";
    else if (isFlush && isStraight) bestHand = "Straight Flush";
    else if (fourOfAKindCount == 1) bestHand = "Four of a Kind";
    else if (threeOfAKindCount == 1 && pairsCount == 1) bestHand = "Full House";
    else if (isFlush) bestHand = "Flush";
    else if (threeOfAKindCount == 1) bestHand = "Three of a Kind";
    else if (pairsCount == 2) bestHand = "Two Pair";
    else if (pairsCount == 1) bestHand = "One Pair";
    else bestHand = "High Card: " + values[valueIndices[4]];

    cout << "Best Hand: " << bestHand << endl;
}


    

        
int Decks::randomNumber(){
    srand(time(0));
    
    int min = 0;
    int max = 51;
    int bb = min + (rand() % (max - min + 1));
    return bb;
}


void Decks::shuffle(){
  
    for(int i=0;i<52;i++){
        int n = randomNumber();
        PlayingCard place;
        place = Deck[i];
        Deck[i] = Deck[n];
        Deck[n] = place;
    }
    
}
void Decks::spawn(){
        int b=0;
        for(int i=0; i<4; i++){
            for(int j=0; j<13; j++){
                Deck[b].setcardvalue(j);
                Deck[b].setcardsuit(i);
                b++;
            }
        }
    }

    

