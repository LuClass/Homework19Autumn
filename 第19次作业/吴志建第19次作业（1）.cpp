#include<iostream>
using namespace std;

#define MAX 4

int getRev(char* a)
{
	int s = 0;
	char* b = a;
	for (int i = 0; i < strlen(a); i++)
	{
		for (int j = i + 1; j < strlen(b); j++)
		{
			if (*(a + i) > * (b + j))
				s++;
		}
	}
	return s;
}

void display(char* s[])
{
	char* temp = s[0];
	for (int i = 0; i < MAX - 1; i++)
	{
		for (int j = 0; j < MAX - 1 - i; j++)
		{
			if (getRev(s[j]) > getRev(s[j + 1]))
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < MAX; i++)
		cout << s[i] << " (" << getRev(s[i]) << ") " << endl;
}

int main()
{
	char s[MAX][21] = { "DAABEC","ABC","IGJHVFY","AJNKIO" };
	char* a[] = { s[0],s[1],s[2],s[3] };
	display(a);
	return 0;
}