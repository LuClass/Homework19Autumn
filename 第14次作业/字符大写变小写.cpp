using namespace std;
#include <iostream>
int main()
{
	char s[50];
	cin.getline(s,50);
	for(int j=0;s[j];j++)
	{
		cout<<s[j];
	}
	cout<<endl;
	for(int i=0;s[i];i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
			cout<<s[i];	
		}
	}
	return 0;
}
