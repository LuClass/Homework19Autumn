#include<iostream>
using namespace std;
int main()
{
	int i,j,s;
	cout<<"input i and j (i<j):";
	cin>>i>>j;
	cout<<"perfect numbers between i and j are:" <<endl;
	for(int a=i;a<=j;a++)
	{
		s=a;
		for(int b=1;b<a;b++)
			if(a%b==0)
				s-=b;
		if(s==0)
		{
			cout<<a<<'\t';
		}
	}
	return 0;
 } 
