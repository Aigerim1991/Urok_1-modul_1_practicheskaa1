#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
red:
	int c;
	cout << "������� ����� �������:" << "\n";
	cin >> c;
	if (c == 1)
	{	
		unsigned int a;
		cout << "������� ������:" << "\n";
		cin >> a;
		int d;
		cout << "������� ������:" << "\n";
		cin >> d;
		float q = a / d;
		cout << "�������:" <<q<<"\n";
		float r = a%d;
		cout << "������� �� �������:" << r << "\n";
			}
	else if (c == 2)
	{
		int x;
		cout << "������� ������:" << "\n";
		cin >> x;
		int y;
		cout << "������� ������:" << "\n";
		cin >> y;
		if ((x == 0) && (y == 0))
		{
			int f=0;
			cout << f << "������������ 0:"<<"\n";
		}
		else if ((x > 0) && (y == 0))
		{
		
			cout << "���� � ����� 0:"<<"\t"<<12/x<< "\n";
		}
		else if ((x == 0) && (y > 0))
		{
			cout << "���� x ����� 0:" <<"\t"<< 12 / y << "\n";
		}
		else
		{

			cout << "�����:" << "\t"<<144/(x*y) << "\n";
		}
	}
	else if (c == 3)
	{
		 int x;
		cout << "������� ������:" << "\n";
		cin >> x;
		int y;
		cout << "������� ������:" << "\n";
		cin >> y;
		if (x > y)
		{
			int f = x - y;
			cout << "���� x ������ �:" << "\t" << f << "\n";
		}
		else
		{
			cout << "���������� �-�:" << endl;
		}
	}
	goto red;
	return 0;
}