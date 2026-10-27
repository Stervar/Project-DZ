#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

	
int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int num[3];
	cout << "Введи 3 числа ";
	cin >> num[0] >> num[1] >> num[2];

	cout << "Числа по списку: " << num[0] << " " << num[1] << " " << num[2] << endl;
	cout << "Числа по списку наоборот: " << num[2] << " " << num[1] << " " << num[0] << endl;
	cout << "крутая штука" << num[-1];
	cout <<  "крутая штука" << num[4];

	return 0;
}
