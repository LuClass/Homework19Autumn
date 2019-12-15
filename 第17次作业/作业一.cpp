#include <iostream>
using namespace std;
const int n=100;
char f(char *a,int n){
	while (*a){
		if(*a>='A'&&*a<='Z')
		*a+='a'-'A';
		a++;
	}
	return *a;
}
int main (){
	char a[n];cin.getline(a,n);
	f(a,n);
	cout<<a;
}
