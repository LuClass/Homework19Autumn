#include <iostream>
using namespace std;
char * skip(char *s1)
{
	char *s3=s1;
	while((*s1>=97&&*s1<=122)||(*s1>=65&&*s1<=90))
	{
	s1++;s3++;
	}
	return s3;
}
int getWordCount(char *s1)
{
	int count=0;
	while(*s1!=0)
	{
		if((*s1>=97&&*s1<=122)||(*s1>=65&&*s1<=90))
		{count++;
		char *s4=skip(s1);
		s1=s4;
		}
		else 
		s1++;
} 
return count;
}
 int main()
{
 	char a[100],*s2=&a[0];
 	cin.getline(a,100);
 	int d=getWordCount(s2);
 	cout<<d;
}
