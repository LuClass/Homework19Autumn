#include<string.h>
#include<iostream>
using namespace std;
void dzhuanx(char*a,int n)
{for(int i=0;i<=strlen(a);i++)
  {if(*a>='A'&&*a<='Z')
  *a=*a+'a'-'A';
  a++;
  }
} 
int main()
{char a[50];
cin.getline(a,50);
dzhuanx(a,50);
cout<<a;
return  0;
}
