#include<iostream>
using namespace std;

void change(char *p)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]>='A'&&p[i]<='Z')
		p[i]+=32;
	}
}

int main()
{
	char *p;
	cin.getline(p,100);
	change(p);
	for(int i=0;p[i];i++)
	cout<<p[i];
}


