#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int age;
        string fname;
        string lname;
        int standard;
        
        void set_age(int a){
            cin >> a;
            age = a;
        }
        
        void set_first_name(string fn){
            cin >> fn;
            fname = fn;
        }
        
        void set_last_name(string ln){
            cin >> ln;
            lname = ln;
        }
        
        void set_standard(int s){
            cin >>s;
            standard =s;
        }
        
        int get_age(){
            return age;
        }
        
        string get_first_name(){
            return fname;
        }
        
        string get_last_name(){
            return lname;
        }
        
        int get_standard(){
            return standard;
        }
};

int main() {
    Student a;
    int b, stan;
    string fn, ln;
    
    a.set_age(b);
    a.set_first_name(fn);
    a.set_last_name(ln);
    a.set_standard(stan);
    
    cout << a.get_age() << endl << a.get_last_name() << ", "<< a.get_first_name()<<endl<<a.get_standard()<<endl;
    
    cout<<endl<< a.get_age()<<","<<a.get_first_name() << ","<< a.get_last_name()<<","<<a.get_standard()<<endl;
    return 0;
}
