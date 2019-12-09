using namespace std;
#include <stdlib.h>
#include <iostream>
#include <string.h>
struct Row{
	int num;
	char *str;
};
void del(Row *tb,int MAX)
{
	for(int i=0;i<MAX;i++)
    {
    	delete []tb[i].str;
	}
	delete []tb;
}
void getRev(Row*s1,int n)
{
	int count,b,i,j,x;
	char*y;
	for(i=0;i<n;i++)
	{
		char *st=s1[i].str;
		count=0;
		b=strlen(st);
		for(j=0;j<b-1;j++)
		{
			for(int k=j+1;k<b;k++)
			{
				if(st[j]>st[k])
				{
					count++;
				}
			}
		}
		s1[i].num=count;
	}
    int l,m;
	for(l=0;l<n-1;l++)
	{
		for(m=0;m<n-1-l;m++)
		{
			if(s1[m].num>s1[m+1].num)
			{
				x=s1[m].num;
				s1[m].num=s1[m+1].num;
				s1[m+1].num=x;
				y=s1[m].str;
				s1[m].str=s1[m+1].str;
				s1[m+1].str=y;
			}
		}
	}
}
int main()
{
	int max,i,j;
	cin>>max;
	Row *table =new Row[max]; 
	for(int i=0;i<max;i++)
	{
		table[i].str=new char[20];	
		cin>>table[i].str;
	}
    getRev(table,max);
    for(int i=0;i<max;i++)		
 	cout<<table[i].str<<":"<<table[i].num<<endl;
	del(table,max);	
    return 0;
}
