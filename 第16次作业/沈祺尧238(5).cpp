#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int sum(char *to,char *from)
{
	int num = 0;
	const int n= (int)from - (int)to;
	for(int i = 0;i<n;i++)
	{
		num += (*(to + i) - '0') * pow(10,n - i -1);
	}
	return num;
}

int main()
{
	char a[100];
	int Int[51],num = 0;
	bool key= false;
	char * pa1=NULL,* pa2=NULL;
	cin.getline(a,100);
	int len=strlen(a);
	for(int i = 0;i<=len;i++)
	{
		if(!key&&a[i]>='0'&&a[i]<='9')
		{
			key= true;
			pa1 = a + i;
		}
		if(key&&(a[i]<'0'||a[i]>'9'))
		{
			key= false;
			pa2 = &a[i];
		}
		if(pa1!=NULL&&pa2!=NULL)
		{
			Int[num] = sum(pa1,pa2);
			num++;
			pa1=NULL,pa2=NULL;
		}
	}
	cout<<num<<endl;
	for(int i = 0;i<num;i++)
		cout<<Int[i]<<' ';
	
}
