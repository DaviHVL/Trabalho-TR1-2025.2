#include "../include/NRZ_Polar.h"
#include "../include/Manchester.h"
#include <iostream>

using namespace std;

int main()
{
    /*
    NRZ_POLAR teste = NRZ_POLAR();
    teste.setBits({1, 0, 1, 0, 1});
    teste.modulacao();
    auto resul = teste.getSinal();

    for (int i : resul)
    {
        cout << i << " ";
    }
    */

    Manchester teste = Manchester();
    teste.setBits({0, 1, 0, 1, 0, 0, 1, 1});
    teste.modulacao();
    auto resul = teste.getSinal();

    for (int i : resul)
    {
        cout << i << " ";
    }
    return 0;
}