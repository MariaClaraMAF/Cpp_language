#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    int x, a ,b;
    for (int i=0; i<N; i++){
        cin >> v[i];
    }
    cin >> x;
    cin >> a >> b;
    
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1, v.begin()+b-1);
    
    cout << v.size()<<endl;
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
