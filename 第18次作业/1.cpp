#include<iostream>
using namespace std;

void strcat(char *a1,char *a2)
{ char b[100]; int n=0,*i=&n;
  for(;*a1!=0;a1++,*i++) b[i]=*a1;
  for(;*a2!='\0';a2++,*i++) b[i]=*a2;
  b[i]=0;
  while(b[i]!=0) cout<<b[i++];
}
int main()
{
	char a[20],b[20];	
	cin.getline(a,20);
	cin.getline(b,20);
	strcat(a,b);
}
