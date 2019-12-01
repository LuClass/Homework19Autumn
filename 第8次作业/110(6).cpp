#include <iostream>
using namespace std;
int Y(int m,int n){
	int k;
    int a=(m>n?m:n);
	int b=(m<n?m:n);
	while(b!=0)
	{
		k=a%b;
		a=b;
		b=k;
	}
	cout<<"其最大公约数为："<<a<<endl;
	return 0;
}

int B(int m,int n){
	int k;
    int a=(m>n?m:n);
	int b=(m<n?m:n);
	while(b!=0)
	{
		k=a%b;
		a=b;
		b=k;
	}
	cout<<"其最小公倍数为："<<m*n/a<<endl;
	return 0;
}

int main(){
	int m,n;
	cout<<"请输入两个整数：";
	cin>>m>>n;
    cout<<Y(m,n);
    cout<<B(m,n);
    return 0;
}
