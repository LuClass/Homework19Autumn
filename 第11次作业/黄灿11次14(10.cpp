#include<iostream>
using namespace std;
int f(int a[])
{
	int t=0;	
	for(int i=0;i<21;i++)
	{
		if(a[i]!=0)
		t++;	
	}
	return t;
}
int main()
{
	int a[21];
	for(int i=0;i<21;i++)
	a[i]=i+1;
	int j,k=0;
	for(j=0;;j++)
	{
		if(a[j%21+1]!=0)
		k=k+1;
		if(k%5==0)
		a[j]=0;
		if(f(a)==1)
		break;	
	}
	cout<<j%21<<endl;
}
