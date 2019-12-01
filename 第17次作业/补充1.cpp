#include <iostream>
using namespace std;

void Lower(char *ch)
{	
	for(int i=0;ch[i];i++)
	{
		if(ch[i]>='A'&&ch[i]<='Z')
		   ch[i]=ch[i]+('a'-'A');
	}
} 

int main()
{
	char a[100];
	cin.getline(a,100);
	Lower(a);
	cout<<a;
}
