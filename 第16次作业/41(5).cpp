using namespace std;
#include <iostream>
#include <string.h>
#include <stdlib.h>
int main()
{
	char a[50],c[50];
	cin.getline(a,50);
	int b[50];
	int i,j,k,n,x,d,e;
	n=0;
	x=0;
	for(i=0;a[i];)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			j=i+1;
			while(a[j]>='0'&&a[j]<='9')
			{
				j++;
			}
			d=i;
			for(k=0;k<j-d;k++)
		{
			c[k]=a[i];
			i++;
		}
		for(e=0;e<k;e++)
		 x=x*10+(c[e]-'0');
		b[n]=x;
		x=0;
		n++;
		i=j+1;
		}
		else i++;		
	 } 
	 for(i=0;i<n;i++)
	 cout<<b[i]<<" ";
	 return 0;
}
