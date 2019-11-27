#include<iostream>
using namespace std;

//(2)
int main()
{
	long i;
	int bonus1, bonus2, bonus3, bonus4, bonus5, bonus;
	bonus1 = 100000 * 0.1;
	bonus2 = bonus1 + 100000 * 0.075;
	bonus3 = bonus2 + 200000 * 0.05;
	bonus4 = bonus3 + 200000 * 0.03;
	bonus5 = bonus4 + 400000 * 0.015;
	while (cin >> i)
	{
		switch (i / 100000)
		{
		case 0:bonus = i * 0.1;
			break;
		case 1:bonus = bonus1 + (i - 100000) * 0.075;
			break;
		case 2:case 3:bonus = bonus2 + (i - 200000) * 0.05;
			break;
		case 4:case 5:bonus = bonus3 + (i - 400000) * 0.03;
			break;
		case 6:case 7:case 8:case 9:bonus = bonus4 + (i - 600000) * 0.015;
			break;
		default:bonus = bonus5 + (i - 1000000) * 0.01;
			break;
		}
		cout << bonus << endl << endl;
	}
	return 0;
}

//(13)
bool isNum(int n)
{
	int i = n / 100, j = (n / 10) % 10, k = n % 10;
	if (i * i * i + j * j * j + k * k * k == n)
		return true;
	return false;
}
int main()
{
	for (int i = 100; i <= 999; i++)
	{
		if (isNum(i))
			cout << i << "  ";
	}
	return 0;
}

//(16)
int GCD(int m, int n)	//最大公约数
{
	if (m < n)
		swap(m, n);
	int temp = n;
	while (m % n != 0)
	{
		temp = m % n;
		m = n;
		n = temp;
	}
	return temp;
}
int LCM(int m, int n)	//最小公倍数
{
	return m * n / GCD(m, n);
}
int main()
{
	int m, n;
	while (cin >> m >> n)
		cout << "最大公约数:" << GCD(m, n) << endl << "最小公倍数:" << LCM(m, n) << endl << endl;
	return 0;
}

//(23)
int main()
{
	int length, height;
	cout << "按顺序输入底边长度和宽度:";
	cin >> length >> height;
	for (int i = 1; i <= height; i++)
	{
		for (int k = 0; k < i - 1; k++)
			cout << " ";
		for (int j = 1; j <= length; j++)
			cout << (char)42;
		cout << endl;
	}
	cout << endl;
	for (int i = height; i >= 1; i--)
	{
		for (int k = 0; k < i - 1; k++)
			cout << " ";
		for (int j = 1; j <= length; j++)
			cout << (char)42;
		cout << endl;
	}
	return 0;
}