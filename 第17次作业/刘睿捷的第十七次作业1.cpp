#include<iostream>
#include<string.h>
using namespace std;

void bts(char* ch,int n)
{
	int l=strlen(ch);
	for(int x=0;x<l;x++)
	{
		if(*ch>='A'&&*ch<='Z')
			*ch=*ch+32;
		ch++;
	}
	
}

int main(void)
{
	char ch[20];
	cout<<"please input a string(len<=20):"<<endl;
	cin.getline(ch,20);
	bts(ch,20);
	cout<<ch;
	return 0;
}
