#include<iostream>
#include<string.h>
using namespace std;
bool daxie(char a){
if((a>=65)&&(a<=90))
return 1;
else
return 0;	
}
void change(char*a)
{int i;
for(i=0;i<strlen(a);i++)
{if(daxie(a[i])==1)
a[i]=a[i]+32;	
	}	
	
	
	
	
}






int main(){int i;
	char *a;
	cin.getline(a,100);
	change(a);
cout<<a;	
	
}
