#include<iostream>
//郑文浩的第八次作业  36_郑文浩 918107820336 
using namespace std;
int Gys(int x, int y);              
int Gbs(int x,int y);
void QuFan1(int x);
void QuFan2(int x); 
int main() {
	int x, y;                                //P110 T6
	cin >> x >> y;
	cout << "请输入两个整数: " << x << "和" << y << endl;
	cout << "最大公约数为：" << Gys(x, y) << endl;
	cout << "最小公倍数为："<< Gbs(x,y) << endl;
	int z;                                           //T7
	cin >> z;
	cout << "请输入正整数："<< z << endl;
	cout << "他的反序输出为：";
	QuFan1(z);                             //递推  
	cout <<endl; 
	QuFan2(z);                              //递归 
	
}
int Gys(int x, int y) {
	int n1, n2, temp;
	if (x > y) {
		n1 = x;
		n2 = y;
	}
	else {
		n1 = y;
		n2 = x;
	}
	while (n2 != 0) {
		temp = n1 % n2;
		n1 = n2;
		n2 = temp;
	}
	return n1;
}
int Gbs(int x,int y){
	return (x*y)/Gys(x,y);
}    
void QuFan1(int x){
	do{
		cout << x%10;
		x/=10;
	}while(x!=0);
}
void QuFan2(int x){
	if(x==0){
	}
	else{
		cout << x%10;
		return QuFan2(x/10);
	}
}
