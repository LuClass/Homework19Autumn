/*
(3)编写一个结构 Fraction{int a,b}，表示分数， 其中分子为 a， 分母为 b。 为简化计算，约定分母为正整
数，分子为整数。输出一个分数应化简分子分母。同时约定， 分子为 0 时，分母为 1， 表示值为 0 的分数。
编写一组函数或成员函数， 对两个分数进行判等，比较大小，能计算和、 差、 积、 商。
*/
#include<iostream>
#include<math.h> 
using namespace std;
struct Fraction{
	int a,b;
};
int gcd(int a,int b){
	if(b==0)return a;
	else return gcd(b,a%b);
}
void yuefen(Fraction* re){
	if(re->b<0){
		re->a=-re->a;
		re->b=-re->b;
	}
	if(re->a==0){
		re->b=1;
	}
	else{
		int c=gcd(abs(re->a),abs(re->b));
		re->a/=c;
		re->b/=c;
	}
}
Fraction add(Fraction* f1,Fraction* f2){
	Fraction re;
	re.a=f1->a*f2->b+f1->b*f2->a;
	re.b=f1->b*f2->b;
	yuefen(&re);
	return re;
}
Fraction minu(Fraction* f1,Fraction* f2){
	Fraction re;
	re.a=f1->a*f2->b-f1->b*f2->a;
	re.b=f1->b*f2->b;
	yuefen(&re);
	return re;
}
Fraction multy(Fraction* f1,Fraction* f2){
	Fraction re;
	re.a=f1->a*f2->a;
	re.b=f1->b*f2->b;
	yuefen(&re);
	return re;
}
Fraction div(Fraction* f1,Fraction* f2){
	Fraction re;
	re.a=f1->a*f2->b;
	re.b=f1->b*f2->a;
	yuefen(&re);
	return re;
}
bool equal(Fraction* f1,Fraction* f2){
	Fraction ans=minu(f1,f2);
	if(ans.a==0){
		return true;
	}
	return false;
}
bool big(Fraction* f1,Fraction* f2){
	Fraction ans=minu(f1,f2);
	if(ans.a>0){
		return true;
	}
	return false;
}
void show(Fraction* r){
	yuefen(r);
	if(r->b==1){
		cout<<r->a<<endl;
	}
	else if(abs(r->a)>r->b){
		cout<<r->a/r->b<<" "<<abs(r->a)/r->b<<"/"<<r->b<<endl;
	}
	else{
		cout<<r->a<<"/"<<r->b<<endl;
	}
}
int main(){
	Fraction t1={3,2};
	Fraction*tt1=&t1;
	Fraction t2={5,7};
	Fraction*tt2=&t2;
	//////////显示//////////////
	show(tt1);
	//////////比较//////////////
	if(equal(tt1,tt2)){
		cout<<"两数相等"<<endl;
	}
	else if(big(tt1,tt2)){
		show(tt1);cout<<"更大"<<endl;
	}
	else{
		show(tt2);cout<<"更大"<<endl;
	}
	//////////和、 差、 积、 商//////////////	
	Fraction ans=multy(tt1,tt2);
	cout<<"两数乘积:"<<endl;
	show(&ans);
} 
