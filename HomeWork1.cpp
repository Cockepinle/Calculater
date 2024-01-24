#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int b{};
	while (true)
	{
		cout << "Выберите операцию: 1. Деление 2. Умножение 3. Сложение 4. Вычитание 5. Возведение в степень 6. Нахождение квадратного корня 7. Нахождение 1 процента от числа 8. Найти факториал числа 9. Выйти из программы.";
		cin >> b;
		double a, s, c, p;
		switch (b)
		{
		case 1:
			do
			{
				cout << "Введите первое число: ";
				cin >> a;
				cout << "Введите второе число: ";
				cin >> s;
				if (s == 0)
				{
					cout << "Делить на ноль нельзя!" << endl;
				}
				else
				{
					c = a / s;
					cout << "Результат деления = " << c << endl;
				}
			} while (s == 0);
			break;

		case 2:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите втророе число: ";
			cin >> s;
			c = a * s;
			cout << "Умножение чисел = " << c << endl;
			break;

		case 3:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите втророе число: ";
			cin >> s;
			c = a + s;
			cout << "Сложение чисел = " << c << endl;
			break;

		case 4:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите втророе число: ";
			cin >> s;
			c = a - s;
			cout << "Вычетание чисел = " << c << endl;
			break;

		case 5:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите втророе число: ";
			cin >> s;
			c = pow(a,s);
			cout << "Возведение в степень = " << c << endl;
			break;

		case 6:
			cout << "Введите первое число: ";
			cin >> a;
			c = sqrt(a);
			cout << "Нахождение квадратного корня = " << c << endl;
			break;

		case 7:
			cout << "Введите число: ";
			cin >> a;
			//double doublea = static_cast<double>(a);
			c = (a / 100);
			cout << "Нахождение 1 процента от числа = " << c << ::endl;
			break;

		case 8:
			cout << "Введите число: ";
			cin >> a;
			c = 1;
			for (int i = 1; i <= a; i++)
			{
				c *= i;
			}
			cout << "Факториал числа = " << c << endl;
			break;

		case 9:
			return 0;

		} 
	}
}





