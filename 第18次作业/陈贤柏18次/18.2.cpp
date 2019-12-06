#include<iostream>
#include<string.h>
using namespace std;
char* trim(char* s)
{
	char* s1 = s;
	while (*s1)
	{
		if (*s1 == ' ')
		{
			int i = 1;
			while(*(s1 + i))
			{
				if (*(s1 + i) != ' ')
				{
					*s1 = *(s1 + i);
					*(s1 + i) = ' ';
					break;
				}
				i++;
			}
		}
		s1++;
	}
	char* tail = s1 - 1;
	while (*tail == ' ')
		tail--;
	if (tail < s + strlen(s) - 1)
		* (tail + 1) = '\0';
	return s;
}
int main()
{
	char s[] = "   T his I sA   Test Str ing  ";
	cout << "before:" << s << endl;
	char* s1 = trim(s);
	cout << "after:" << s1 << endl;
	return 0;
}
