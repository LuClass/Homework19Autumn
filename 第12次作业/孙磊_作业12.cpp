#include<iostream>
using namespace std;

int getSet(int rs[], const int a[], int n) {
	rs[0]=a[0];	//首项先赋值 
	int count=1;	//计数从1开始 
	for(int i=1;i<n;i++){
		bool isEqual=false;		//判断相等 
		for(int j=0;j<count;j++){	//对当前rs数组遍历并与a[i]比较 
		if(rs[j]==a[i])
		isEqual=true;
		}
		if(!isEqual){
			rs[count]=a[i];//没有相等的项，就把当前a[i]赋给rs最后一项 
			count++;	//计数自增 
		}
	}
	for(int i=0;i<count;i++)
		cout<<rs[i]<<' '; //输出rs 
	cout<<endl;
	return count;//返回计数 
} 

//测试 
int main(){
	int a[]={3, 1, 2, 3, 1, 5, 2, 1};
//	int a[]={1,1,2,2,3,3,4,4,4,5,6,7};
	int rs[8];
	int n=8;
	cout<<getSet(rs,a,n);
} 
