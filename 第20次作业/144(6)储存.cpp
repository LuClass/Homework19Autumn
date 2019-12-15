#include <iostream>
#include <string.h>
using namespace std;

struct Row{
	int num;
	char *str;
};

int getRev(char a[])
{
	int num=0;
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
	    for(int j=i+1;j<len;j++)	
	        if(a[i]>a[j])
	        num++;
	}
	return num;
}

void del(Row *tb,int MAX)
{
	for(int i=0;i<MAX;i++)
    {
    	delete []tb[i].str;
	}
	delete []tb;
}

int main()
{
	int MAX,temp;
	cin>>MAX;
	Row *table =new Row[MAX];
	for(int i=0;i<MAX;i++)
	{
		table[i].str=new char[20];	
		cin>>table[i].str;
		table[i].num=getRev(table[i].str);
	}
	for(int i = 0;i<MAX-1;i++)	
 		for(int j = 0;j< MAX - 1 - i;j++)
 			if(table[j+1].num<table[j].num)		 
 			{
 				temp = table[j].num;
 				table[j].num=table[j+1].num;
 				table[j+1].num=temp;
 				char str1[20];
				strcpy(str1,table[j].str);
 				strcpy(table[j].str,table[j+1].str);
 				strcpy(table[j+1].str,str1);  
			}
 	for(int i=0;i<MAX;i++)		
 	cout<<table[i].str<<":"<<table[i].num<<endl;
	del(table,MAX);	
}
