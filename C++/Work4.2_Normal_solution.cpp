#include <iostream>
int main() {
	system("chcp 1251");
	int num1;
	std::cout << "\n¬ведите сколько раз хотите повторить слово Hello world\n"; std::cin >> num1;
	for (int i = 0; i < num1; i++) {
		std::cout <<". Hello, World!\n";
	}
	std::cout << "\n\n";
}