1.
#include <iostream>
#include <iomanip>
using  namespace std;
int main(){
	int a;
	int j=31,k;
	unsigned int i=2147483648;
	cin>>a;
	while(j>=0){
	k=a&i;
	cout<<(k>>j--)<<" ";
	i>>=1;
  }
}

6.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a,b,c;
	float p;
	cin >> a >> b >> c;
	d = b*b-4*a*c;
	if(d<0)
	cout << "无解"; 
	else if(d == 0)
	cout<<"存在一个根 x="<<(-b/(2*a))<<endl;
	else cout<<"存在两个根 x1="<<(-b+sqrt(d))/(2*a)<<" x2="<<(-b-sqrt(d)) /(2*a);
	return 0; 
}
