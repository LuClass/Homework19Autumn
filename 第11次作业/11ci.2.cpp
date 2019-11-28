#include <iostream>
using namespace std;
int panwei(int x){
	int a,b;
	for(a=x,b=0;a>9;b++){
	a=a/10;	
	}
	return b+1;
}
int main (void){
	int x,h,g,f,o,p;
	cout<<"input a number";
	cin>>x;
	h=panwei(x);
	for(int j=1;j<=h/2;j++){
		g=x;
		f=x;
		for(int i=1;i<j;i++){
		g=g/10;	}
		o=g%10;
		for(int r=1;r<=h-j;r++){
		f=f/10;	}
		p=f%10;
		if(o!=p)
		{cout<<"not ";
		break;
	    }
        }
        cout<<"huiwen"<<endl;
}
