#include<iostream>
#include<string.h>
using namespace std;
struct Str{
	char * s;
	int len;
	int count;
};
int getRev(char * a)
{
	int count=0;
	for(int i=1;a[i];i++)
		for(int j=0;j<i;j++)
			if(a[j]>a[i])
				count++;
	return count;
 }
 int main()
 {
 	int max;
 	cin>>max;
 	cin.get();
 	Str *s1=new Str[max];
 	char *temp2;
 	int temp1;
 	for(int i=0;i<max;i++)
 	{
 		int len=0;
 		cin>>len;
		s1[i].s=new char[len];
		s1[i].len=len;
		for(int j=0;j<len;j++){
			char s2=' ';
			cin>>s2;
			s1[i].s[j]=s2;
		}
 		s1[i].count=getRev(s1[i].s);
	 }
 	for(int i=0;i<max-1;i++)
 		for(int j=0;j<max-1-i;j++)
		 {
		 	if(s1[j].count>s1[j+1].count)
		 	{
		 		temp1=s1[j].count;
		 		s1[j].count=s1[j+1].count;
		 		s1[j+1].count=temp1;
		 		temp2=s1[j].s;
		 		s1[j].s=s1[j+1].s;
		 		s1[j+1].s=temp2;
			 }
		  }
	for(int i=0;i<max;i++)
	cout<<s1[i].s<<"  "<<s1[i].count<<endl;
	for(int i = 0; i < max; i++){
		delete [] s1[i].s;
	}
	delete []s1;
	return 0;
 }
