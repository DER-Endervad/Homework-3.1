#include <iostream>
#include "Calculator.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    Calculator calculator;
    calculator.set_num1();
    calculator.set_num2();
    int value = 0;
    while (true) {
        std::cout << "Список всех действие:" << std::endl;
        std::cout << "1 - Сложение чисел" << std::endl;
        std::cout << "2 - перемножение чисел" << std::endl;
        std::cout << "3 - Вычитание второго числа из первого" << std::endl;
        std::cout << "4 - Вычитание первого числа из второго" << std::endl;
        std::cout << "5 - Деление первого числа на второе" << std::endl;
        std::cout << "6 - Деление второго числа на первое" << std::endl;
        std::cout << "7 - Введение новых чисел" << std::endl;
        std::cout << "0 - Завершить все операции и выключить калькулятор\n" << std::endl;
        std::cout << "Выберите действие и напишите цифру: ";
        std::cin >> value;
        if (value == 1) {
            std::cout << "num1 + num2 = " << calculator.add() << std::endl;
        }
        else if (value == 2) {
            std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
        }
        else if (value == 3) {
            std::cout << "num1 - num2 = " << calculator.subtract_1_2() << std::endl;
        }
        else if (value == 4) {
            std::cout << "num2 - num1 = " << calculator.subtract_2_1() << std::endl;
        }
        else if (value == 5) {
            std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
        }
        else if (value == 6) {
            std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;
        }
        else if (value == 7) {
            calculator.set_num1();
            calculator.set_num2();
        }
        else {
            break;
        }
        std::cout << std::endl;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
