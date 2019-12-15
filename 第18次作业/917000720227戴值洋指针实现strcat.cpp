#include <iostream>
using namespace std;
int main()
{
	char s1[50];
	char s2[50];
	cin.getline(s1,50);
	cin.getline(s2,50);
	char *p;
	p=s2;
	int i=0;
	while(s1[i]!='\0')
	{
		i++;
	}
	for(;*p!='\0';p++)
	{
		s1[i]=*p;
		i++;
	}
	cout<<s1;
	return 0;
}

