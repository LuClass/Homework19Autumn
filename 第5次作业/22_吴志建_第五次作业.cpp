#include<iostream>
#include<iomanip>
using namespace std;

//2
int main() 
{
	long i;
	double bonus, bonus1, bonus2, bonus3, bonus4, bonus5;
	bonus1 = 100000 * 0.1;	//100k
	bonus2 = bonus1 + 100000 * 0.075;	//200k
	bonus3 = bonus2 + 200000 * 0.05;	//400k
	bonus4 = bonus3 + 200000 * 0.03;	//600k
	bonus5 = bonus4 + 400000 * 0.015;	//1m
	cout << "输入月利润:";
	while (cin >> i)
	{
		bonus = 0;
		if (i <= 100000)
			bonus = i * 0.1;
		else if (i <= 200000)
			bonus = bonus1 + (i - 100000) * 0.075;
		else if (i <= 400000)
			bonus = bonus2 + (i - 200000) * 0.05;
		else if (i <= 600000)
			bonus = bonus3 + (i - 400000) * 0.03;
		else if (i <= 1000000)
			bonus = bonus4 + (i - 600000) * 0.015;
		else
			bonus = bonus5 + (i - 1000000) * 0.01;
		cout << "奖金:" << bonus << endl << endl << "输入月利润:";
	}
	return 0;
}

//4
int main()
{
	int year, month, day, total;
	cout << "按顺序输入年，月，日：";
	while (cin >> year >> month >> day)
	{
		switch (month)
		{
		case 1:total = 0;
			break;
		case 2:total = 31;
			break;
		case 3:total = 59;
			break;
		case 4:total = 90;
			break;
		case 5:total = 120;
			break;
		case 6:total = 151;
			break;
		case 7:total = 181;
			break;
		case 8:total = 212;
			break;
		case 9:total = 243;
			break;
		case 10:total = 273;
			break;
		case 11:total = 304;
			break;
		case 12:total = 334;
			break;
		default:cout << "错误！重新输入：";
			break;
		}
		total += day;
		if (month > 2)
		{
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				total++;
		}
		cout << total << "天" << endl << endl << "按顺序输入年，月，日：";
	}
	return 0;
}

//6
int main()
{
	cout << "  ******" << endl;
	cout << " *" << endl;
	cout << "*" << endl << "*" << endl;
	cout << " *" << endl;
	cout << "  ******" << endl;
	return 0;
}

//8
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			cout << j << " * " << i << " = " << setw(2) << i * j << "  ";
		cout << endl;
	}
	return 0;
}

//10
int main()
{
	int i, j;
	cout << " " << (char)64 << " " << (char)64 << endl;
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j <= i; j++)
			cout << (char)38 << (char)38;
		cout << endl;
	}
	return 0;
}