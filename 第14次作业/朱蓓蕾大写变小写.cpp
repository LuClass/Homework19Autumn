#include<iostream>
using namespace std;
int main(){
	char a[51];
	cin.getline(a,51);
	for(int i=0;i<51;i++){
		cout<<a[i];
		}
	for(int i=0;i<51;i++)
	{
	    if(a[i]>='A'&&a[i]<='Z'){
			int n=a[i];
		    cout<<char(n+32);
		}	
		else
		cout<<a[i];
	}
	return 0;
}
