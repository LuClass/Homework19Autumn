#include <iostream>
using namespace std;
struct Fraction1{
	int a,b;
};
struct Fraction2{
	int a,b;
};

int simplify(int a,int b){
	if(a==0&&b==1)
	 cout<<"0"<<endl;
	 else
	 {
	 	for(int i=2;i<=a&&i<=b;i++)
	 	{
	 	if(a%i==0&&b%i==0)
		 {
		 a/=i;
		 b/=i;
		 i=1;
		 }
		}
	  cout<<a<<"/"<<b<<endl;	
	 }
}
float equality(float a,float b,float c,float d){
	float m,n;
	m=a/b,n=c/d;
	if(m>n)
	cout<<a<<"/"<<b<<">"<<c<<"/"<<d<<endl;
	if(m<n)
	cout<<a<<"/"<<b<<"<"<<c<<"/"<<d<<endl;
}

float addition(float a,float b,float c,float d){
	float m,n,k;
	m=a/b,n=c/d;
	k=m+n;
	cout<<"addition "<<k<<endl;
}

float subtraction(float a,float b,float c,float d){
	float m,n,k;
	m=a/b,n=c/d;
	k=m-n;
	cout<<"subtraction "<<k<<endl;
}

float multiplication(float a,float b,float c,float d){
	float m,n,k;
	m=a/b,n=c/d;
	k=m*n;
	cout<<"multiplication "<<k<<endl;
}

float division(float a,float b,float c,float d){
	float m,n,k;
	m=a/b,n=c/d;
	k=m/n;
	cout<<"division "<<k<<endl;
}
	

int main(){
	Fraction1 fs1;
	Fraction2 fs2;
	cin>>fs1.a>>fs1.b;
	cin>>fs2.a>>fs2.b;
	simplify(fs1.a,fs1.b);
	equality(fs1.a,fs1.b,fs2.a,fs2.b);
	addition(fs1.a,fs1.b,fs2.a,fs2.b);
	subtraction(fs1.a,fs1.b,fs2.a,fs2.b);
	multiplication(fs1.a,fs1.b,fs2.a,fs2.b);
	division(fs1.a,fs1.b,fs2.a,fs2.b);	
} 

