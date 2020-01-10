#include <iostream>
using namespace std;
const int n=100;
int num(const char a[]){
	int count =0,j=0;
	int b[n];
for (int i=0;i<n;i++){
	if (a[i]>47&&a[i]<58)
	cout<<a[i];
		if ((a[i+1]<=47||a[i+1]>=58)&&(a[i]>47&&a[i]<58)){
		count++;
		cout<<" ";}
}
cout<<endl<<"整数个数为 "<<count;
}
int main(){
	char a[n];
	cin.getline(a,n);
num(a);
}
