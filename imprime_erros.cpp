#include <vector>
#include <iostream>
using namespace std;

vector<char> chutes_errados;

void imprime_erros()
{
    cout << "Chutes errados: ";
    for (char letra : chutes_errados)
    {
        cout << letra << " ";
    }
    cout << endl;
}