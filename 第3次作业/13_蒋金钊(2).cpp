#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,c;
	cout<<"请输入一元二次方程的三个系数："<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	float i =b*b - 4*a*c;
	if(i<0){
		cout<<"此方程无实数根。";
	}
	else if(i==0){
		cout<<"此方程有一实数根：x = "<<(-b/2/a);
	}
	else {
		float j = sqrt(i);
		cout<<"此方程有两实数根：x1 = "<<((-b+j)/2/a);
		cout<<" x2 = "<<((-b-j)/2/a);
	}
	return 0;
	
}
