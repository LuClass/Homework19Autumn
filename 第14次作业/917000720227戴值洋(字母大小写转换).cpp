#include <iostream>
using namespace std;
int main()
{
	char s[51];
	cin.getline(s,51);
	cout<<"修改之前："<<s<<endl; 
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		s[i]='a'-'A'+s[i];
	}
	cout<<"修改之后："<<s;
	return 0;
}


