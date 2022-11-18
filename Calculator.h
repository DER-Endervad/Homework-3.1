#include <iostream>

class Calculator
{
private:
	double num1;
	double num2;

public:
	void set_num1() {
		std::cout << "Введите num1: ";
		std::cin >> num1;
		if (num1 != 0) {
			return;
		}
		else {
			std::cout << "Неверный ввод!" << std::endl;
			set_num1();
		}
	}

	void set_num2() {
		std::cout << "Введите num2: ";
		std::cin >> num2;
		if (num2 != 0) {
			return;
		}
		else {
			std::cout << "Неверный ввод!" << std::endl;
			set_num2();
		}
	}

	double add() { return num1 + num2; }
	double multiply() { return num1 * num2;  }
	double subtract_1_2() { return num1 - num2; }
	double subtract_2_1() { return num2 - num1; }
	double divide_1_2() { return num1 / num2;  }
	double divide_2_1() { return num2 / num1; }

};

