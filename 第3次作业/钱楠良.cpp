using namespace std;
#include <iostream>
#include <math.h>
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(b*b-4*a*c>0)
	cout<<(sqrt(b*b-4*a*c)-b)/(2*a)<<' '<<(-b-sqrt(b*b-4*a*c))/(2*a)<<endl;
	else  if(b*b-4*a*c==0)
	      cout<<-b/2*a<<endl;
	      else cout<<"no root"<<endl;
	return 0;
}