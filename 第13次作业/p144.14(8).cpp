#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char a[])
{ 
	int n = strlen(a),count = 0;
	bool word = false;
	for(int i = 0;i < n;i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		{
			if(word==false)
			{
				word = true;
				count++;
			}
		}
		else if(word)
		word = false;
	}
	return count;
} 
int main(){
	char a[1000] = {"we		ARE THe chanpion!! !yes"};
	cout << getWordCount(a);
}
