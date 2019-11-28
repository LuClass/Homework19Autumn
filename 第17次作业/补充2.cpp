#include <iostream>
#include <string.h>
using namespace std;
int main(int argc,char *argv[])
{
	char *temp;
	for(int i=0;i<argc;i++)
	{
		for(int j=0;j<argc-i-1;j++)
		{
			if(strcmp(argv[j],argv[j+1])>0)
			{
				temp=argv[j];
				argv[j]=argv[j+1];
				argv[j+1]=temp;
			}
		}
	}
	for(int j=0;j<argc;j++)
	    cout<<argv[j]<<endl;
} 
