#include <iostream>
#include <vector>
#include <string>
#include "le_arquivo.cpp"

using namespace std;
string palavra_secreta;

void sorteia_palavra()
{
    vector<string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    palavra_secreta = palavras[indice_sorteado];
}