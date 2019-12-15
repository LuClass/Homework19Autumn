using namespace std;
#include <iostream>
#include <string.h>
void getRev(char *s1[],int s2[],int n)
{
	int count,b;
	for(int i=0;i<n;i++)
	{
		char *s3=s1[i];
		count=0;
		b=strlen(s3);
		for(int j=0;j<b-1;j++)
		{
			for(int k=j+1;k<b;k++)
			{
				if(s3[j]>s3[k])
				{
					count++;
				}
			}
		}
		s2[i]=count;
	}
	char *temp2;
	int temp1;
	for(int l=0;l<n-1;l++)
	{
		for(int m=0;m<n-1-l;m++)
		{
			if(s2[m]>s2[m+1])
			{
				temp1=s2[m];
				s2[m]=s2[m+1];
				s2[m+1]=temp1;
				temp2=s1[m];
				s1[m]=s1[m+1];
				s1[m+1]=temp2;
			}
		}
	}
}
int main()
{
	int max;
	(cin>>max).get();
	char** str=new char*[max];  //开个指针的数组 
	for(int k=0;k<max;k++)
	{
		str[k]=new char[21]; //每个指针的元素指向new出来的数组 
	}
	int *res=new int[max];
	for(int i=0;i<max;i++)
	{
		cin.getline(str[i],20);
    }
    getRev(str,res,max);
    for(int j=0;j<max;j++)
    {
    	cout<<str[j]<<":"<<res[j]<<endl;
	}

	delete []*str;
	delete res;
    return 0;
}
