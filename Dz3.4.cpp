#include <iostream>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251 > nul");

    float num1, num2, num4, num5;
    int num3;
    int choise;

    std::cout << "1) Первое действие: введи два числа, и я посчитаю какое больше\n";
    std::cout << "2) Второе действие: введи 1 или 0\n";
    std::cout << "3) Третье действие: введи два числа, и я посчитаю сумму\n";
    std::cout << "Выберите пункт меню: ";
    std::cin >> choise;

    switch (choise) {
    case 1: {
        std::cout << "Введите Первое число: ";
        std::cin >> num1;
        std::cout << "Введите Второе число: ";
        std::cin >> num2;

        float max_number = std::max({ num1, num2 });
        std::cout << "Наибольшее число: " << max_number << "\n";
        break;
    }
    case 2: {
        std::cout << "Введите число 1 или 0: ";
        std::cin >> num3;

        switch (num3) {
        case 1:
            std::cout << "ПРИВЕТ ЭТО ЛОВУШКА <3\n";
            break;
        case 0:
            std::cout << "Хех ну ты и плохой\n";
            break;
        default:
            std::cout << "Вы ввели не 1 и не 0!\n";
            break;
        }
        break;
    }
    case 3: {
        std::cout << "Введите два числа, чтобы я сложил их:\n";
        std::cin >> num4 >> num5;

        float summ = num4 + num5;
        std::cout << "Держи свою сумму: " << summ << "\n";
        break;
    }
    default:
        std::cout << "Ошибка! Такого действия не существует\n";
        break;
    }

    return 0;
}
