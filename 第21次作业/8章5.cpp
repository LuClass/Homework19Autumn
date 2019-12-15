#include<iostream>
using namespace std;
int main()
{
	char str[100],*p=str;
    int i,k=0,key=0,sum,a[100]={0};
	cin.getline(str,101);
	for(i=0;*(p+i)!='\0';i++)
	{ 
		if((*(p+i)>='0')&&(*(p+i)<='9'))
		{
			sum=k+1;
			a[k]=a[k]*10+*(p+i)-'0';
			key=1;
		}
		else if(key)
		{
   			a[++k]=0;
			key=0;
		}
	}
	for(i=0;i<sum;i++)
	cout << a[i]<<endl;
	cout << sum<<endl;	
	return 0;	
}
