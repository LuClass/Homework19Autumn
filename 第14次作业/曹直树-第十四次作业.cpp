#include <iostream>
using namespace std;
const int n=50;
int main (){
	char a[n];
	cin.getline(a,n);
	cout<<a;
	cout<<endl;
		for (int i=0;a[i];i++){
		if (a[i]>='A'&&a[i]<='Z')
			a[i]+='a'-'A';
	}
	cout<<a;
} 