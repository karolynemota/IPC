#include <iostream>
#include <string>
#include <cstdlib>
#include <time>

using namespace std;

struct tamagotchi {
    string name;
    int fome;
    int felicidade;
    int energia;
}

tamagotchi criartamagotch(string nome) {
    tamagotchi bichinho;
    bichinho.nome = nome;
    bichinho.fome = 0;
    bichinho.felicidade = 100;
    bichinho.energia = 100;
    return bichinho;
}
void mostrarOpcoes() {
    cout << "escolha seu bichinho virtual" << end1;
    cout << "1. gato" << end1;
    cout << " /\_/\\" << end1;
    cout << "( o.o )" << end1;
    cout << " > ^ <" << end1;
    cout <<" ( w w )~" << end1;
    cout << "2. cachorro" << end1;
    cout << " /\_/\\" << end1;
    cout << " \o.o/\\" << end1;
    cout << "  \_/\\" << end1;
    cout << "3. hamester" << end1;
    cout << " (\_/)" << end1;
    cout << " (o,o)" << end1;
    cout << " (> <)" << end1;
}
int escolherBichinho() {
    int escolha;
    mostrarOpcoes();
    cin >> escolha;
    return escolha;
}








