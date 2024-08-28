#include <iostream>
#include <cstdlib> // Necessário para rand() e srand()
#include <ctime>   // Necessário para time()
using namespace std;

// Protótipo da função
int gerarNUAleatorio();

int main() {
    // Inicializa a semente de números aleatórios
    srand(time(0));

    int numeroAleatorio = gerarNUAleatorio();
    cout << "Número aleatório gerado: " << numeroAleatorio << endl;

    return 0;
}

// Implementação da função
int gerarNuAleatorio() {
    return rand() % 100 + 1; // Gera um número entre 1 e 100
}
