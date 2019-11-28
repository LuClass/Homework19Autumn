#include<iostream>
struct Fraction{
	int a,b;
};
struct doSome{
	bool equal;
	double plus,minus,time,divide;
};
doSome* creat(doSome d,Fraction*,Fraction*);
int gys(int,int);
Fraction* huajian(Fraction*);
using namespace std;
int main(){
	Fraction f1,f2;
	doSome d;
	cin >> f1.a >> f1.b>> f2.a>>f2.b;
	cout << "输入的两个分数为：" << f1.a << '/'<<f1.b << "  "<< f2.a<< '/'<<f2.b<<endl;
	Fraction *ff1=huajian(&f1),*ff2=huajian(&f2);            //化简分子分母
	cout << "经化简后两个分数为：" << f1.a << '/'<<f1.b << "  "<< f2.a<< '/'<<f2.b<<endl;
	doSome *dd=creat(d,ff1,ff2);                             //判等并计算加减乘除
	if(dd->equal==true)
        {cout << "这两个分数相等" << endl;}
	else
        {cout << "这两个分数不等" << endl;}
    cout << dd->plus << " " << dd->minus << " " << dd->time << " " << dd->divide << endl;

}
doSome* creat(doSome d,Fraction *ff1,Fraction *ff2){
	doSome *dd=&d;
	double x=(ff1->a )*1.0/(ff1->b );
	double y=(ff2->a )*1.0/(ff2->b );
	dd->plus=x+y;
	dd->minus=x-y;
	dd->time=x*y;
	dd->divide=x/y;
	dd->equal=(ff1->a==ff2->a )&&(ff1->b==ff2->b );
	return dd;
}
int gys(int a,int b){
	int x=a>b?a:b;
	int y=a<=b?a:b;
	int temp;
	do{
		temp=x%y;
		x=y;
		y=temp;
	}while(temp!=0);
	return x;
}
Fraction* huajian(Fraction *ff){
	int gys1=gys(ff->a,ff->b);
	ff->a/=gys1;
	ff->b/=gys1;
	return ff;
}
struct course{
	int cNo;
	string cName;
	enum testWay{percent,gradeway};
};
struct stuGrade{
	int stuNo,cNo;
	string cName;
	union courseGrade{
		float num;
		char level;
	}; 
};


