#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

vector<int> socorro(string str) {
    stringstream a(str);
    vector<int> result;
    int n;
    char ch;
    
    while (a >> n) {
        result.push_back(n);
        a >> ch;
    }
    return result;
}

int main() {
    string ss;
    cin >> ss;
    
    vector<int> numeros = socorro(ss);
    
    for (int n : numeros) {
        cout << n << endl;
    }
    return 0;
}

