using namespace std;
#include<iostream>
int length(const char*s)
{
	if(s==NULL)
	return -1;
	const char*s1=s;
	while(*s!=0)
	s++;
	return s-s1;
}
char* a(char*s)
{
	
	for(int i=0;i<length(s);i++)
	while(s[i]==' ')
	{
		for(int j=i;j<length(s);j++)
		{
			s[j]=s[j+1];
		}
	}
	return s;
}


int main()
{
	char s1[20];
	cin.getline(s1,20);

	cout<<a(s1);
}


