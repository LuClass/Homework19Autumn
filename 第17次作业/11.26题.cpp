using namespace std;
#include <iostream>
#include <string.h>
#include <stdlib.h>
void lowercase(char *str)
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
	int i,j;
	cout<<"ÇëÊäÈë×Ö·û´®¸öÊý£º"<<endl; 
	(cin>>n).get();
	char *s[50];
	for(i=0;i<n;i++)
	{
		s[i]=(char*)malloc(sizeof(char)*50);
		cin.getline(s[i],50);
	}
	for(j=0;j<n;j++)
	{
		lowercase(s[j]);
	}
	bubblesort(s,n);
	for(int k=0;k<n;k++)
	{
		cout<<s[k]<<endl;
	}  
	return 0;
}
