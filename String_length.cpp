/* Напишите программу, которая вычисляет длину введенной пользователем строки 
без использования стандартной функции определения длины.*/

#include <iostream>
#include <Windows.h>       // для кириллицы
#include <string>

int main()
{
    // подключаем кириллицу:
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Программа считает количество символов в строке без стандартной функции для этого.\nВведите что-нибудь:\n";
    std::string users_text{};
    std::getline(std::cin, users_text);
    
    int string_size{ 0 };
    while (users_text[string_size] != '\0')
    {
        string_size++;
    }

    std::cout << "Вы ввели строку, длина которой " << string_size << std::endl;
    
    return 0;
}