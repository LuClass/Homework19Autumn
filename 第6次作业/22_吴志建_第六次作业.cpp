#include<iostream>
using namespace std;

//(2)
long factorial(int n)
{
	long num = 1;
	for (int i = n; i >= 1; i--)
	{
		num *= i;
	}
	return num;
}
double comNum(int n, int k)
{
	return (factorial(n) / (factorial(k) * factorial(n - k)));
}
int main()
{
	cout << "C(4,2)=" << comNum(4, 2) << endl;
	cout << "C(6,4)=" << comNum(6, 4) << endl;
	cout << "C(8,7)=" << comNum(8, 7) << endl;
	return 0;
}

//(4)
bool isPrime(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	for (int n = 2; n <= 498; n++)
	{
		if (isPrime(n) && isPrime(n + 2))
			cout << n << "ºÍ" << n + 2 << endl;
	}
	return 0;
}

//(5)
void factor(int n)
{
	cout << n << "=";
	while(n > 1)
	{
		for (int i = 2; i <= n; i++)
		{
			if (n % i == 0)
			{
				cout << i;
				if (i < n)
					cout << "*";
				n /= i;
				break;
			}
		}
	}
	cout << endl;
}
int main()
{
	int n;
	while (cin >> n)
		factor(n);
	return 0;
}