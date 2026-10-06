#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	float x, y, z;
	std::cout << "Введите Первое число(если оно дробно то пишите через точку) ";std::cin >> x;
	std::cout << "Введите Второе число(если оно дробно то пишите через точку) ";std::cin >> y;
	std::cout << "Введите Третье число(если оно дробно то пишите через точку) "; std::cin >> z;
	if (x > y && x > z) { std::cout << "Первое число больше " << x; }
	else if (y > x && y > z) { std::cout << "Второе число больше " << y; }
	else if (z > x && z > y) { std::cout << "Третье число больше " << z; }
	else { std::cout << "Хз чет не совподает."; }
	return 0;



}



//#include <iostream>
//#include <algorithm>
//
//int () {
//	setlocale(LC_ALL, "Russian");
//	system("chcp 1251 > nul");
//
//	float x, y, z;
//	std::cout << "Введите Первое число: "; std::cin >> x;
//	std::cout << "Введите Второе число: "; std::cin >> y;
//	std::cout << "Введите Третье число: "; std::cin >> z;
//
//
//
//float max_number = std::max({ x, y, z });
//std::cout << "Наибольшее число: " << max_number << std::endl;
//
//return 0;
//}