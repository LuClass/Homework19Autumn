#include<iostream> 
using namespace std; 
int main(void) 
{ 
	int x,y,key=0; 
	cin>>x; 
	if (x>=0){ cout<<'0';y=x;} 
	else {cout<<'1';x=-x-1;y=x;key=1;} 
	for (int n=31;n>0;n--) 
	{ 
		for(int a=1;a<n;a++) 
		{ 
			x/=2; 
		} 
		x=x%2; 
		if (key==1) {x=!x;} 
		cout<<x; 
		x=y; 
	} 
	return 0; 
} 
