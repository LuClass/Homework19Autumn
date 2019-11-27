//第三次作业	时间：2019.10.8 
#include<iostream>
#include<math.h>
using namespace std;
//(1)
int bin(int n){
	if(n==1) {
		cout<<n;
		return 0;//如果n为 1直接返回 
	}
	else{

		bin(n/2);//函数的递归调用 ，先调用，再输出 
		cout<<n%2;// 由后向前输出 
	}
	return 0;
}

int main()
{
	cout<<"第(1)题"<<endl;
	int num;
	cout<<"输入需要转换的十进制数：";
	cin>>num;
	cout<<"转换为二进制得："; 
	bin(num);//调用函数 
	cout<<endl; 
	
	
//(6) 
	cout<<"第(6)题"<<endl;
	cout<<"依次输入方程系数a,b,c，空格隔开：" ; 
	int a,b,c,temp;
	cin>>a>>b>>c;
	int x1,x2;
	temp=b*b-4*a*c;//判别式 
	if(temp>0){
		x1=(sqrt(temp)-b)/(2*a);//sqrt()平方根函数，加头文件 #include<math.h) 
		x2=(-sqrt(temp)-b)/(2*a);
		cout<<"有两个实根分别为："<<x1<<' '<<x2<<endl;
	}
	else if(temp==0){
		x1=(sqrt(temp)-b)/(2*a);
		cout<<"有一个实根："<<x1<<endl;
	}
	else{
		cout<<"无实根！"<<endl; 
	}
	return 0; 
} 





//(6)






 
