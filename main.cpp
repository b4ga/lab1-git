// Лабораторная работа № 1. Вариант 7.
// Выполнил Багаев.А.И., группа ПИ-52.
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

// ===== Расчётные функции варианта =====

// Гипотенуза с катетами a и b
double hypotenuse(double a, double b) {
	return sqrt(a * a + b * b);
}

double rightTriangleArea(double a, double b) {
	return a * b / 2;
}

// ===== Главная функция: меню =====
int main() {
	SetConsoleOutputCP(CP_UTF8);
	int choice;
	double a, b;

	do {
		cout << "\n=== Вариант 7: расчёты для прямоугольного треугольника ===\n";
		cout << "1. Гипотенуза\n";
		cout << "2. Площадь\n";
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;

		switch (choice) {
			case 0:
				cout << "Работа завершена.\n";
				break;
			case 1:
				cout << "Введите катеты a и b: ";
				cin >> a >> b;
				cout << "Гипотенуза = " << hypotenuse(a, b) << "\n";
				break;
			case 2:
				cout << "Введите катеты a и b: ";
				cin >> a >> b;
				cout << "Площадь = " << rightTriangleArea(a, b) << "\n";
				break;
			default: 
				cout << "Такого варианта нет.\n";
		}
	} while (choice != 0);

	return 0;
}