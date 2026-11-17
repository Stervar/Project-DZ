#include <iostream>
#include <windows.h>

using namespace std;

void myArt() {
    SetConsoleOutputCP(65001);
    cout << "⠀⠀⠀⣿⡄⠀⠀⠀⠀⠀ ⣠⣿⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⣼⣿⣿⡄⠀⣠⡀⣰⣿⣿⡆⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⢠⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⣼⣿⣿⣿⠟⠛⢿⣿⣿⣿⣿⣿⣧⣄⡄⠀⠀⠀" << endl;
    cout << "⠀⢀⣿⣿⠏⠁⠀⠀⠀⠉⠻⣿⣿⣿⣿⣿⣶⡀⠀⠀" << endl;
    cout << "⠀⢺⠟⣥⡄⠀⠀⣤⣤⣤⣤⠈⠹⣿⣿⣿⣿⣶⡶⠀" << endl;
    cout << "⠀⢿⣾⡏⠁⠀⠀⠻⣹⣿⠏⠀⣠⣿⣿⣿⣿⣿⠁⠀" << endl;
    cout << "⠀⠈⢛⠀⠀⠀⠀⠀⠀⢀⣀⣀⣿⣿⣿⣿⣿⣯⠀⠀" << endl;
    cout << "⠀⠀⠀⠓⣿⣷⣶⣶⣷⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀" << endl;
    cout << "⠀⠀⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠇⠀" << endl;
    cout << "⠀⠀⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀" << endl;
    cout << "⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀" << endl;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int N = 5;
    int arr[N];
    int sum = 0;

    cout << "Задание 6.3" << endl;
    cout << "Введите 5 целых чисел:" << endl;

    for (int i = 0; i < N; i++) {
        cout << "Число " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    double average = sum / 5.0;

    cout << "\n1. Весь массив: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n2. Сумма элементов: " << sum;
    cout << "\n3. Среднее арифметическое: " << average;
    cout << "\n4. Максимальный элемент: " << maxVal;
    cout << "\n   Минимальный элемент: " << minVal << endl;

    cout << endl;
    myArt();

    return 0;
}
