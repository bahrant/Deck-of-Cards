//How can i restructure my 
//
//  PC_Functions.cpp
//  Project 2
//
//  Created by Bahran Temesgen on 5/9/23.

#include <iostream>
#include <stdio.h>
#include "P_Cards.h"
using namespace std;

void PlayingCard::print(){
  cout<< value <<" of "<< suit<<endl;
}
void PlayingCard::setcardsuit(int b){

    suit = getcardsuit(b);
}

void PlayingCard::setcardvalue (int b){

    value = getcardvalue(b);
}

string PlayingCard::getcardsuit(int b){
    return suits[b];
}

string PlayingCard::getcardvalue(int b){
   
    return values[b];
}


 
