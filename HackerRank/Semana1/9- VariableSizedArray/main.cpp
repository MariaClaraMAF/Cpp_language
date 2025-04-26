#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    std::cin >> n >> q;
    
    vector<vector<int>> a(n); // ainda não entendi bem o uso desse ai, 
    
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;
        a[i].resize(size);
        for (int j = 0; j < size; j++) {
            cin >> a[i][j];
        }
    }

    for (int k = 0; k < q; k++) {
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    return 0;
}

/*
OBS: Nesse exercicio tive dificuldade de entender como usar esse vector<int>, joguei no gpt e ele me explicou, vou deixar a explicacao abaixo para melhor entendimento do codigo:

vector<int>
E um vetor dinamico da biblioteca padrao C++ (std::vector) que armazena inteiros (int).

Pense nele como um array flexivel: ao contrario de um array tradicional, ele pode crescer ou diminuir de tamanho em tempo de execucao.

Exemplo:

vector<int> v;

v.push_back(42);    // Adiciona o numero 42 ao final
v.size();           // Retorna o tamanho atual do vetor
v[0];               // Acessa o primeiro elemento
*/