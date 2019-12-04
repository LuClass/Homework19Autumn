#include <iostream>
using namespace std;
void f(char *p)
{
	int i;
	for(i=0;*(p+i)!=0;i++)
	{
		if(*(p+i)>='A'&&*(p+i)<='Z')
		*(p+i)=*(p+i)+32;
	}
	cout<<p<<" ";
}
int main(int argc,char *argv[])
{
	char *p;
	int i;
	for(i=1;i<argc;i++)
	{
	p=argv[i];
    f(p);
	}
	return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
int main(int argc , char *argv[])
{
 	char temp[20];
 	for(int i=0;i<argc-1;i++)
 		for(int j=0;j<argc-1-i;j++)
 		{
 			if(strcmp(argv[j],argv[j+1])>0)
 			{
 				strcpy(temp,argv[j]);
 				strcpy(argv[j],argv[j+1]);
 				strcpy(argv[j+1],temp);
 			}
 		}
 	for(int k=1;k<argc;k++)
 	{
 		cout<<argv[k]<<" ";
 	}
 	return 0;
}
