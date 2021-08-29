#include <iostream>
using namespace std;

#define TRIANGLE
#define RHOMBUS
#define PLUS_MINUS
#define HardChess

void main()
{
	setlocale(LC_ALL, "Russian");

	int n, i, j, a, b;
	cout << "Введите количестово символов: "; cin >> n;

#ifdef TRIANGLE
	for (i = 0; i < n; i++)
	{

		for (j = i; j < n; j++)
		{
			cout << "  ";
		}
		for (j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE

#ifdef RHOMBUS
	for (i = 0; i < n; i++)     // Верхняя половина ромба
	{
		for (j = 0; j < n - i - 1; j++) // Левая верхняя часть
			cout << " ";
		cout << "/";

		for (j = 0; j < i * 2; j++) // Правая верхняя часть
			cout << " ";
		cout << "\\" << endl;
	}
	for (i = n - 1; i >= 0; i--)   // Нижняя половина ромба
	{
		for (j = 0; j < n - i - 1; j++) // Правая нижняя часть
			cout << " ";
		cout << "\\";

		for (j = 0; j < i * 2; j++)   // Левая нижняя часть
			cout << " ";
		cout << "/" << endl;
	}
#endif // RHOMBUS

#ifdef PLUS_MINUS
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if ((i * n + j) % 2 == 0) 
			{
				cout << "+";
			}
			else
			{
				cout << "-";
			}
		}
		cout << endl;
	}
#endif // PLUS_MINUS

#ifdef HardChess
	for (i = 0; i < n; i++) // количество строк шахматной доски
	{
		for (b = 0; b < n; b++) // Количество строк квадрата шахматной доски
		{
			for (j = 0; j < n; j++) // Количество столбцов шахматной доски
			{
				for (a = 0; a < n; a++)  // Количество символов квадрата хаматной доски
				{
					if ((i + j) % 2 == 0)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
			}
			cout << endl;
		}
	}
#endif // HardChess

	
}