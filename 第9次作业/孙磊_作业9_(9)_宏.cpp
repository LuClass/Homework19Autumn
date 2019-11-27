//（9）-宏方法
#include<iostream>
#include<cmath> 
#define AREA(s,a,b,c)	sqrt(s*(s-a)*(s-b)*(s-c))//有参宏定义 
using namespace std;

int main(){
	float a,b,c;
	cout<<"Input a,b,c:"<<endl;
	while(cin>>a>>b>>c){
		if(a+b<c||a+c<b||b+c<a){//判断三角形 
			cout<<"不是三角形！,重新输入"<<endl; 
			continue;
		}
		float s=(a+b+c)/2;
		cout<<"Area="<<AREA(s,a,b,c)<<endl;
		cout<<"Input a,b,c:"<<endl;
	}
}
