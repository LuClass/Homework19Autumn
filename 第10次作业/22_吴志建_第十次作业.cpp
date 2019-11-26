#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

//(2)
void getRandom(int a[], int n) 
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 101;
}
int getMax(const int a[], int n)
{
	int i, maxn = a[0], maxIndex = 0;
	for (i = 1; i < n; i++)
	{
		if (a[i] > maxn)
		{
			maxn = a[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}
int main()	//测试
{
	int a[10];
	getRandom(a, 10);
	for (auto& y : a)
		cout << y << " ";
	cout << endl << getMax(a, 10) << endl;
}

//(5)
bool isPrime(int n)    //判断是否为质数
{
	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int sum(int n)    //求各位数之和
{
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
bool isSmith(int n)
{
	int sum1 = 0, sum2 = 0;
	if (isPrime(n))
		return false;
	else
	{
		sum2 = sum(n);
		while (n > 1)
		{
			for (int i = 2; i <= n; i++)
			{
				if (n % i == 0)
				{
					sum1 += sum(i);
					n /= i;
					break;
				}
			}
		}
	}
	if (sum1 == sum2)
		return true;
	return false;
}
int main()
{
	for (int n = 4937774;; n++)
	{
		if (isSmith(n))
		{
			cout << n << endl;
			break;
		}
	}
	return 0;
}

//(10)
int main()
{
	int a[21], count = 0, total = 21;	//count报数,total剩余人数
	for (int i = 0; i <= 20; i++)
		a[i] = i + 1;
	while (true)
	{
		for (int i = 0; i <= 20; i++)
		{
			if (a[i] != 0)
			{
				count++;
				if (count % 5 == 0)
				{
					a[i] = 0;
					total--;
				}
			}
		}
		if (total == 1)
			break;
	}
	for (int i = 0; i <= 20; i++)
	{
		if (a[i] != 0)
			cout << a[i] << endl;
	}
	return 0;
}