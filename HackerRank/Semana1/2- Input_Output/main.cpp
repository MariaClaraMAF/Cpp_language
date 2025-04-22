#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((1 <= a <= 1000)&&(1 <= b <= 1000)&&(1 <= c <= 1000)){
        int sum;
        sum = a+b+c;
        cout << sum << endl;
    }
    return 0;
}
