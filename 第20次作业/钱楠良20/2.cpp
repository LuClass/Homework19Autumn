
 #include <iostream>
 #include <string.h>
 using namespace std;

 struct Row{
 	int num;
 	char *str;
 };

 void sort(Row *tb,int n)
 {
 	char *temp;
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n-i-1;j++)
 		{
 			if(strcmp(tb[j].str,tb[j+1].str)>0)
 			{
 				temp=tb[j].str;
 				tb[j].str=tb[j+1].str;
 				tb[j+1].str=temp;
 			}
 		}
 	}
 }

 void Count(Row *tb,int n)
 {
 	int temp;
 	char *tem;
 	for(int i=0;i<n;i++)
 	{
 		tb[i].num=0;
 	}
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		{
 			if(strcmp(tb[i].str,tb[j].str)==0)
 			{
 				tb[i].num++;
 			}
 		}
 	}
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n-i-1;j++)
 		{
 			if(tb[j].num<tb[j+1].num)
 			{
 				temp=tb[j].num;
 				tb[j].num=tb[j+1].num;
 				tb[j+1].num=temp;	
 				tem=tb[j].str;
 				tb[j].str=tb[j+1].str;
 				tb[j+1].str=tem;
 			}
 		}
 	}
 	for(int i=0;i<n;i++)
 	    cout<<tb[i].str<<":"<<tb[i].num<<endl;	
 }

 void del(Row *a,int n)
 {
 	for(int i=0;i<n;i++)
     {
     	delete []a[i].str;
 	}
 	delete []a;
 }

 int main()
 {
 	int n;
 	cin>>n;
 	Row *table=new Row[n];
 	for(int i=0;i<n;i++)
 	{
 		table[i].str=new char[20];
 		cin>>table[i].str;
 	}
 	sort(table,n);
 	for(int i=0;i<n;i++)
 	{
 		cout<<table[i].str<<endl;
 	} 
 	Count(table,n);
 	del(table,n);   
 }