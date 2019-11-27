1.
#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
int main(){
	int i,j;
	cout<<"输入两个整数且前者小于后者";
	cin>>i>>j;
	int k,n,a,b;
	printf("'水仙花数'有：");
	for(n=i;n<=j;n++){
		a=n/100;
		b=(n/10)%10;
		k=n%10;
		if(n==a*a*a+b*b*b+k*k*k)
		cout<<n<<" ";
	} 
	cout<<endl;
	return 0;
}
2.
#include<iostream>
using namespace std;
int main(){
	 long long int input;
	 long long int result=0;
	cout<<"输入一个整数"<<endl;
	cin>>input;
	long long int origin=input;
	while(input!=0){
		result=result*10;
		result=result+input%10;
		input=input/10;
	} 
	if(origin==result)
	cout<<"是回文数"<<endl;
	else cout<<"不是回文数"<<endl; 
	
	return 0;
}
3.
#include<iostream>
using namespace std;
int main(){
	int i,j;
	cout<<"输入两个整数且前者小于后者";
	cin>>i>>j;
cout<<"它们之间的完全数有：";
	int a,b,c,d;
	for(a=i;a<=j;a++)
	{int b=a;
	for(c=1,d=0;c<a;c++){ 
	if(b%c==0){
		d=d+c;
	}
  }
    if(a==d)
    cout<<a<<" ";
	 } 
	 return 0;
}
