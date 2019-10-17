using namespace std;
#include <iostream>
int main (void)
{
	int count=0;
	char b=0;
	do
	{
		b=cin.get();
		if(b>='A'&&b<='Z'||b>='a'&&b<='z'||b>='0'&&b<='9')
		   count++;
	}
	while(b!='\n');
	cout<<"count="<<count<<endl;
	return 0;
}
