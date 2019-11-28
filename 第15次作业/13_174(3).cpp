#include<iostream>
using namespace std;
 
int greatestCommonDivisor(int x,int y){
	if(x<y){
		int t;
		t = x;
		x = y;
		y = t;
	}
	while(x%y!=0){
		int t;
		t = y;
		y = x%t;
		x = t;
	}
	
	return y;
} 

int minimumCommonMultiple(int x,int y){
	int gcd = greatestCommonDivisor(x,y);
	return x*y/gcd;
}
 
struct Fraction{
	int a;
	int b;
	Fraction(int a,int b){
		bool flag = false;
		if(a==0){
			this->a = 0;
			this->b = 1;
			return;
		}
		if(a<0){
			flag = true;
			a *= -1;
		}
		int div;
		if(div!=1){
	        div = greatestCommonDivisor(a,b);
	    	a/=div;
		    b/=div;
	    }
		this->a = a;
		if(flag){
		this->a *= -1;	
		}			
		this->b = b;
	}
	
	bool isEqual(const Fraction* f){
		if(f->a==this->a&&f->b==this->b){
			return true;
		}
		else{
			return false;
		}
	}
	
	Fraction add(const Fraction* f){
		int a,b;
		if(b!=f->b){
			int mcm = minimumCommonMultiple(this->b,f->b);
			b = mcm;
			a = this->a*(mcm/this->b) + f->a*(mcm/f->b);
		}
		return Fraction(a,b);
	}
	
	Fraction sub(const Fraction* f){
		int a,b;
		if(b!=f->b){
			int mcm = minimumCommonMultiple(this->b,f->b);
			b = mcm;
			a = this->a*(mcm/this->b) - f->a*(mcm/f->b);
		}
		return (Fraction(a,b));
	}
	Fraction mul(const Fraction* f){
		int a,b;
		a = this->a * f->a;
		b = this->b * f->b;
		return (Fraction(a,b));
	}
	
	Fraction div(const Fraction* f){
		int a,b;
		int c = f->a;
		int d = f->b;
		int t;
		if(c<0){
			c *= -1;
			d *= -1;
		}
		t = c;
		c = d;
		d = t;
	    a = this->a * c;
	    b = this->b * d;
	    return Fraction(a,b);
	}
	
	void show(){
		if(this->a==0){
			cout<<0;
		}
		else{
		cout<<this->a<<"/"<<this->b; 
	    }
	}
};

int main(){
	Fraction f1 = Fraction(0,1);
	
	Fraction f2 = Fraction(-10,25);
	Fraction f3 = Fraction(10,25);
	
	if(f2.isEqual(&f2)){
		f2.show();
		cout<<" is equal to ";
		f2.show();
		cout<<endl;
	}
	else{
		f2.show();
		cout<<" is not equal to ";
		f2.show();
		cout<<endl;
	}
	
	if(f2.isEqual(&f3)){
		f2.show();
		cout<<" is equal to ";
		f3.show();
		cout<<endl;
	}
	else{
		f2.show();
		cout<<" is not equal to ";
		f3.show();
		cout<<endl;
	}
	
	Fraction f4 = f2.add(&f3);
	f2.show();
	cout<<" + ";
	f3.show();
	cout<<" = ";
	f4.show();
	cout<<endl;
	
	
	Fraction f5 = f2.sub(&f3);
	f2.show();
	cout<<" - ";
	f3.show();
	cout<<" = ";
	f5.show();
	cout<<endl;
	
	Fraction f6 = f2.mul(&f3);
	f2.show();
	cout<<" * ";
	f3.show();
	cout<<" = ";
	f6.show();
	cout<<endl;
	
	Fraction f7 = f2.div(&f3);
	f2.show();
	cout<<" / ";
	f3.show();
	cout<<" = ";
	f7.show();
	cout<<endl;
	return 0; 
} 
