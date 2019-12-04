#include <iostream>
using namespace std;
void transform(char *s1)
{
	while(*s1!=0)
	{
		if(*s1>=65&&*s1<=90)
			*s1=*s1+32;
		s1++;
	}
}
int main()
{
	char a[100],*s1=&a[0];
	cin.getline(a,100);
	transform(s1);
	cout<<a;
}
