#include<iostream>
using namespace std;

//(1)
void toLower(char* s)
{
	while (*s)
	{
		if (isupper(*s))
			* s = tolower(*s);
		s++;
	}
}
int main()
{
	char test[] = "This IS A teSt StrIng";
	char* s = test;
	cout << "Ç°£º" << test << endl;
	toLower(s);
	cout << "ºó£º" << test << endl;
	return 0;
}

//(2)
int main(int argc, char* argv[])
{
	char* temp;
	int len = argc - 1;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
		}
	}
	return 0;
} 
