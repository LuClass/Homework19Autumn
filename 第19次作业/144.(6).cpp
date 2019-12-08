#include<iostream>
using namespace std;
int getRev(string a)
{
	int count=0;
	for(int i=0;a[i+1]!=0;i++)
	{
		for(int j=i+1;a[j]!=0;j++)
		{
			if(a[i]>a[j])
			{
				count++;
			}
		}
	}
	return count;
} 
int main()
{
	int max;
	cin>>max;
	string *p=new string[max];
	string s;
	for(int i=0;i<max;i++)
	{
		cin>>s;
		p[0]=s;
	}
	for(int k=0;k<max-1;k++)
	{
		for(int w=k+1;w<max;w++)
		{
			if(getRev(p[k])>getRev(p[w]))
			{
				string t;
				t=p[k];
				p[k]=p[w];
				p[w]=t;
			}
		}
	}
	for(int j=0;j<max;j++)
	{
		cout<<getRev(p[j])<<":"<<p[j]<<endl;
	}
	delete []p;
	return 0;
}
