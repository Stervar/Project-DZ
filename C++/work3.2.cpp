#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	float num1, num2;
	std::cout << "Введите два значения (Если они дробны то используйте точки) "; std::cin >> num1 >> num2;
	float modul1 = (num1 < 0) ? -num1 : num1;
	{ std::cout << "Вывод первого " << modul1 << "\n"; }
	float modul2 = (num2 < 0) ? -num2 : num2;
	{ std::cout << "Вывод второго числа  " << modul2 << "\n"; }
	float summ = (num1 + num2);
	std::cout << "Вывод Модуль суммы " << summ << "\n";
	float summ_modul = (modul1 + modul2);
	std::cout << "Вывод суммы модулей этих чисел  " << summ_modul << "\n";
	return 0;

}

