#include<iostream>
using namespace std;
int getWordCount(char a[])
{
	int flag=0,count=0;
	for(int i=0;a[i];i++)
	{
		if(a[i]==' '&&flag==0)
		count++;
		if(a[i]==' ')
		flag=1;
		else
		flag=0;
	}
	return count;
}
int main()
{
	char a[100];
	cin.getline(a,100);
	cout<<getWordCount(a)<<endl;
}
