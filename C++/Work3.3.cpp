#include <iostream>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251 > nul");

	float num1, num2, num3 , num4, num5;
	int choise;


	std::cout << "1)Первое действие введи и я посчитаю какое больше " << "\n";
	std::cout << "2)Второе действие введи 1 или 0 " << "\n";
	std::cout << "3)Третье действие введи и посчитаю сумму " << "\n";
	std::cin >> choise;



	if (choise == 1) {
		std::cout << "Введите Первое число: "; std::cin >> num1;
		std::cout << "Введите Второе число: "; std::cin >> num2;

		float max_number = std::max({ num1, num2 });
		std::cout << "Наибольшее число: " << max_number << "\n";
	}
	 else if (choise == 2) {
		std::cout << "Введите число 1 или 0: "; std::cin >> num3;
		if (num3 == 1) std::cout << "ПРИВЕТ ЭТО ЛОВУШКА <3" "\n";

		else if (num3 == 0) std::cout << "Хех ну ты и плохой " "\n";
	}

	else if (choise == 3) {
		std::cout << "Введите два числа чтобы я сложил их " << "\n"; std::cin >> num4 >> num5;
		float summ = (num4 + num5);
		std::cout << "Держи свою сумму " "\n" << summ;
	}
	else {
		std::cout << "Ошибка! Такого действия не существует\n";
	}
	return 0;

}