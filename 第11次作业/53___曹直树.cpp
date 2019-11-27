	#include <iostream>
using namespace std;
int f(int a){
	//作业一
	int k,m,n;
	k=a/100;m=a/10%10;n=a%10;
	if (a==k*k*k+m*m*m+n*n*n)
	return 1;
}
int g(int a,int b){
	if (a>1000)
	cout<<"error";
	for (;a<=b;a++){
	if (f(a)==1)
	cout<<a<<" ";
	}
}
int main (){
	int a,b;
	cin>>a>>b;
	g(a,b);
}
    
#include <iostream>
using namespace std;
int f(int a){//作业二
	int b,i=1;
	while(1){
	i*=10;
	b=a/i;
	if (b==0)
	break;
	}
	return i/10;
}
int g(int a){
	int b,count =0;
	for (int i=1;a/i>0;i*=10){
	b=((a/i)%10)*(f(a)/i);
	count +=b;
	}
	if (count==a)
	cout<<"是回文数";
	else
	cout<<"不是回文数";
}
int main (){
	int a;
	cin>>a;
	g(a);
}
#include <iostream>
using namespace std;
int f(int a){
	//作业三
	int b=0;
	if (a==1)
	return 0;
	for (int k=1;k<a;k++){ 
	if (a%k==0)
	b+=k;
	}
	if (b==a)
	return 1;
}
int g(int a,int b){
	for (;a<=b;a++){
	if (f(a)==1)
	cout<<a<<endl;
	}
}
int main(){
	int a, b;
	cin>>a>>b;
	g(a,b);
}