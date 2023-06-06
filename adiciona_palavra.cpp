#include <iostream>
#include <vector>
#include <string>
#include "le_arquivo.cpp"
#include "salva_arquivo.cpp"

void adiciona_palavra()
{
    cout << "Digite a nova palavra, usando letras maiúsculas." << endl;
    string nova_palavra;
    cin >> nova_palavra;

    vector<string> lista_palavras = le_arquivo();
    lista_palavras.push_back(nova_palavra);

    salva_arquivo(lista_palavras);
}