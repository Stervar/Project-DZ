#include <iostream>
#include <clocale>
int main() {
	setlocale(LC_ALL, "Russian");

	int i = 0;
	int count = 0;
	int summ = 0;
	std::cout << "Вы можете ввести n значений и одно отрицательное чтобы закончить вывод:\n";

	while (true) {
		std::cin >> i;
		if (i < 0) {
			break; 
		}
		summ += i;
		count++;
	}
	std::cout << "Количество: " << count << '\n';
	std::cout << "Сумма: " << summ << '\n';
	return 0;
}
