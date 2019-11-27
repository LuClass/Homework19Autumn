#include<iostream>
#include<math.h>

using namespace std;

int yue(int a,int b){
	int p,q,t,i;
	p=max(a,b);
	q=min(a,b);
	for(i=q;i>0;i--){
		if(q%i==0 && p%i==0) break;
	}
	return i;
}

struct Fraction{
	int a,b;
	Fraction(){
	}
 	Fraction(int x,int y) : a(x),b(y){
		if(b==0) throw "denominator is zero";
		if(a==0){
			b=1;
			return;
		}
		int t=yue(a,b);
		if(t!=1){
			a/=t;
			b/=t;
		}
	}
	void print(){
		cout<<a<<"/"<<b<<endl;
	}
};

  using f=Fraction;
f myplus(f f1,f f2){
	f ft(f1.a*f2.b+f1.b*f2.a,f1.b*f2.b);
	return ft;
}

f myminus(f f1,f f2){
	f ft(f1.a*f2.b-f1.b*f2.a,f1.b*f2.b);
	return ft;
}

f mytimes(f f1,f f2){
	f ft(f1.a*f2.a,f1.b*f2.b);
	return ft;
}

f mydivide(f f1,f f2){
	f ft(f1.a*f2.b,f1.b*f2.a);
	return ft;
}


int main(){
	int a1,b1,a2,b2;
	cin>>a1>>b1>>a2>>b2;
	f f1(a1,b1),f2(a2,b2),ft;
	f1.print(); f2.print();
	ft=myplus(f1,f2); ft.print();
	ft=myminus(f1,f2); ft.print();
	ft=mytimes(f1,f2); ft.print();
	ft=mydivide(f1,f2); ft.print();
	return 0;
}

