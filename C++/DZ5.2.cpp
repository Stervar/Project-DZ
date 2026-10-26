//Программа должна вывести:
//1. Модули этих чисел
//2. Сумму модулей этих чисел
//3. Модуль суммы
//Тут можно реализовать функцию
//● Функция должна быть одна
//● Функция должна принимать 1 параметр
//● Функцией будет нужно воспользоваться несколько раз
//● В функцию можно передать сумму чисел (сумма чисел - это одно число)
//● Функция должна возвращать значение

#include <iostream>
//#include <windows.h>
#include <cmath>

using namespace std;

double AbsoluteNum(double number) {
    return std::abs(number); 
}

int main() {
    //SetConsoleCP(65001);
    //SetConsoleOutputCP(65001);

    double num1 = 0, num2 = 0;

    cout << "Введите два вещественных числа: ";
    cin >> num1 >> num2;
    
    double abs1 = AbsoluteNum(num1);
    double abs2 = AbsoluteNum(num2);
    cout << "Модуль первого числа: " << abs1 << endl;
    cout << "Модуль второго числа: " << abs2 << endl;

    double sum_of_abs = abs1 + abs2;
    cout << "Сумма модулей: " << sum_of_abs << endl;

    double abs_of_sum = AbsoluteNum(num1 + num2);
    cout << "Модуль суммы: " << abs_of_sum << endl;

    return 0;
}
