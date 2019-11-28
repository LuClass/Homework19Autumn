//	"50题"第2题  计算利润提成

#include <iostream>
#include<stdlib.h>
using namespace std;
int main (void)
{
	long int i,bt,b1,b2,b3,b4,b5;
	cout<<"请输入利润"<<endl;
	cin>>i;
	cout<<'\n';
	b1=100000*0.1;
	b2=b1+100000*0.075;
	b3=b2+200000*0.05;
	b4=b3+200000*0.03;
	b5=b4+400000*0.015;
	switch(i/100000)
	{
		case 0: bt=i*0.1;
		break;
		case 1: bt=b1+(i-100000)*0.075;
		break;
		case 2: 
		case 3:bt=b2+(i-200000)*0.05;
		break;
		case 4: 
		case 5:bt=b3+(i-400000)*0.03;
		break;
		case 6: 
		case 7:
		case 8:
		case 9:bt=b4+(i-600000)*0.015;
		break;
		default:bt=b5+(i-1000000)*0.01;
	} 
	cout<<"利润提成为："<<' '<<bt<<endl;
	system("pause");
	return 0;
} 

//  "50题"第13题  计算"水仙花数"

#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main(void)
{
	int i,j,k,m,count=0;
	cout<<"所有的水仙花数如下："<<endl;
	cout<<'\n';
	for (m=100;m<1000;m++)
	{
		i=m/100;
		j=m/10%10;
		k=m%10;
		if (i*i*i+j*j*j+k*k*k==m)
		{
			cout<<setw(5)<<m;
			count++;
			if (count%5==0)
				cout<<'\n';
		}	
	}
	cout<<'\n';
	system("pause");
	return 0;
}

//"50题"第16题  求两正整数的最大公约数和最小公倍数

#include <iostream>
#include <stdlib.h>
using namespace std;
int main(void)
{
	int a,b,c,m,t;
	cout<<"请输入第1个正整数并按下\"Enter\"键"<<endl;
	cin>>a;
	cout<<"请输入第2个正整数并按下\"Enter\"键"<<endl;
	cin>>b;
	if (a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	m=a*b;
	c=a%b;
	while (c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	cout<<"最大公约数是:"<<' '<<b<<endl;
	cout<<"最小公倍数是:"<<' '<<m/b<<endl;
	cout<<'\n';
	system("pause");
	return 0;
}

//"50题"第23题  打印两种形状的平行四边形

#include <iostream>
#include<stdlib.h>
using namespace std;
int main (void)
{
	int i,j,k,d,h;
	cout<<"平行四边形"<<endl;
	cout<<"请输入底"<<endl;
	cin>>d;
	cout<<"请输入高"<<endl;
	cin>>h;
	cout<<'\n';
	for (i=1;i<=h;i++)
	{
		for (j=1;j<=d;j++)
		{
			if (j<i&&j==1)
			{
				for (k=1;k<i;k++)
				cout<<" ";
			}
			  
			cout<<"*";
			if (j==d)
			cout<<endl;
		}
	}
	cout<<'\n';
	for (i=1;i<=h;i++)
	{
		for (j=1;j<=d;j++)
		{
			if (i<h&&j==1)
			{
				for (k=1;k<=(h-i);k++)
				cout<<" ";
			}
			cout<<"*";
			if (j==d)
			cout<<endl;
		}
	}
	system("pause");
	return 0;
} 

