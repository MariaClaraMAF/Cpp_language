#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int age;
    string name;
    string lastName;
    int standard;
};

int main() {
    Student a;
    cin >> a.age;
    cin >> a.name;
    cin >> a.lastName;
    cin >> a.standard;
    
    cout << a.age << " " << a.name << " " << a.lastName << " " << a.standard << endl;
    return 0;
}
