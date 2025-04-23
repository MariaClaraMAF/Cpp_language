#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void atualiza(int *a, int *b){
    int aux1, aux2;
    aux1 = *a;
    aux2 = *b;
    *a = aux1+aux2;
    *b = abs(aux1-aux2);

}

int main() {
    int end1, end2;
    int *a, *b;

    a = &end1;
    b = &end2;

    scanf("%d %d", &end1, end2);
    atualiza(a,b);
    cout << &end1 << endl;
    cout << &end2 << endl;
    // /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // int *a{nullptr};
    // int *b{nullptr};
    
    // // Acessando o valor do ponteiro
    // cout << a << endl;
    // cout << b << endl;
    
    // // Acessando o endereço do ponteiro
    // cout << &a << endl;
    // cout << &b << endl;
    
    
    return 0;
}
