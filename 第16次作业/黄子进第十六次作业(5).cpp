#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int sum(const char *pa1,const char *pa2)
{
	int total = 0;
	const int len = (int)pa2 - (int)pa1;
	for(int i = 0;i<len;i++)
		total += (*(pa1 + i) - '0') * pow(10,len - i -1);
	return total;
}
int main()
{
	char a[100];
	int Int[51],num = 0;
	bool isnum = false;
	char * pa1=NULL,* pa2=NULL;
	cin.getline(a,100);
	for(int i = 0;i<=strlen(a);i++)
	{
		if(!isnum&&a[i]>='0'&&a[i]<='9')
		{
			isnum = true;
			pa1 = a + i;
		}
		if(isnum&&(a[i]<'0'||a[i]>'9'))
		{
			isnum = false;
			pa2 = &a[i];
		}
		if(pa1!=NULL&&pa2!=NULL)
		{
			Int[num] = sum(pa1,pa2);
			num++;
			pa1=NULL,pa2=NULL;
		}
	}
	for(int i = 0;i<num;i++)
		cout<<Int[i]<<' ';
	cout<<"\n共有"<<num<<"个数";
}
