using namespace std;
#include <iostream>
int strLength(char *s1)
{
	if(s1==NULL)
	{
		return 0;
	}
	char *s2;
	s2=s1;
	while(*s1!=0)
	{
		s1++; 
	}
	return s1-s2;
}
void strCat(char *s1,char *s2,int n)
{
	while(*s1!=0)
	{
		s1++;
	}
	int i=0;
	while(i<n-1&&*s2!=0)
	{
		*s1=*s2;
		s1++;
		s2++;
		i++;
	}
	*s1=0;
}
int main()
{
	char *s1;
	char *s2;
	cin.getline(s1,50); 
	cin.getline(s2,10);
	int a=strLength(s1);
	int n;
	n=49-a;
	strCat(s1,s2,n);
	cout<<s1;
	return 0;
}
