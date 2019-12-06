#include <iostream>
#include<string.h>
using namespace std;

char * trim(char *s)
{
	char *t = strlen(s) + s - 1;
	while (*t == ' ')
	{
		t--;
	}
	*(t+1) = '\0';
	t = t - 1;
	char *x;
	for (; t >= s; t--)
	{
		if (*t == ' ')
		{
			x = t;
			for (; *(x+1)!='\0'; x++)
			{
				*x = *(x+1);


			}
			*x = '\0';
		}


	}

	return s;

}
int main()
{
	char a[20];
	cin.getline(a, 20);
	cout << trim(a);
}
