#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "nao_acertou.cpp"
#include "letra_existe.cpp"
#include "imprime_cabecalho.cpp"
#include "imprime_erros.cpp"
#include "imprime_palavra.cpp"
#include "chuta.cpp"
#include "nao_enforcou.cpp"
#include "le_arquivo.cpp"
#include "sorteia_palavra.cpp"
#include "adiciona_palavra.cpp"

using namespace std;

int main()
{
    imprime_cabecalho();
    le_arquivo();
    sorteia_palavra();
    while (nao_acertou() && nao_enforcou())
    {
        imprime_erros();
        imprime_palavra();
        chuta();
    }
    cout << "Fim de jogo!" << endl;
    cout << "A palavra secreta era: " << palavra_secreta << endl;
    if (nao_acertou())
    {
        cout << "Você perdeu! Tente novamente!" << endl;
    }
    else
    {
        cout << "Parabéns! Você acertou a palavra secreta!" << endl;
        cout << "Você deseja adicionar uma nova palavra ao banco? (S/N) ";
        char resposta;
        cin >> resposta;
        if (resposta == 'S')
        {
            adiciona_palavra();
        }
    }
    cin.get();
}