#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
red:
	int c;
	cout << "Введите номер задания:" << "\n";
	cin >> c;
	if (c == 1)
	{	
		unsigned int a;
		cout << "Введите данные:" << "\n";
		cin >> a;
		int d;
		cout << "Введите данные:" << "\n";
		cin >> d;
		float q = a / d;
		cout << "Частное:" <<q<<"\n";
		float r = a%d;
		cout << "Остаток от деления:" << r << "\n";
			}
	else if (c == 2)
	{
		int x;
		cout << "Введите данные:" << "\n";
		cin >> x;
		int y;
		cout << "Введите данные:" << "\n";
		cin >> y;
		if ((x == 0) && (y == 0))
		{
			int f=0;
			cout << f << "Возвращается 0:"<<"\n";
		}
		else if ((x > 0) && (y == 0))
		{
		
			cout << "Если у равен 0:"<<"\t"<<12/x<< "\n";
		}
		else if ((x == 0) && (y > 0))
		{
			cout << "Если x равен 0:" <<"\t"<< 12 / y << "\n";
		}
		else
		{

			cout << "Иначе:" << "\t"<<144/(x*y) << "\n";
		}
	}
	else if (c == 3)
	{
		 int x;
		cout << "Введите данные:" << "\n";
		cin >> x;
		int y;
		cout << "Введите данные:" << "\n";
		cin >> y;
		if (x > y)
		{
			int f = x - y;
			cout << "Если x больше у:" << "\t" << f << "\n";
		}
		else
		{
			cout << "Возвращает у-х:" << endl;
		}
	}
	goto red;
	return 0;
}