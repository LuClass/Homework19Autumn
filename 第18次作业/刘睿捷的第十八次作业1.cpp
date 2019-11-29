#include<iostream>
//#include<string.h>
using namespace std;

int getlen(char* ch)
{
	int n=0;
	while(*ch++!=0)
		n++;
	return n;
}

void Strcat(char* a,char* b)
{
	int n1=getlen(a);
	int n2=getlen(b);
	cout<<endl<<n1<<" "<<n2<<endl;
	for(int x=n1;(x<n1+n2)&&(x<20)&&(*b!=0);x++,b++)
	{
		*(a+x)=*b;
	}
	if(n1+n2<20)		
		*(a+n1+n2)=0;
	*(a+20)=0;
}

int main(void)
{
	char a[20],b[20];
	cin.getline(a,20);
	cin.getline(b,20);
	Strcat(a,b);
	cout<<endl<<a;
	cout<<endl<<endl<<getlen(a);
	
	return 0;
}
