using namespace std;
#include <iostream>
#include <string>
int main ()
{
	string str;
	int s=0;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		s++;
	}
	cout<<s<<endl;
	return 0;
} 
