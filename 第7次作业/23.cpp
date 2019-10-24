#include <iostream>
using namespace std;
int main()
{ 
	int a,b;
	cin>>a>>b;
	for(int i=0;i<b;i++) 
	{ 
		for(int j=0;j<i;j++) 
			cout<<" "; 
		for(int j=0;j<a;j++) 
			cout<<"*"; 
		cout<<"\n"; 
	} 
	cout<<endl;
	for(int i=0;i<a;i++) 
	{ 
		for(int j=0;j<i;j++) 
			cout<<" "; 
		for(int j=0;j<b;j++) 
			cout<<"*"; 
		cout<<"\n"; 
	} 
	return 0; 
}
