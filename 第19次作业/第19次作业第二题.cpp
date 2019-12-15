#include <iostream>
using namespace std;
char * skip(char *s1)
{
	char *s2=s1;
	while((*s1>=97&&*s1<=122)||(*s1>=65&&*s1<=90))
	{
	s1++;s2++;
	}
	return s2;
}
int count(char *s1)
{
	int count=0;
	while(*s1!=0)
	{
		if((*s1>=97&&*s1<=122)||(*s1>=65&&*s1<=90))
		{count++;
		char *s3=skip(s1);
		s1=s3;
		}
		else 
		s1++;
} 
return count;
}
 int main()
{
 	char a[100],*s=&a[0];
 	cin.getline(a,100);
 	cout<<count(s);
 
}
