#include <iostream>
#include <string>

int main() {
    std::string name;   //переменная для хранения имени пользователя
    std::cout << "Enter your name: ";   //запрос имени пользователя
    std::cin >> name;   //чтения ввода пользователя
    std::cout << "Hello world from " << name << "!" << std::endl;   //вывод приветствия
    return 0;   //завершение программы
{
