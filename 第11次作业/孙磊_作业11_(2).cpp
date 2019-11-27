//(2)
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Input a number:"<<endl;
	while(cin>>num){
		int m=num,numHui=0;
		while(m!=0){
			numHui=numHui*10+m%10;//将原数颠倒顺序 
			m/=10;
		}
		if(numHui == num)
			cout<<num<<"是回文数！"<<endl;
		else
			cout<<num<<"不是回文数！"<<endl;
	} 	
	
}

