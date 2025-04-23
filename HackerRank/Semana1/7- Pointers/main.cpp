#include <iostream>
#include <cmath> // para std::abs
using namespace std;

void atualiza(int *a, int *b) {
    int aux1 = *a;
    int aux2 = *b;
    *a = aux1 + aux2;
    *b = std::abs(aux1 - aux2); // uso explícito de std::abs
}

int main() {
    int end1, end2;
    int *a = &end1;
    int *b = &end2;

    cin >> end1 >> end2;
    atualiza(a, b);
    cout << end1 << endl << end2 << endl;

    return 0;
}

    // /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // int *a{nullptr};
    // int *b{nullptr};
    
    // // Acessando o valor do ponteiro
    // cout << a << endl;
    // cout << b << endl;
    
    // // Acessando o endereço do ponteiro
    // cout << &a << endl;
    // cout << &b << endl;

