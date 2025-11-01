#pragma once
#include <vector>

using namespace std;

class Manchester{
private:
    vector<int> bits;
    vector<int> sinal;
    vector<int> clock;

public:
    Manchester(vector<int> bits = {}, vector<int> sinal = {});
    void modulacao();
    void demodulacao();
    vector<int> getBits();
    vector<int> getSinal();
    void setBits(vector<int> bits);
    void setSinal(vector<int> sinal);
};