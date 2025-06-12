/*
    Esse foi outro que fiz com auxílio do gpt. Eu entendi como usar os defines mas não entendi as funções que tinha 
    que fazer.

Resumo final:
Macro	            Função
FUNCTION(name, op)	Cria uma função como min() ou max() usando operador.
toStr(x)	        Converte x em string literal (#x).
io(a)	            Atalho para cin >> a.
INF	                Define um valor alto para simular "infinito".

coloquei essa tabelinha do gpt explicando o que cada macro faz para melhor compreender o feito

*/



#define FUNCTION(name, op) int name(int a, int b) {return (a op b) ? a : b;} 
#define toStr(x) #x
#define io(a) cin >> a
#define INF 10000000

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif
 
#include <iostream>
#include <vector>
using namespace std;

FUNCTION(minimum, <)
FUNCTION(maximum, >)
    
int main(){
    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<=n; i++) {
        io(v[i]);
    }
    int mn = INF;
    int mx = -INF;
    for(int i = 0; i <= n; i++) {
        mn = minimum(mn, v[i]);
        mx = maximum(mx, v[i]);
    }
    int ans = mx - mn;
    cout << toStr(Result =) <<' '<< ans;
    return 0;

}
    