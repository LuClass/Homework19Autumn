#include<iostream>
using namespace std;

int len(char* ch)
{
	int n=0;
	while(*ch++!=0)
		n++;
	return n;
}
void Strcat(char* a,char* b)
{
	int c=len(a);
	int d=len(b);
	int i;
	for(i=c;(i<c+d)&&(*b!=0);i++,b++)
	{
		*(a+i)=*b;
	}		
		*(a+c+d)='\0';	
}

int main()
{
	char a[40],b[20];
	cin.getline(a,20);
	cin.getline(b,20);
	Strcat(a,b);
	cout<<endl<<a;
	return 0;
}
