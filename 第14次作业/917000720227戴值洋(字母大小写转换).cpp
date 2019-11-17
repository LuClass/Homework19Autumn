#include <iostream>
using namespace std;
#include <string.h>
int main()
{
	char s[100];
	cin.getline(s,100);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		s[i]='a'-'A'+s[i];
	}
	cout<<s;
	return 0;
}

