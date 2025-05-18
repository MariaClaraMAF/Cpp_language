#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
 
void validaUsername(const string& name){
    if(name.length() < 6){
        cout << "Too short" << to_string(name.length())<<endl;
        return;
    }
    for (char ch : name) {
        if (!isalnum(ch)) {
            cout << "Invalid"<< endl;
            return;
        }
    } 

    cout <<"Valid"<< endl;
    return;

}

int main() {
    
    int t;
    cin >> t;  // Numero de casos de teste

    // Laco para ler cada nome de usuario e validar
    for (int i = 0; i < t; ++i) {
        string username;
        cin >> username;  // Le o nome de usuario
    }

    return 0;
}
