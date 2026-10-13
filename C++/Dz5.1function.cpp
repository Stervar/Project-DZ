// 1. Напишите функцию умножения двух чисел (результат вывести на экран)
// 2. Напишите функцию, выводящую сообщение на экран
// 3. Напишите функцию, запускающую цикл от -19 до 24 и выводящую числа
// между ними


//Запускать код нужно в КОДИРОВКЕ UTF-8 а то по другому не работает :(
#include <iostream>
#include <windows.h>
using namespace std; 



        int muMultiplication(){
        SetConsoleCP(65001);
        SetConsoleOutputCP(65001); 
        std::cout << "Задание 1\n "<< std::endl;  
        std::cout << "Введите  два числа (а я уже их умножу) "<< std::endl;     
        int num1, num2;
        std::cin >> num1 >> num2;
        std::cout<< "Прошу твой ответ: " << (num1 * num2) << std::endl;   
        return 0;
        }

            void textT( ){
            SetConsoleOutputCP(65001);
            std::cout << "Задание 2\n"; 
            std::cout <<"⣿⣿⢱⣶⣭⡻⢿⠿⣛⣛⣛⠸⣮⡻⣿⣿⡿⢛⣭⣶⣆⢿⣿"<< std::endl;  
            std::cout <<"⣿⡿⣸⣿⣿⣿⣷⣮⣭⣛⣿⣿⣿⣿⣶⣥⣾⣿⣿⣿⡷⣽⣿"<< std::endl;  
            std::cout <<"⣿⡏⣾⣿⣿⡿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣿⣿"<< std::endl;  
            std::cout <<"⣿⣧⢻⣿⡟⣰⡿⠁⢹⣿⣿⣿⣋⣴⠖⢶⣝⢻⣿⣿⡇⣿⣿"<< std::endl;  
            std::cout <<"⠩⣥⣿⣿⣴⣿⣇⠀⣸⣿⣿⣿⣿⣷⠀⢰⣿⠇⣿⣭⣼⠍⣿"<< std::endl;  
            std::cout <<"⣿⡖⣽⣿⣿⣿⣿⣿⣿⣯⣭⣭⣿⣿⣷⣿⣿⣿⣿⣿⡔⣾⣿"<< std::endl;  
            std::cout <<"⣿⡡⢟⡛⠻⠿⣿⣿⣿⣝⣨⣝⣡⣿⣿⡿⠿⠿⢟⣛⣫⣼⣿"<< std::endl;  
            std::cout <<"⣿⣿⣿⡷⠝⢿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣾⡩⣼⣿⣿⣿⣿⣿"<< std::endl;  
            std::cout <<"⣿⣿⣯⡔⢛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣭⣍⣨⠿⢿⣿⣿⣿"<< std::endl;  
            std::cout <<"⣿⡿⢫⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣝⣿"<< std::endl;  
            }    

                    int muCikl(){
                    SetConsoleOutputCP(65001);
                    std::cout << "\nЗадание 3" << std::endl;  
                    std::cout << "Цикл от -19 до 24:" << std::endl; 
            
                    int start = -19 , end = 24;
                    for  (int i  = start ; i <= end; i++) {std::cout  <<  i  << " ";  }
                        std::cout << std::endl; 
                        return 0; 
                    } 

                    int main(){
                        muMultiplication();
                        textT();
                        muCikl();

                        return 0 ;
                    }



