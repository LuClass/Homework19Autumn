#include<iostream>
using namespace std;
int getWordCount(char *a)
{
	int count=0;
	for(;*a;a++)
	{
	  if((*a!='\t')&&(*a!=' ')&&(*(a+1)=='\t'||*(a+1)==' '))
	  count++;
    }
	return count+1;
}

int main(void)
{
	char a[100]={0};
	cin.getline(a,100);
	cout<<"单词个数为"<<getWordCount(a)<<endl;
}

