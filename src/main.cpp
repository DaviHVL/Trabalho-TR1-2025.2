#include "../include/NRZ_Polar.h"
#include <iostream>

using namespace std;

int main()
{
    NRZ_POLAR teste = NRZ_POLAR();
    teste.setBits({1, 0, 1, 0, 1});
    teste.modulacao();
    auto resul = teste.getSinal();

    for (int i : resul)
    {
        cout << i << " ";
    }
    return 0;
}