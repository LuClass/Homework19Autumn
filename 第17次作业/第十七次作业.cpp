using namespace std;
#include <iostream>
#include <string.h>
#include <stdlib.h>
void transform(char * str)
{
	while(*str!=0)
	{ 
		if((*str)>='A'&&(*str)<='Z')
	    {
		    *str=*str+32;
	    }
	    str++;	
	}
}
void bubblesort(char *str[],int n)
{
	char *temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(strcmp(str[j],str[j+1])>0)
			{
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	char *s[20];
	for(int i=0;i<n;i++)
	{
		cin.get();
		s[i]=(char*)malloc(sizeof(char)*21);
		cin.getline(s[i],20);
	}
	for(int j=0;j<n;j++)
	{
		transform(s[j]);
	}
	bubblesort(s,n);
	for(int k=0;k<n;k++)
	{
		cout<<s[k]<<endl;
	}  
	return 0;
}
