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

void strcat(char*s1,char*s2)
{
	int n1=length(s1);
	int n2=length(s2);
	int i=n1;
	for(;i<20&&s2[i-n1]!=0;i++)
	{
		s1[i]=s2[i-n1];
	}
	s1[i]=0;
	
}

int main()
{
	char s1[20];
	char s2[20];
	cin.getline(s1,20);
	cin.getline (s2,20);
	strcat(s1,s2);
	cout<<s1;
}













