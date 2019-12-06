#include<iostream>
using namespace std;

bool isLetter(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return true;
	return false;
}

int getWordCount(char* s)
{
	int sum = 0;
	while (*s)
	{
		if (isLetter(*s) && !isLetter(*(s + 1)))
			sum++;
		s++;
	}
	return sum;
}

int main()
{
	char s[20];
	cin.getline(s, 20);
	cout << getWordCount(s) << endl;
	return 0;
}