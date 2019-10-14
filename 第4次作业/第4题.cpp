#include<iostream.h>
void main()
{   char a[1000];
    int i,sum=0; 
    cin.get(a,1000);
	for(i=0;a[i];i++)
		if(a[i]>=48&&a[i]<=57)
            sum++;
	cout<<sum;
}