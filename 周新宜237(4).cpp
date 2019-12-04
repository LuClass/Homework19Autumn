using namespace std;
#include <iostream>
#include <string.h>
#include <iomanip>
void sort(char* ch[],int n)
 {
 	char* t;
 	for (int j=0;j<=n;j++)
 	{
        if (strcmp(ch[j],ch[j+1])>0)
 			{
 				t=ch[j];
 				ch[j]=ch[j+1];
 				ch[j+1]=t;
 			}
 	}
 }
void count(char* ch[],int n)
 {
 	char temp[10][20];
 	int num[10],key=1,x=0,xx=0;
 	for (int i=0;i<n;i++)
 	{
 		for (int j=0;j<i;j++)
 		{
 			if (!strcmp(ch[j],ch[i]))
 			{
 				key=0;
 				break;
 			}
 		}
 		if (key==1)
 			strcpy(temp[x++],ch[i]);
 		key=1;
 	}
 	for (int y=0;y<x;y++)
 	{
 		int nn=0;
 		for (int yy=0;yy<n;yy++)
 		{
 			if (!strcmp(temp[y],ch[yy]))
 				nn++;
 		}
 		num[xx++]=nn;
 	}
 	for (int u=0;u<x;u++)
 	{
 		cout<<setw(20)<<temp[u]<<"   "<<num[u]<<endl;
 	}
 }
int main()
 {
 	int n;
 	cin>>n;cin.get();
 	char s[10][20];
 	char *p[]={s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7],s[8],s[9]};
 	for(int i=0;i<n;i++)
 	{
 		cin.getline(s[i],20);
 	}
 	sort(p,n);
 	for(int i=0;i<=n;i++)
 	{
 		cout<<p[i]<<endl;
	}
	count(p,n);
	return 0;
}
