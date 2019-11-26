//第五次作业2.4.6.8.10

//(2)
#include <iostream>
using namespace std;
int main() 
{
	long int i;
	int bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
	//scanf("%ld", &i);
	cin >> i;
	cin.get();
	bonus1 = 100000 * 0.1;
	bonus2 = bonus1 + 100000 * 0.75;
	bonus4 = bonus2 + 200000 * 0.5;
	bonus6 = bonus4 + 200000 * 0.3;
	bonus10 = bonus6 + 400000 * 0.15;
	if (i <= 100000)
		bonus = i * 0.1;
	else if (i <= 200000)
		bonus = bonus1 + (i - 100000) * 0.075;
	else if (i <= 400000)
		bonus = bonus2 + (i - 200000) * 0.05;
	else if (i <= 600000)
		bonus = bonus4 + (i - 400000) * 0.03;
	else if (i <= 1000000)
		bonus = bonus6 + (i - 600000) * 0.015;
	else
		bonus = bonus10 + (i - 1000000) * 0.01;
	//printf("bonus=%d", bonus);
	cout << "bonus=" << bonus;
	//getch();
	cin.get();
	return 0;
}



//(4)
#include <iostream>
using namespace std;
int main() 
{
	int day, month, year, sum, leap;
	//printf("\nplease input year,month,day\n");
	cout << "\nplease input year,month,day\n";
	//scanf("%d,%d,%d", &year, &month, &day);
	cin >> year >> month >> day;
	cin.get();
	switch (month) /*先计算某月以前月份的总天数*/
	{
	case 1:sum = 0; break;
	case 2:sum = 31; break;
	case 3:sum = 59; break;
	case 4:sum = 90; break;
	case 5:sum = 120; break;
	case 6:sum = 151; break;
	case 7:sum = 181; break;
	case 8:sum = 212; break;
	case 9:sum = 243; break;
	case 10:sum = 273; break;
	case 11:sum = 304; break;
	case 12:sum = 334; break;
	//default:printf("data error"); break;
	default:cout << "data error"; break;
	}
	sum = sum + day; /*再加上某天的天数*/
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) /*判断是不是闰年*/
		leap = 1;
	else
		leap = 0;
	if (leap == 1 && month > 2) /*如果是闰年且月份大于2,总天数应该加一天*/
		sum++;
	//printf("It is the %dth day.", sum);
	cout << "It is the " << sum << "th day.";
	//getch();
	cin.get();
	return 0;
}



//(6)
#include <iostream>
using namespace std;
int main()
{
	cout << "Hello C-world!\n";
	cout << " ****\n";
	cout << " *\n";
	cout << " * \n";
	cout << " ****\n";
	cin.get();
}



//(8)
#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
	int i, j, result;
	//printf("\n");
	cout << endl;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			result = i * j;
			//printf("%d*%d=%-3d", i, j, result); /*-3d表示左对齐，占3位*/
			cout << i << "*" << j << "=";
			cout << setw(3) << setiosflags(ios::left) << result;
		}
		printf("\n"); /*每一行后换行*/
	}
	//getch();
	cin.get();
}



//(10)
//#include <bits/stdc++.h>
#include <iostream>
#include <fcntl.h>
#include <io.h>
#include <stdio.h>
//_setmode(_fileno(stdout), _O_U16TEXT);
//#pragma execution_character_set("utf-8")
#define debug
using namespace std;

int main() 
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	//It WORKS!my goodness!yui bless me(smile
#ifndef debug
	wchar_t ch = u'你';
	wchar_t ch2 = u'㋿';
	wcout << ch << endl;
	wcout << ch2 << endl;
#endif // !debug
	//printf("\1\1\n"); /*输出两个笑脸*/	虚假的笑脸
	//U+263B	☻	真正的笑脸
	wcout << L"\x263B☻ \n";
	int i, j;
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j <= i; j++)
			//printf("%c%c",219,219);	219 == 0xDB	0XDB == u'Û' U+OXDB
			wcout << L"ÛÛ";
		//printf("\n");
		wcout << "\n";
	}
#ifndef debug
	wprintf(L"\x263b");		U+263B	☻
#endif // !debug
	//getch();
	cin.get();
	return 0;
}