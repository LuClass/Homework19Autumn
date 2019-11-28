using namespace std;
#include <iostream>
int main()
{
	int count=0;
	char ch=0;
	while(ch!='\n')
	{
		ch=cin.get();
		if(ch>='0'&&ch<='9')
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
