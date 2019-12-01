#include <iostream>
using namespace std;
int GCD(int x,int y){
	int i=2,c,a=1;
	if(x<y){
		c=y;
		y=x;
		x=c;
	}
	while(i<=y){
		if(x%i==0&&y%i==0){
			x/=i;
			y/=i;
			a*=i;
				 continue;}
		i++;				
	}
	
	return a;
}

int LCM(int x,int y){
	int b=x*y/GCD(x,y);
	return b;
}
int main(){
	int x,y,a,b;
	cin>>x>>y;
	a=GCD(x,y);
	b=LCM(x,y);
	cout<<"Great Common Divisor is "<<a<<endl;
	cout<<"Least Common Multiple is "<<b<<endl;
	return 0;
}
