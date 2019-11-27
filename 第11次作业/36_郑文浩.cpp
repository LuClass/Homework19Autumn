#include<iostream>
#include<cmath>
using namespace std;
bool Sxh(int);
bool Hui(string);
bool Wqs(int);
int main(){
	int i,j;
	cin >>i >>j;
	cout << "在" << i << "和" << j<<"之间的水仙花数有："; 
	for(int x=i;x<=j;x++){
		if(Sxh(x))
		cout << x << "  ";
	}
	cout << '\n';
	string a;
	cin >> a;
	if(Hui(a))
	cout <<a<< "为回文数" << endl;
	else 
	cout <<a<< "不为回文数"  << endl;
	int m,n;
	cin >> m>>n;
	cout << m <<"和" << n<<"之间的完全数有：";
	for(int i=m;i<=n;i++){
		if(Wqs(i))
		cout << i <<"  "; 
	} 
}
bool Sxh(int n){
	if(n>100&&n<1000){
	int temp=n,sum=0;
	do{
		sum+=(n%10)*(n%10)*(n%10);
		n/=10;	
	}while(n!=0);
	if(sum==temp){
		return true;
	}
	else return false;}
	else return false;
}
int H(int n){
	if(n<10)
	return n;
	else{
		return n/10;
	}
}
bool Hui(string str){
	int a=str.length();
	for(int i=0;i<a/2;i++){
		if(str[i]!=str[a-1-i]){
			return false;
		}
	}
	return true;
}
bool Wqs(int n){
	int sum=0;
	for(int i=2;i<=sqrt(n);i++){
		int temp=n;
		if(temp%i==0){
			sum+=temp/i+i;
		}
		if(temp==i*i)
		sum+=i;
	}
	if(sum==n-1)
	return true;
	else return false;
}

