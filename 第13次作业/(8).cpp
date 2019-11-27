#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char a[])
{
	int i,length=strlen(a),count=0;
	for(i=0;i<length;i++)
	{
      //if(((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))&&(a[i+1]=='\t'||a[i+1]==' '))
	  if((a[i]!='\t')&&(a[i]!=' ')&&(a[i+1]=='\t'||a[i+1]==' '))
	  count++;
    }
	return count+1;
}

int main(void)
{
	char a[100]={0};
	int i;
	cin.getline(a,100);
	cout<<"单词个数为"<<getWordCount(a)<<endl;
}

