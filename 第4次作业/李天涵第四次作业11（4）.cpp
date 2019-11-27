using namespace std;
#include<iostream>
int main(void)
{
	int count=0;
	char ch;
	do
	{
		ch=cin.get();
		if(ch>='0'&&ch<='9')
		count++;
	}while(ch!='\n');
	cout<<"count="<<count<<endl;
	return 0;
}
