#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	//Задание 1
	std::cout << "\n"" Вывод от 0 до 10""\n";
	for (int i = 0; i < 10; i++) std::cout << i + 1 << " ";
	std::cout << "\n\n";
	//Задание 2
	std::cout << "\n"" Вывод от -10 до 10""\n";
	for (int i = -10; i < 10; i++) std::cout << i + 1 << " ";
	std::cout << "\n\n";
	//Задание 3
	std::cout << "\n"" Вывод от 15 до -25""\n";
	for (int i = 15; i >= -25; i--)std::cout << i << " ";
	std::cout << "\n\n";
	//Задание 4				
	std::cout << "\n"" Вывод от 0 до 100 c шагом 15""\n";						
	for (int i = 0; i < 100; i += 15) std::cout << i  << " ";					
	std::cout << "\n\n";
	//Задание 5							
	int num1;								
	std::cout << "Введите второе число: "; std::cin >> num1;							
	std::cout << "\n"" Вывод от 0 до " + num1 << "\n";								
	for (int i = 0; i < num1; i++)std::cout << i + 1 << " ";							
	std::cout << "\n\n";
	//Задание 6	
	int num2;										
	std::cout << "Введите первое число: "; std::cin >> num2;										
	std::cout << "\n"" Вывод от " + num2 << "до 100" << "\n";										
	for (int i = num2; i <= 100; i++)std::cout << i + 1 << " ";									
	std::cout << "\n\n";
	//Задание 7																																				
	int num3, num4;														
	std::cout << "Введите первое число: "; std::cin >> num3;														
	std::cout << "Введите второе число: "; std::cin >> num4;														
	std::cout << "\n"" Вывод от " + num3 << "до" + num4 << "\n";														
	for (int i = num3; i < num4; i++)std::cout << i << " ";
		std::cout << "\n\n";
		return 0;
	}