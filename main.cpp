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
	cout << "������� ����������� ��������: "; cin >> n;

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
	for (i = 0; i < n; i++)     // ������� �������� �����
	{
		for (j = 0; j < n - i - 1; j++) // ����� ������� �����
			cout << " ";
		cout << "/";

		for (j = 0; j < i * 2; j++) // ������ ������� �����
			cout << " ";
		cout << "\\" << endl;
	}
	for (i = n - 1; i >= 0; i--)   // ������ �������� �����
	{
		for (j = 0; j < n - i - 1; j++) // ������ ������ �����
			cout << " ";
		cout << "\\";

		for (j = 0; j < i * 2; j++)   // ����� ������ �����
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
	for (i = 0; i < n; i++) // ���������� ����� ��������� �����
	{
		for (b = 0; b < n; b++) // ���������� ����� �������� ��������� �����
		{
			for (j = 0; j < n; j++) // ���������� �������� ��������� �����
			{
				for (a = 0; a < n; a++)  // ���������� �������� �������� �������� �����
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