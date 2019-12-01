#include<iostream>
 #include<string.h>
 #include<iomanip>
 using namespace std;

 void bulubulu(char* ch[],int n)
 {
 	char temp[20];
 	char* t;
 	for (int i=0;i<n-1;i++)
 	{
 		for (int j=0;j<n-1-i;j++)
 		{
 			if (strcmp(ch[j],ch[j+1])>0)
 			{
 				t=ch[j];
 				ch[j]=ch[j+1];
 				ch[j+1]=t;
 			}
 		}
 	}
 }

 void paixu(char* ch[],int n)
 {
 	char temp[10][20];
 	int num[10],cmp=1,x=0,y=0;
 	for (int i=0;i<n;i++)
 	{
 		for (int j=0;j<i;j++)
 		{
 			if (strcmp(ch[j],ch[i])==0)
 			{
 				cmp=0;
 				break;
 			}
 		}
 		if (cmp==1)
 			strcpy(temp[x++],ch[i]);
 		cmp=1;
 	}
 	for (int p=0;p<x;p++)
 	{
 		int q=0;
 		for (int k=0;k<n;k++)
 		{
 			if (!strcmp(temp[p],ch[k]))
 				q++;
 		}
 		num[y++]=q;
 	}
 	int temp1;
 	char temp2[10][20];
 	for(int ii=0;ii<x-1;ii++)
 	{
 		for(int jj=0;jj<x-ii-1;jj++)
 		{
 			if(num[jj]>num[jj+1])
 			{temp1=num[jj];
 			num[jj]=num[jj+1];
 			num[jj+1]=temp1;
 			strcpy(temp2[0],temp[jj]);
 			strcpy(temp[jj],temp[jj+1]);
 			strcpy(temp[jj+1],temp2[0]);
 			}
 		}
 		
 		
 	}
 	
 	
 	for (int u=x-1;u>=0;u--)
 	{
 		cout<<setw(20)<<temp[u]<<"   "<<num[u]<<endl;
 	}
 }

 int main(void)
 {
 	char c[10][20];
 	char* ch[]={c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8],c[9]};
 	int n;
 	cin>>n;
 	cin.getline(c[9],20);
 	for (int x=0;x<n;x++)
 	{
 		cin.getline(c[x],20);
 	}
 	bulubulu(ch,n);
 	cout<<endl<<endl;
 	for (int x=0;x<n;x++)
 	{
 		cout<<ch[x]<<endl;
 	}
 	cout<<endl<<endl;
 	paixu(ch,n);
 	return 0;
 } 
