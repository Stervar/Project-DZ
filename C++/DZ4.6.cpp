#include <iostream>
#include <algorithm>
#include <random>
#include <thread>

int main() {
	system("chcp 1251");
	int general = 0;

	std::cout << "Бро введи пожалуйста количества чисел диапазона(от 1 до 10)"; std::cin >> general;
	if (general < 1 || general > 10) {
		std::cout << "Бро введи норм число" << std::endl;//добавляет символ перевода строки (\n) в поток вывода, перемещая курсор на следующую строк
		return 0;
	}

	//srand(int(time(0)));
	srand(int(time(0)));
	int gar_max = 0;
	int gar_min = 11;
	std::cout << "\n|----------------------------|";
	std::cout << "\n Числа которые сгенерировали:\n";
	std::cout << "|----------------------------|\n";

	for (int i = 0; i < general; i++) {
		int one_num = rand() % 10 + 1;
		std::cout << "---|\n";
		std::cout << " " << one_num << "\n";
		std::cout << "---|\n";
		//   По сути таже херня, что и снизу так и так мы делаем проверку
		// только через if if  первое число отрицательно то число идёт дальше и так же делает 
		// проверку вот И ВСЁ
		//    gar_max = std::max(gar_max, one_num);
		//    gar_min = std::min(gar_min, one_num);
		if (one_num > gar_max) {
			gar_max = one_num;
		}
		if (one_num < gar_min) {
			gar_min = one_num;
		}
	}
	int diff = gar_max - gar_min;

	std::cout << ("\n--- Результат ---");
	std::cout << "\nНаименьшее число: " << gar_min << std::endl;
	std::cout << "Наибольшее число: " << gar_max << std::endl;
	std::cout << "Разница между ними: " << diff << std::endl;
	return 0;
}

