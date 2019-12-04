#include <iostream>
using namespace std;

int getWordCount(char *a)
{
	int count=0;
	bool word=false;
	for(;*a;a++)
	{
		if((*a>='a'&&*a<='z')||(*a>='A'&&*a<='Z'))
		{
			if(word==false)
			{
				word=true;
				count++;
			}
		}
		else if(word)
 		word=false;
	}
	return count;
}

int main()
{
	char a[100];
	cin.getline(a,100);
 	cout << getWordCount(a);
}
