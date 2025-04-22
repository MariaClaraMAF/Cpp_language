#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    
    if (a <=b){
        string v [] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        for(int n=a; n<=b; n++){
            if(n>=1 && n<=9){
                cout << v[n-1]<< endl;
            }
            else{
                if(n%2 == 0){
                    cout<<"even"<< endl;
                }
                else{
                    cout << "odd"<< endl;
                }
            }
            
        }
    }
    else{
        cout<<"erro"<<endl;
    }
    
    return 0;
}
