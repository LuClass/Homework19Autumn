//第四次作业 2019.10.11
//(7) 
#include<iostream>
#include<math.h> 
using namespace std;
int main()
{		
		cout<<"输入一个正整数：";
		int n;
		cin>>n;
		if(n<=0)
		cout<<"输入错误，重新输入"<<endl ;
		else{
			cout<<n<<"的因子有：";
			for(int i=1;i<n;i++){
				if(n%i==0)//能整除的就是因子 
				cout<<i<<' ';
			}
		}	
		cout<<endl;
		cout<<"1到100的完全数有：";
		for(int k=1;k<=100;k++){//1到100每一个都拿出来 
			int count=0;
			for(int j=1;j<k;j++){
				if(k%j==0)//和前面一样 
				count=j+count;
			}
			if(k == count)//判断完全数 
			cout<<count<<' '; 
		}	
}
