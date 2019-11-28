#include <iostream>
using namespace std;
int main()
{
	cout<<"T1: cin i,j:"<<endl;
	int I,J;
	cin>>I>>J;
	 int n;int a,b,c;
	 int he=0;
  for(n=I;n<J;n++)
  { a=n/100;
    b=(n/10)%10;
    c=n%10;
    he=a*a*a+b*b*b+c*c*c;
    if(n==he) cout<<n<<'\t';
  }
  
  return 0;
}
