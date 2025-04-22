#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int a, b;
    std::map<int, std::string> nomes;
    nomes[1] = "one";
    nomes[2] = "two";
    nomes[3] = "three";
    nomes[4] = "four";
    nomes[5] = "five";
    nomes[6] = "six";
    nomes[7] = "seven";
    nomes[8] = "eight";
    nomes[9] = "nine";
    
    scanf("%d \n %d", &a, &b);
    
    for (int num = a; num <= b; num++) {
        if (num <= 9) {
            printf("%s\n", nomes[num].c_str());
        } else {
            printf((num % 2 == 0) ? "even\n" : "odd\n");
        }
    }
    return 0;
}