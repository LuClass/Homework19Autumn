#include<iostream>
using namespace std;

//(6)
int GCD(int m, int n)	//最大公约数
{
	if (n > m)
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
int main()	//测试
{
	int m, n;
	while (cin >> m >> n)
	{
		cout << "最大公约数:" << GCD(m, n) << endl;
		cout << "最小公倍数:" << LCM(m, n) << endl << endl;
	}
	return 0;
}

//(7)递推
int main()
{
	long n;
	while(cin >> n)
	{
		while (n != 0)
		{
			cout << n % 10;
			n /= 10;
		}
		cout << endl;
	}
	return 0;
}

//(7)递归
void reversal(long n)
{
	if (n != 0)
	{
		cout << n % 10;
		reversal(n / 10);
	}
	else
		cout << endl;
}
int main()
{
	long n;
	while (cin >> n)
		reversal(n);
	return 0;
}