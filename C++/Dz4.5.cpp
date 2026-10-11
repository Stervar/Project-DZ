#include <iostream>
#include <clocale>
int main() {
    setlocale(LC_ALL, "Russian");

    int start = 0;
    int end = 0;
    int summ = 0;
    std::cout << "¬ведите начальное целое число диапазона: ";
    std::cin >> start;
    std::cout << "¬ведите конечное целое число диапазона: ";
    std::cin >> end;
    std::cout << "\n„исла в диапазоне от " << start << " до " << end << ":\n";


    if (start <= end) {
        for (int i = start; i <= end; i++) { 
            std::cout << i << " ";
            summ += i;
        }
    }
    else {
        for (int i = start; i >= end; i--) {
            std::cout << i << " ";
            summ += i;
        }
    }
    std::cout << "\n\n—умма всех чисел: " << summ << '\n';

    return 0;
}
