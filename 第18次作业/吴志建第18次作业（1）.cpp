#include<iostream>
using namespace std;
char* connect(char* s1, char* s2)
{
	if(s1 == NULL || s2 == NULL)
		return NULL;
	char* s3 = s1;
	while(*s3 != '\0')
		s3++;
	while(*s2)
	{
		*s3 = *s2;
		s2++;
		s3++;
	}
	return s1;
}
int main()
{
	char s1[] = "This is a ", s2[] = "test String.";
	char*s3 = connect(s1, s2);
	cout << s3 << endl;
	return 0;
}
