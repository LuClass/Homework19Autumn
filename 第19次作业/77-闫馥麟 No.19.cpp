//第六题

#include <iostream>
#include <string.h>
#define MAX 5
using namespace std;

int getRev (char *pa)
{
	if (pa==NULL)
	return 0;
	else
	{
		int rev=0;
		for (int i=0;*(pa+i);i++)
		{
			for (int j=i+1;*(pa+j);j++)
			{
				if (*(pa+i)>*(pa+j))
				rev++;
			}
		}
		return rev;
	}
}

void setorder(int *b,char a[MAX][100])
{
	int temp1;char temp2[100];

	for (int i=0;i<MAX;i++)
	{
		for (int k=i+1;k<MAX;k++)
		{
			int *t1=b+i,*t2=b+k;
			if (*t1>*t2)
			{
				temp1=*t2;
				*t2=*t1;
				*t1=temp1;
				
				for (int t=0;t<100;t++)
					*(*(a+i)+t)=*(*(a+k)+t);
			}
		}
	}
}

int main()
{
	char a[MAX][100];
	for (int t=0;t<MAX;t++)
	cin.getline(a[t],100);
	int b[MAX]={0};
	for (int p=0;p<MAX;p++)
	*(b+p)=getRev(a[p]);
	setorder(b,a);
	for (int m=0;m<MAX;m++)
		cout<<*(a+m)<<"      "<<*(b+m)<<endl;
	return 0;
}


//第八题

#include <iostream>
using namespace std;

int getlength(char *pa)
{
	if (pa==NULL)
	return 0;
	else
	{
		int length=0;
		while(*pa++)
		length++;
		return length;
	}
}

int getWordCount(char *pa)
{
	char *aa=pa;
	int count=0,len=getlength(aa),stop=0;
	for (int t=0;t<=len;t++)
	{
		if ((int)*(pa+t)>=65&&(int)*(pa+t)<=90||(int)*(pa+t)>=97&&(int)*(pa+t)<=122)
			stop++;
		if (*(pa+t)==' '&&stop!=0||(int)*(pa+t)==0)
		{
			stop=0;
			count++;
		}
	}
	return count;
}

int main()
{
	char a[100];
	cin.getline(a,100);
	cout<<getWordCount(a)<<endl;
	return 0;
} 
