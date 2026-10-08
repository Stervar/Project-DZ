#include <iostream>
#include <list>
#include <string>
int main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");


	int num1;
	std::list < std::string > word = { "Hello world" };
	std::cout << "\n""Введите сколько раз хотите повторить слово Hello world ""\n"; std::cin >> num1;
	for (int i = 0; i < num1; i++) {
		std::cout << word.front() << "\n";
	}
	std::cout << "\n\n";