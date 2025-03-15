#include <iostream>

int multiplyNumbers(int num1, int num2){
    int mult;
    mult = num1*num2;
    return mult;
}

int main(){

    int num1 {12};
    int num2 {3};

    int mult = multiplyNumbers(num1, num2);

    std:: cout << "Mult: " << mult << std::endl;

    return 0;
}