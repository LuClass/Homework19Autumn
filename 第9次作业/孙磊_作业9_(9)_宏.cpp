//��9��-�귽��
#include<iostream>
#include<cmath> 
#define AREA(s,a,b,c)	sqrt(s*(s-a)*(s-b)*(s-c))//�вκ궨�� 
using namespace std;

int main(){
	float a,b,c;
	cout<<"Input a,b,c:"<<endl;
	while(cin>>a>>b>>c){
		if(a+b<c||a+c<b||b+c<a){//�ж������� 
			cout<<"���������Σ�,��������"<<endl; 
			continue;
		}
		float s=(a+b+c)/2;
		cout<<"Area="<<AREA(s,a,b,c)<<endl;
		cout<<"Input a,b,c:"<<endl;
	}
}
