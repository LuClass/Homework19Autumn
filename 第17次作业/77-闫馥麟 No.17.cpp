//QQ群内作业第1题
#include<iostream>
using namespace std;

int getlength(char *d)
{
	int len=0,i=0;
	while(*(d+i))
	{
		len++;
		i++;
	}
	return len;
}

void convert(char *d,int n)
{
	for (int i=0;i<n;i++)
	{
		if (*(d+i)>='A'&&*(d+i)<='Z')
		*(d+i)=char(int(*(d+i))+32);
	}
}

int main()
{
	char d[100];
	cin.getline(d,100);
	int len=getlength(d);
	convert(d,len);
	for (int k=0;k<len;k++)
	cout<<*(d+k);
	return 0;
}


//QQ群内作业第2题
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
