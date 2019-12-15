#include<iostream>
#include<cstring>
using namespace std;

//#define MAX 4

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

int main()
{
	
	int max;
	cin >> max;
	char(*s)[21] = new char[max][21];
	cin.get();	//
	for (int i = 0; i < max; i++)
		cin.getline(s[i], 20);
	char temp[21];
	for (int i = 0; i < max - 1; i++)
	{
		for (int j = 0; j < max - 1 - i; j++)
		{
			if (getRev(s[j]) > getRev(s[j + 1]))
			{
				strcpy(temp, s[j]);	//
				strcpy(s[j], s[j + 1]);
				strcpy(s[j + 1], temp);
			}
		}
	}
	for (int i = 0; i < max; i++)
		cout << s[i] << " (" << getRev(s[i]) << ") " << endl;
	delete[]s;
	return 0;
}