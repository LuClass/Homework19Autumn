#include<iostream>
#include<string.h>
using namespace std;


int main(int argc,char *argv[])
{
	char temp[100];
	for(int i=0;i<(argc-1);i++)
	{
		for(int j=0;j<(argc-1-i);j++)
		{
			if(strcmp(argv[j],argv[j+1])>0)
			{
				strcpy(temp,argv[j]);
				strcpy(argv[j],argv[j+1]);
				strcpy(argv[j+1],temp);
			}
		}
	}
	for(int k=1;k<argc;k++)
		cout<<k<<"  "<<argv[k]<<endl;
	return 0;
}
