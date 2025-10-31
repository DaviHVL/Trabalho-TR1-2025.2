#pragma once
#include <vector>

class NRZ_POLAR
{
private:
    std::vector<int> bits;
    std::vector<int> sinal;

public:
    NRZ_POLAR(std::vector<int> bits = {}, std::vector<int> sinal = {});
    void modulacao();
    void demodulacao();
    std::vector<int> getBits();
    std::vector<int> getSinal();
    void setBits(std::vector<int> bits);
    void setSinal(std::vector<int> sinal);
};