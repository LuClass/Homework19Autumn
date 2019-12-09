#include<iostream>
#include<string.h>
using namespace std;



int main(void)
{
	int max,len,n=0;
	cin>>max;
	char (*ch)[20]=new char[max][20];
	int *num=new int[max];
	cin.get();
	for(int x=0;x<max;x++)
	{
		cin.getline(ch[x],20);
		len=strlen(ch[x]);
		for(int i=0;i<len-1;i++)
		{
			for(int j=i+1;j<len;j++)
			{
				if(ch[x][i]>ch[x][j])
					n++;	
			}
		}
		num[x]=n;
		n=0;
	}
	char tem1[20];
	int tem2;
	for(int i=0;i<max-1;i++)
	{
		for(int j=0;j<max-1-i;j++)
		{
			if(num[j]>num[j+1])
			{
				strcpy(tem1,ch[j]);
				strcpy(ch[j],ch[j+1]);
				strcpy(ch[j+1],tem1);
				tem2=num[j];
				num[j]=num[j+1];
				num[j+1]=tem2;
			}
		}
	}
	for(int z=0;z<max;z++)
	{
		cout<<ch[z]<<"  "<<num[z]<<endl;
	}
	delete []ch;
	delete []num;
	return 0;
}
