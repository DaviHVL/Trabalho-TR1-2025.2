#include "../include/NRZ_Polar.h"
#include <iostream>

using namespace std;

NRZ_POLAR::NRZ_POLAR(vector<int> bits, vector<int> sinal)
{
    this->bits = bits;
    this->sinal = sinal;
}

void NRZ_POLAR::modulacao()
{
    sinal.clear();

    for (int i : bits)
    {
        if (i == 1)
        {
            sinal.push_back(1);
        }
        else
        {
            sinal.push_back(-1);
        }
    }
}

void NRZ_POLAR::demodulacao()
{
    bits.clear();

    for (int j : sinal)
    {
        if (j > 0)
        {
            bits.push_back(1);
        }
        else
        {
            bits.push_back(0);
        }
    }
}

vector<int> NRZ_POLAR::getBits()
{
    return bits;
}

vector<int> NRZ_POLAR::getSinal()
{
    return sinal;
}

void NRZ_POLAR::setBits(vector<int> bits)
{
    this->bits = bits;
}

void NRZ_POLAR::setSinal(vector<int> sinal)
{
    this->sinal = sinal;
}