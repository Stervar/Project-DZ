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

    int TUD[100], num;

    for (int i = 0; i < 100; i++) {
        TUD[i] = i - 50;
    }

    cout << "Ты хочешь чёт или нечёт: " << "\nЧётное --- |1|"
        << "\nНечётное --- |2|\nВаш выбор: ";
    cin >> num;

    if (num == 1) {
        cout << "\nТвои чётные числа бро:\n";
        for (int i = 0; i < 100; i += 2) {
            cout << TUD[i] << " ";
        }
        cout << endl;
    }
    else if (num == 2) {
        cout << "\nТвои нечётные числа бро:\n";
        for (int i = 1; i < 100; i += 2) {
            cout << TUD[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "\nОшибка: нужно выбрать 1 или 2." << endl;
    }

    cout << endl;
    myArt();

    return 0;
}
