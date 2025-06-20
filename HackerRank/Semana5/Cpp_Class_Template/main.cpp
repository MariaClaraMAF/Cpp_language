#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

template<class T>
class AddElements{
    T element;
    public:
        AddElements(T arg) { element = arg; }
        T add(T arg) {
        return element + arg;
    }

        string concatenate(string arg) {
        return element + arg;
    }
};


int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
/*
 * Tivde dificuldades inicialmente para entender como fazer esse exercício
   pois não tinha entendido como que poderia utilizar esse template. Depois de pesquisar
   entendi mais sobre e consegui fazer
   É uma classe template com tipo genérico, há uma função com tipo genérico também e
   uma que aceita apenas string.

   Tive um outro problema que quando submeto no HackerRank fala que execeu o limite ai n da pra rodar
*/