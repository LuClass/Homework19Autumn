#include<iostream>
#include<cmath>
using namespace std;
struct Solution{
  int count;    //0, 1, 2¸ö½â
  double x1, x2;
};
Solution f(int a, int b, int c){
	Solution x;
	if(b*b>4*a*c){
		x.count=2;
		x.x1=(-b-sqrt(b*b-4*a*c))/2*a;
		x.x2=(-b+sqrt(b*b-4*a*c))/2*a;
	}
	else if(b*b==4*a*c){
		x.count=1;
		x.x1=x.x2=(-b)/2*a;
	}
	else{
		x.count=0;
	}
	return x;
}
int main(){
	cout<<"ax^2+bx+c=0   Please type in a¡¢b and c"<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	Solution f(int a, int b, int c);
	cout<<f(a,b,c).count;
}

