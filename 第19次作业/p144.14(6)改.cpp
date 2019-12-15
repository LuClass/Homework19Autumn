#include <iostream>
using namespace std;
int getWordCount (char* a)
{
	int num=0;
	for (int i=0;*(a+i);i++)
		if (*(a+i)!=' ')
		{
			for (int j=i;*(a+j)!=' ';j++,i++);
			num++;
		}
		return num;
}
int main ( )
{
	char a[100];
	cin.getline(a,100);
	cout<<getWordCount(a)<<endl;
	return 0;
}
