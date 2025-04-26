#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string a, b;
    cin >> a;
    cin >> b;
    
    int aux1 = a.size();
    int aux2 = b.size();
    
    
    string c = a+b;
    
    char aux3 = a[0];
    char aux4 = b[0];
    
    a[0] = aux4;
    b[0]= aux3;
    
    cout << aux1 << " " << aux2 << endl;
    cout << c << endl;
    cout << a<< " " << b << endl;
    
      
    return 0;
}
