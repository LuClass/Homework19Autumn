#include<iostream>
using namespace std;

int strcat(char *to,char *from)
{
	int i=0;
	while(*to)
	{
		to++;
	}
	while(*from)
	{
		*to++=*from++;
	}
	*to=0;
}
int main()
{
	char to[100],from[100];
	cin.getline(to,100);
    cin.getline(from,100);
    strcat(to,from);
    cout<<to;
}
