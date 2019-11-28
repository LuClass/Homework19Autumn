using namespace std;
#include<iostream>
#include<string.h>
int main(int argc,char*argv[])
{
	char *temp[1];
	for(int i=0;i<argc-1;i++)
	for(int j=0;j<argc-1-i;j++)
	if(strcmp(argv[j],argv[j+1])==1)
	{
		strcpy(temp[0],argv[j]);
		strcpy(argv[j],argv[j+1]);
		strcpy(argv[j+1],temp[0]);
	}
	for(int k=0;k<argc;k++)
	cout<<argv[k];
}
