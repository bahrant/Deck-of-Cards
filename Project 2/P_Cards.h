//
//  P_Cards.h
//  Project 2
//
//  Created by Bahran Temesgen on 5/7/23.
//
//

#ifndef P_Cards_h
#define P_Cards_h
#include <cstdlib>
#include<iomanip>
#include <string>
using namespace std;



class PlayingCard {
private:
    
public:
    string suit;
    string value;

    string suits[4] = {
        "Spades","Diamonds","Clubs","Hearts"
    };

    string values[13] = {
        "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"
    };
  
   string getcardvalue(int);
   string getcardsuit(int);
    void print();
    void setcardvalue(int);
void setcardsuit( int);
    
};

#endif /* P_Cards_h */
