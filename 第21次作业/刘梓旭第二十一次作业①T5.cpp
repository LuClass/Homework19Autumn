#include<string.h>
#include<iostream>
using namespace std;
int b[50];
void cunfang(char*a,int n)
 {int number=0;
 int *num=new int[50];
 for(int x=0;x<50;x++)
 {num[x]=0;
 }
 for(int i=0;i<strlen(a);i++)
  {if(a[i]>='0'&&a[i]<='9')
   {num[number]=num[number]*10+a[i]-48;
   if(a[i+1]<'0'||a[i+1]>'9')
    
	  number++;
   }
   
  }
  number--;
  for(int j=0;j<=number;j++)
    {cout<<num[j]<<" ";
    cout<<endl;}
    cout<<"total number is "<<number+1;
    delete num;
 }
 int main()
 {
 char a[30];
 	cin.get(a,30);
 	cunfang(a,30);
 	return 0;
 }
 

