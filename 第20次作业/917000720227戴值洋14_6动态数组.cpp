#include <iostream>
using namespace std;
#include <string.h>

int getRev(char a[])
{
	int num=0;
	for(int i=0;i<strlen(a)-1;i++)
	{
		for(int j=i+1;j<strlen(a);j++)
		{
			if(a[i]>a[j])
			{
				num++;
			}
		}
	}
	return num;
} 

void sort(char a[][20],int max)
{
	char b[20];
	for(int i=0;i<max-1;i++)
	{
		for(int j=0;j<max-1-i;j++)
		{
			if(getRev(a[j])>getRev(a[j+1]))
			{
				strcpy(b,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],b);
			}
		}
	}
}

int main()
{
	int max;
	cin>>max;
	cin.get();
	char (*a)[20]=new char[max][20];
	for(int i=0;i<max;i++)
	{
		cin.getline(a[i],20);
	}
	cout<<"按逆序数升序输出结果为："<<endl;
	sort(a,max);
	for(int j=0;j<max;j++)
	{
		for(int k=0;k<strlen(a[j]);k++)
		{
			cout<<a[j][k];
		}
		cout<<" 逆序数为："<<getRev(a[j])<<endl;
	}
	return 0;
}

