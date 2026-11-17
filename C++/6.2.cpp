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

    const int SIZE = 100;
    int TUD[SIZE], num;

    for (int i = 0; i < SIZE; i++) {
        TUD[i] = i - 50;
    }

    cout << "Ты хочешь чёт или не чёт: " << "\nЧёт------|1|"
        << "\nНе чёт-----|2|\n";
    cin >> num;

    if (num == 1) {
        cout << "\nТвои числа бро:\n";
        for (int i = 0; i < SIZE; i += 2) {
            cout << TUD[i] << " ";
        }
        cout << endl;
    }
    else if (num == 2) {
        cout << "\nТвои числа бро:\n";
        for (int i = 1; i < SIZE; i += 2) {
            cout << TUD[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "\nОшибка. Чтобы выбрать чёт или нечёт, нужно выбрать 1 или 2." << endl;
    }

    cout << endl;
    myArt();

    return 0;
}
