#include <iostream>
using namespace std;
struct Fraction{
		int a,b;
	};
struct jie{
		char p;
		Fraction y1,y2,y3,y4;
	};	
 Fraction huajian(Fraction x){
	int s;
	if(x.a>x.b)
	s=x.b;
	else
	s=x.a;
	for(int i=s;i>=1;i--){
		if(x.a%i==0&&x.b%i==0){
			x.a=x.a/i;
			x.b=x.b/i;
			break;
		}
	}
	if(x.a==0) 
	 x.b=1;
	 return x;
}
jie yunsuan(Fraction x1,Fraction x2){
	jie f;
	if(x1.a/x1.b>x2.a/x2.b)
	f.p='>';
	else
	if(x1.a/x1.b==x2.a/x2.b)
	f.p='=';
	else
	f.p='<';
	f.y1.a=x1.a*x2.b+x1.b*x2.a;
	f.y1.b=x1.b*x2.b;
	f.y2.a=x1.a*x2.b-x1.b*x2.a;
	f.y2.b=x1.b*x2.b;
	f.y3.a=x1.a*x2.a;
	f.y3.b=x1.b*x2.b;
	f.y4.a=x1.a*x2.b;
	f.y4.b=x1.b*x2.a;
	huajian(f.y1);
	huajian(f.y2);
	huajian(f.y3);
	huajian(f.y4);
	return f;
}
int main (){
	Fraction x1,x2;
	jie f;
	cin>>x1.a>>x1.b>>x2.a>>x2.b;
	cout<<huajian(x1).a<<' '<<huajian(x1).b<<' '<<huajian(x2).a<<' '<<huajian(x2).b<<endl;
	cout<<yunsuan(x1,x2).p;
} 

