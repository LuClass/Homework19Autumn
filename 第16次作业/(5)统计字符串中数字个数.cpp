#include<iostream>
#include <string.h> 
using namespace std;
int main()
{
    int a[50],sum=0,i,j=0;
    char str[100];
    cin.getline(str,100);
    int n=strlen(str);
    for(i=0;i<=n;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
            sum=sum*10+str[i]-48;  //原来字符转成数字,并变成一个整数 
        else
        {
            if(sum)
			{
				a[j++]=sum;
			}
			sum=0;
        }
    }
    for(int k=0;k<j;k++)
	{
		cout<<a[k]<<endl;
	}
	cout<<j;
    return 0;
}

