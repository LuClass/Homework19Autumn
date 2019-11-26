#include<iostream>
using namespace std;
int main()
{int n,s;
cout<<"please input a number:";
cin>>n;
int m=n,t,i=0;
    while(m!=0)
	{i++;
	m/=10;}
int a[i];
m=n;
for(int k=0;k<i;k++)
{    t=m%10;
	 m/=10;
	 a[k]=t; 
}
for(s=0;s<=i/2;s++)
{if(a[s]!=a[i-s-1]){
cout<<"不是回文数";
break; }}
if(s>i/2)
cout<<"是回文数"; 
} 

