2.
#include<iostream>
using namespace std;
int bonus1 = 10000;
int bonus2 = bonus2 + 75000;
int bonus4 = bonus2 + 100000;
int bonus6 = bonus4 + 60000;
int bonus10 = bonus6 + 60000;
int main()
{
	long int i;
	cin >> i;
	switch (i/100000)
	{
		case 0:cout << i*0.1;
				break;
		case 1:cout << bonus1 + (i-100000)*0.075;
				break;
		case 2:cout << bonus2 + (i-200000)*0.05;
				break;
		case 3:cout << bonus2 + (i-200000)*0.05;
				break;
		case 4:cout << bonus4 + (i-400000)*0.03;
				break;
		case 5:cout << bonus4 + (i-400000)*0.03;
				break;
		case 6:cout << bonus6 + (i-600000)*0.015;
				break;
		case 7:cout << bonus6 + (i-600000)*0.015;
				break;
		case 8:cout << bonus6 + (i-600000)*0.015;
				break;
		case 9:cout << bonus6 + (i-600000)*0.015;
				break;
		default:cout << bonus10 + (i-1000000)*0.01;
				break;
	}
}
13.
#include<iostream>
using namespace std;
main()
{
	int i,j,k;
	for(int n = 100;n<1000;n++)
	{
		i = n/100;
		j = n/10%10;
		k = n%10;
		if(n == i*i*i +j*j*j +k*k*k)
		cout<<n<<' ';
	}
}
16.
#include<iostream>
using namespace std;
main()
{
	int a,b,a1,b1,rest;
	cin>>a>>b;
	if(a<b)
	{
		rest = a;a = b;b = rest;
	}
	a1=a;
	b1=b;
	while(b1 != 0)
	{
		rest = a1%b1;a1 = b1;b1 = rest;
	}
	cout<<a1<<' '<<a*b/a1;
}
23.
#include<iostream>
using namespace std;
main()
{
	int chang,gao,j = 0;
	cin >> chang >> gao;
	for(int i = 1;i <= gao;i++)
	{
		j++;
		for(int re = 1;re <= j;re++)
		cout << ' ';      //输出空白
		for(int re = 1;re <= chang;re++)
		cout << '*';      //输出星星
		cout << endl;
	}
	for(int i = 1;i <= gao;i++)
	{
		for(int re = 1;re <= j;re++)
		cout << ' ';      //输出空白
		for(int re = 1;re <= chang;re++)
		cout << '*';      //输出星星
		j--;
		cout << endl;
	}	
}