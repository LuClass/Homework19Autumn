#include<iostream>
#include<cstring>
using namespace std;

#define MAX 3

//(6)
int getRev(char a[])
{
	int s = 0;
	int length = strlen(a);
	for (int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (a[i] > a[j])
				s++;
		}
	}
	return s;
}

//(8)
bool isLetter(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return true;
	return false;
}

int getWordCount(char a[])
{
	int sum = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		if (isLetter(a[i]) && !isLetter(a[i + 1]))
			sum++;
	}
	return sum;
}

int main()
{
	//(6)
	char a[MAX][21] = { "DAABEC","ABC","IGJHVFY" };
	char temp[21];
	for (int i = 0; i < MAX - 1; i++)
	{
		for (int j = 0; j < MAX - 1 - i; j++)
		{
			if (getRev(a[j]) > getRev(a[j + 1]))
			{
				strcpy(temp, a[j]);
				strcpy(a[j], a[j + 1]);
				strcpy(a[j + 1], temp);
			}
		}
	}
	cout << a[0] << "(" << getRev(a[0]) << ")" << "  " << a[1] << "(" << getRev(a[1]) << ")" << "  " << a[2] << "(" << getRev(a[2]) << ")" << endl;
	cout << endl;

	//(8)
	char b[50] = "This is a CPP program";
	cout << getWordCount(b) << endl;
	
	return 0;
}
