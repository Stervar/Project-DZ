#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int calculateSum(int limit) {
    int totalSum = 0;
    for (int i = 0; i <= limit; ++i) {
        totalSum += i;
    }
    return totalSum;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int limit;
    cout << "Введите целое число: ";
    cin >> limit;

    if (limit < 0) {
        cout << "Ошибка: число должно быть больше или равно 0." << endl;
        return 1;
    }

    int sum = calculateSum(limit);
    cout << "Сумма чисел от 0 до " << limit << " равна: " << sum << endl;

    return 0;
}
