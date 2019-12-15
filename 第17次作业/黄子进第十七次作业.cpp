#include<iostream>
#include<string.h>
using namespace std;
int main(int argc,char *argv[])
{
	char *temp;
	for(int i = 1;i<argc;i++)
	{
		for(int a = 1;a<argc-i-1;a++)
		if(strcmp(argv[a],argv[a+1])>0)
		{
			temp = argv[a];
			argv[a] = argv[a+1];
			argv[a+1] = temp;
		}
		
	}
	for(int a=1;a<argc;a++)
	cout<<argv[a]<<endl;
}
