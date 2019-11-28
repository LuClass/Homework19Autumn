//(5)
#include<iostream>
using namespace std;

bool isSmith(int n){
	int num1=0,num2=0,n1=n;// 	设置一个n1=n 
	while(n!=0){
		num1+=n%10;//num1为各位输之和 
		n/=10;
	}
//	cout<<num1<<endl;
	
	int x=0;
	for(int i=2;i*i<=n1;i++){
		while(n1!=i){
			if(n1%i==0){
				x=i;		//把分解出的质因数赋给 x 
				while(x!=0){
					num2+=x%10;		//对 x各位数求和 
					x/=10;
				}
				n1/=i;
			}
			else break;
		}
	}
	x=n1;		//最后一个质因数按照相同方法求各位数之和 
	while(x!=0){
		num2+=x%10;
		x/=10;
	}

    //cout<<num2<<endl; 
    return num1==num2;
}

//测试 
int main(){
	int n;
	cout<<"输入测试数据n(n=0结束):" ;
	while(cin>>n&&n!=0){		//输入0结束 
		cout<<isSmith(n)<<endl;
		cout<<"输入测试数据n(n=0结束):" ;
	}
//4937774 
	int x=4937774;
	while(x++){
		if(isSmith(x)){
		cout<<"4937774下一个Smith数是："<<x<<endl;
		break;	
		}	
	}
	return 0;
}
