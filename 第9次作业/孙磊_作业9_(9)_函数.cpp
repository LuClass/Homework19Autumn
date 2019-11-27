//（9）-函数方法

#include<iostream>
#include<cmath>
using namespace std;

float area(float a,float b,float c);

int main(){
	float a,b,c;
	cout<<"Input a,b,c:"<<endl;
	while(cin>>a>>b>>c){
		if(a+b<c||a+c<b||b+c<a){//判断三角形 
			cout<<"不是三角形！,重新输入"<<endl; 
			continue;
		}
		cout<<"Area="<<area(a,b,c)<<endl;
		cout<<"Input a,b,c:"<<endl;
	}
	return 0;
}

float area(float a,float b,float c){
	float s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
