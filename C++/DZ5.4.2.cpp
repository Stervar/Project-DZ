#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

void myNum(double num ; int exponent);

int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double num;
    int exponent;

    cout << "Введи число(я его возведу в степень): " << endl;
    cin >> num;
    cout << "Введите степень для числа: " << enbl;
    cin >> exponent;
    
    myNum(num , exponent);

    return 0;
}

void myNum(double num , int exponent){
    double result = 1.0;
    for(int i = 0; i < exponent; ++i)
    result *= num;
  
    cout << num << "^" << exponent << " = " << result << endl;

}
