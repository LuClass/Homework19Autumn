//第2题
#include<iostream>
using namespace std;
int main(void)
{long int i;
int b1,b2,b3,b4,b5,b;
cin>>i;
b1=100000*0.1;
b2=b1+100000*0.075;
b3=b2+200000*0.05;
b4=b3+200000*0.03;
b5=b4+400000*0.015;
switch(i/100000)
   {case 0:b=i*0.1;break;
    case 1:b=b1+(b-100000)*0.075;break;
    case 2:
    case 3:b=b2+(b-200000)*0.05;break;
	case 4:
	case 5:b=b3+(b-400000)*0.03;break;
	case 6:
	case 7:
	case 8:
	case 9:b=b4+(b-600000)*0.015;break;
	default:b=b5+(b-1000000)*0.001;	
   }
   cout<<"应发放奖金数"<<b<<endl;
   return 0; 
}
//第13题
#include<iostream>
using namespace std;
int main(void)
{int i,j,k;
long int n;
 for(n=100;n<1000;n++)
 {i=n/100;j=n%100/10;k=n%100%10;
 if(n==i*i*i+j*j*j+k*k*k)
 cout<<"水仙花数为"<<n<<"  ";
}
 return 0;
} 
//第16题
#include<iostream>
using namespace std;
int main(void)
{long int m,n,t,s;
cin>>m;cin>>n;
s=m*n;
if(m>=n)
{
for(;m%n!=0;m%n)
 {t=m%n;m=n;n=t;
 }
 cout<<"最大公约数="<<n<<endl;
 cout<<"最小公倍数="<<s/n;}
 else 
 {for(;n%m!=0;n%m)
 {t=n%m;n=m;m=t;}
 cout<<"最大公约数="<<m<<endl;
 cout<<"最小公倍数="<<s/m;}
   return 0; 
}
//第23题 
#include<iostream>
using namespace std;
int main(void)
{   int a,b;
	cin>>a;cin>>b;
	int i,j;
	for(i=1;i<=b;i++)
	{
	for(j=1;j<=a+i;j++)
	if(j<=i)
	{cout<<" ";}
	else cout<<"*";cout<<endl;
	}
	//
	for(i=1;i<=b;i++)
	{
	for(j=1;j<=a+i;j++)
	if((i>=b+j-1)&&(i<=a+b+j-1))
	{cout<<"*";}
	else cout<<" ";cout<<endl;
	}
  return 0;
}
