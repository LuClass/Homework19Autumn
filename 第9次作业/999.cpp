#include <iostream>
#include <math.h>
using namespace std;
float area(float a,float b, float c){
	float x,y;
	x=(a+b+c)/2;
	y=sqrt(x*(x-a)*(x-b)*(x-c));
	return y;
}
int main(){
	float a,b,c;
  cout<<"a,b,c=";
  cin>>a>>b>>c;
  cout<<"area="<<area(a,b,c);
  return 0;	
} #include <iostream>
#include <math.h>
#define s(a,b,c) (a+b+c)/2
#define area(a,b,c) sqrt(s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c))
using namespace std;
int main (void){
	float a,b,c;
	cout<<"a,b,c=";
	cin>>a>>b>>c;
	cout<<area(a,b,c)<<endl;
	return 0;
} 


