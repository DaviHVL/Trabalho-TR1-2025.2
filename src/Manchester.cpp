#include "../include/Manchester.h"
#include <iostream>

using namespace std;

Manchester::Manchester(vector<int> bits, vector<int> sinal){
    this->bits = bits;
    this->sinal = sinal;
    this->clock = {0,1};
}

void Manchester::modulacao(){
    sinal.clear();

    for (int i : bits){
        sinal.push_back(i ^ clock[0]);
        sinal.push_back(i ^ clock[1]);
    }
}

void Manchester::demodulacao(){
    bits.clear();

    for (int j = 0; j < sinal.size(); j +=2){
        if (sinal[j] == 0 && sinal[j+1] == 1){
            bits.push_back(0);
        }
        else{
            bits.push_back(1);
        }
        
    }
}

vector<int> Manchester::getBits(){
    return bits;
}

vector<int> Manchester::getSinal(){
    return sinal;
}

void Manchester::setBits(vector<int> bits){
    this->bits = bits;
}

void Manchester::setSinal(vector<int> sinal){
    this->sinal = sinal;
}