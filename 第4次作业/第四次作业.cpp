//第68页第四题
#include<iostream>
using namespace std;
int main(void)
{
int count=0;
char ch=0;
do{
ch=cin. get();
if(ch>='0'&&ch<='9')
count++;
}while(ch!='\n');
cout<<"count="<<count<<endl;
return 0;
}   
//第68页第七题
#include<iostream>
using namespace std;
int main(void)
{
cout<<"1/2"<<endl;
cout<<"3/2"<<endl;
int a,b,i,t;
a=3,b=2,i=1;
for(i=1;i<=18;i++)
{t=a;a=a+b;b=t;
  cout<<a<<'/'<<b<<endl;}
return 0;
}
//第68页第八题
#include<iostream>
using namespace std;
int main(void)
{
	int x,i;
	i=1;
	cin>>x;
	    for(i=1;i<x;i++)
	    { if(x%i==0)
	         cout<<i<<endl;
	    }
	int sum,j,t;
	for(t=2;t<=100;t++)
	{sum=0;
		for(j=1;j<t;j++)
	  if(t%j==0)
	  sum+=j;
	  if(sum==t)
	  cout<<"完全数为"<<t<<endl;}
	  return 0;
}