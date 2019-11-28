(4).
#include <iostream>
#include <string.h>
using namespace std;
char Num(char k[5][20]){
	int f[5];
	for(int s=0;s<5;s++)
	{
		f[s]=0;
		for(int e=0;e<s;e++)
		{
			if(strcmp(k[e],k[s])==0)
			{
				s++;
			}
		}
		for(int d=s+1;d<5;d++)
	 {
		if(strcmp(k[s],k[d])==0)
		{
			f[s]++;
 		}
     }	
   cout<<k[s]<<" "<<f[s]<<endl;
    }
    return 0;
}

 int main()
{
	char a[5][20];
for(int m=0;m<5;m++)
    {
	cin.getline(a[m],20);
	}
	Num(a);
	return 0;	
}


(5)
#include <iostream>
using namespace std;
char number(char s[100]){
	int k=0,a,b;
for(int j=0;s[j];j++)
{
  if((s[j]>=48&&s[j]<=57)&&((s[j-1]>=65&&s[j-1]<=122)||s[j-1]==32)){
				k++;
	}			
}
if(s[0]>=48&&s[0]<=57)
   k++;
	cout<<"???????? "<<k<<endl;
}

char ZShu(char s[100]){
	char a[100];
	int k=0;
		for(int j=0;s[j];j++)
		{
			if((s[j]>=48&&s[j]<=57)||s[j]==' ')
				a[k]=s[j];
			else
			    a[k]=' ';
			    k++;
		}
		cout<<"????? ";
		for(int i=0;a[i];i++)		
	      cout<<a[i];
}

int main(){
	int n=0;
	char s[100],a[100];
	cin.getline(s,100);
	number(s);
	ZShu(s);	
}

