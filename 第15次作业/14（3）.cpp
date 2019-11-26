#include<iostream>
using namespace std;
struct Fraction{
	int a,
	    b;}; 
int sim(int n,int m){
	int i;
	int k=0;
	cin>>n>>m;
	if(n!=0)
	{
	for(i=n;i>=1;i--)
	{ if(n%i==0&&m%i==0)
		{
		n=n/i;
		m=m/i;
		k++;
		cout<<n<<' '<<m;
		}
		if(k==1)
		break;
	}}
	else
	{
	m=1;
	cout<<n<<' '<<m;}
	return 0;
}
void compare(float a,float b){
if(a>b)
cout<<"大"; 
 if(a==b)
cout<<"相等";
  else
cout<<"小";
}
int m(int m,int n){
cin>>m>>n;
int k;
for(int j=2;j<=n;j++){
   k=j*m; 
   if(k%n==0)
     return k;}
	 }
int main(){
	Fraction n1;
 	Fraction n2;
 	cin>>n1.a>>n1.b>>n2.a>>n2.b;
	int k=m(n1.b,n2.b);
	cout<<m(n1.b,n2.b);
	int i=k/n1.b;
	int j=k/n2.b;
	cout<<"和"<<n1.a*i+n2.a*j<<"  "<<k;
	cout<<"差"<<n1.a*i-n2.a*j<<"  "<<k;
	cout<<"积"<<n1.a*n2.a<<"  "<<n1.b*n2.b;
	cout<<"商"<<n1.a*n2.b<<"  "<<n1.b*n2.a; 
return 0; 
}
