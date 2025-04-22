#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_value(int a, int b, int c, int d){
    int k, j;
    if (a >b){
        k=a;
    }
    else{
        k=b;
    }

    if (c>d){
        j=c;
    }
    else{
        j=d;
    }

    if (k>j){
        return k;
    }
    else{
        return j;
    }
}

int main() {
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int resposta = max_value(a,b,c,d);
    cout << resposta << endl;

    return 0;
}
