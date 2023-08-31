// cppm-3-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator {
	double num1, num2;
public:
	double add() {
		return num1 + num2;
	}
	double multiply() {
		return num1 * num2;
	}
	double subtract_1_2() {
		return num1 - num2;
	}
	double subtract_2_1() {
		return num2 - num1;
	}
	double divide_1_2() {
		return num1 / num2;
	}
	double divide_2_1() {
		return num2 / num1;
	}
	bool set_num1(double num1) {
		if (num1 == 0)return false;
		this->num1 = num1;
		return 1;
	}
	bool set_num2(double num2) {
		if (num2 == 0)return false;
		this->num2 = num2;
		return 1;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	while (1) {
		double x;
		Calculator cal;
		while (1) {
			std::cout << "Введите num1: ";
			std::cin >> x;
			if (cal.set_num1(x)) {
				break;
			}
			std::cout << "Неверный ввод!\n";
		}
		while (1) {
			std::cout << "Введите num2: ";
			std::cin >> x;
			if (cal.set_num2(x)) {
				break;
			}
			std::cout << "Неверный ввод!\n";

		}
		std::cout << "num1 + num2 = " << cal.add() << "\n";
		std::cout << "num1 - num2 = " << cal.subtract_1_2() << "\n";
		std::cout << "num2 - num1 = " << cal.subtract_2_1() << "\n";
		std::cout << "num1 * num2 = " << cal.multiply() << "\n";
		std::cout << "num1 / num2 = " << cal.divide_1_2() << "\n";
		std::cout << "num2 / num1 = " << cal.divide_2_1() << "\n";
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
