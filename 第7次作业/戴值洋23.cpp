using namespace std;
#include <iostream>
int main(){
	int length,height;
	cin>>length>>height;
	for(int i=0;i<height;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int k=0;k<length;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<height;i++)
	{
		for(int j=height-1;j>i;j--)
		{
			cout<<" ";
		}
		for(int k=0;k<length;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
