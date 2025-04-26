#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    private:
        int scores[5];
    public:    
        void input(){
            for(int i=0; i<5; i++){
                cin>>scores[i];
            }
        }
        
        int calculateTotalScore(){
            int aux =0;
            for(int i=0; i<5; i++){
                aux= aux + scores[i];
            }
            return aux;
        }  
};

int main() {
    int n;
    cin>> n;
    Student sts[n];
    
    for (int i=0; i<n; i++){
        sts[i].input();
    }
    
    int kristen_score = sts[0].calculateTotalScore();
    
    int aux;
    for(int i=0; i<n; i++){
        int t = sts[i].calculateTotalScore();
        if(t>kristen_score){
            aux ++;
        }
    }
    cout<<aux<<endl;
    return 0;
}
