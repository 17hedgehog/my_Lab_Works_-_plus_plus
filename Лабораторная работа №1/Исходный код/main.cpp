#include <iostream>

using namespace std;

//Математическая функция, номер функции 1.01.
double f(double x, double c)
{
	double result;
	if (x + c > 3)
	{
		result = sqrt(x) + log(x + 2);
	}
	else if (x + c < 0)
	{
		result = c*sin(x + c);
	}
	else
	{
		result = c / x + x;
	}
	return result;
}

//Функция ищущая минимальное значение при максимальном значении x.
double myFunction(double a, double b, double h)
{
	double x, min, c, max_X;
	if (a > b)
	{
		double s;
		s = b;
		b = a;
		a = s;
	}
	cout << "Введите значение c" << endl;
	cin >> c;
	for(x = a; x <= b; x+=h)
	{
		if (x == a)
		{
			min = f(x, c);
			max_X = x;
		}
		if (min > f(x, c))
		{
			min = f(x, c);
			max_X = x;
		}
		if (min == f(x, c))
		{
			if (x > max_X)
			{
				max_X = x;
			}
		}
	}
	return max_X;
}

void main(void)
{
	setlocale(LC_ALL, "rus");
	double a, b, h;
	cout << "Введите значение переменных a,b,h" << endl;
	cin >> a >> b >> h;
	if (h < abs(a - b) / 2)
	{
		cout << myFunction(a, b, h);
	}
	else
	{
		cout << "Введенное вами значение переменной h должно быть меньше |A-B|/2!" << endl;
	}
}
