#include <iostream>
using namespace std;

void task1()
{
	int a, b, c, n;
	cout << "Enter a, b, c: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "Enter your № from the table: ";
	cin >> n;
	if (a >= 1 && a <= n)
	{
		cout << a << endl;
	}
	if (b >= 1 && b <= n)
	{
		cout << b << endl;
	}
	if (c >= 1 && c <= n)
	{
		cout << c << endl;
	}
}

void task2()
{
	int a, b, c, n;
	int min = 0;
	int max = 0;
	cout << "Enter a, b, c: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "Enter your № from the table: ";
	cin >> n;
	if (n % 2 == 0)
	{
		if (a < min)
		{
			min = a;
		}
		if (b < min)
		{
			min = b;
		}
		if (c < min)
		{
			min = c;
		}
		cout << min;
	}
	else
	{
		if (a > max)
		{
			max = a;
		}
		if (b > max)
		{
			max = a;
		}
		if (c > max)
		{
			max = c;
		}
		cout << max;
	}
}

void task3()
{
	int n;
	float a = 1;
	float sum = 0;
	cout << "Enter amount elements: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		sum += a;
		a *= 0.5;
	}
	cout << sum;
}

void task4()
{
	int a;
	int i = 2;
	cout << "enter a number that is at least 2: ";
	cin >> a;
	while (a % i != 0)
	{
		i++;
	}
	cout << i;
}

void task5()
{
	int a = 0;
	int b = 1;
	int next = 0;
	while (true)
	{
		next = a + b;
		a = b;
		b = next;
		cout << next << " , ";
	}
}

void task6()
{
	int val = rand() % 21;
	int num;
	cout << val;
	cout << "num: ";
	cin >> num;
	int i = 0;

	while (true)
	{
		if (num >= 0 && num <= 20)
		{
			i++;
			if (val == num)
			{
				cout << "true, you use " << i << " attempts";
				break;
			}
			else if (num < val)
			{
				cout << "num < val" << endl;

			}
			else if (num > val)
			{
				cout << "num > val" << endl;

			}
			cout << "num: ";
			cin >> num;
		}
		else
		{
			cout << "invalid number";
			break;
		}
	}
}

int main()
{
	task1();
	cout << endl;
	task2();
	cout << endl;
	task3();
	cout << endl;
	task4();
	cout << endl;
	task5();
	cout << endl;
	task6();
	cout << endl;
}