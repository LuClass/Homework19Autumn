#include<iostream>
using namespace std;

void strcat(char *a,char *b)
{int i,j;
for(i=0;a[i]!='\0';i++)
 a[i]=a[i];
 for(j=0;b[j]!='\0';j++)
 a[i+j]=b[j];
 a[i+j]='\0';
if(i+j>=50)
a[50]='\0';
}
int main()
{char a[50],b[50];
cin.getline(a,50);
cin.getline(b,50);
strcat(a,b);
cout<<a;
return 0;
}
