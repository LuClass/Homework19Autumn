#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char k[100],pa[100][100];
	int count=0,j=0,s=0,i;
	cin.getline(k,100);
	int n=strlen(k);
	int b[n];
	for(i=0;i<n;i++)
    {
    	count=0;
    	while((k[i]>='0')&&(k[i]<='9'))
    	{
		  count=1;pa[j][s]=k[i];
		  s++;
		}
		if(count)
		{
			pa[j][s]=' ';s++;j++;count=0;
		}
	}
	for(i=0;i<j;i++)
	cout<<pa[i];
}

