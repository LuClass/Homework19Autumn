#include<iostream>
using namespace std;

bool isEqual(int rs[], int n, int num){		//判断数组元素与一个数字是否相等 
	for(int i=0;i<n;i++){
		if(rs[i]==num)
		return true;
	}
	return false;
}

int getSet(int rs[], const int a[], int n) {
	rs[0]=a[0];	//首项先赋值 
	int count=1;	//计数从1开始 
	for(int i=1;i<n;i++){
		if(!isEqual(rs, count, a[i])){
			rs[count]=a[i];//没有相等的项，就把当前a[i]赋给rs最后一项 
			count++;	//计数自增 
		}
	}
	return count;//返回计数 
} 

void getSet2(int rs[], const int a[], int n) {
	int count=getSet(rs, a, n);		//调用getSet()函数 
		for(int i=0;i<count;i++){
			int num=0;
			for(int j=0;j<n;j++){
				if(a[j]==rs[i]) num++;	//每出现一次相等，num自增一次 
			}
			cout<<num<<' ';
	}
	cout<<endl;
}

void getSet3(int rs[], const int a[], int n) {
	int count=getSet(rs, a, n);		//调用getSet()函数 
	int num[count];		//创建一个num数组 
	for(int i=0;i<count;i++){
		num[i]=0;
		for(int j=0;j<n;j++){
			if(a[j]==rs[i]) num[i]++;
		}
	}
	for(int i=0;i<count;i++){
		for(int j=i;j<count;j++){
			if(num[i]<num[j]){		//通过冒泡排序，同时将rs和num两个数组排序 
				int tmp1=num[i], tmp2=rs[i];
				num[i]=num[j];	rs[i]=rs[j];
				num[j]=tmp1;	rs[j]=tmp2;
			} 
		}
	}
	for(int i=0;i<count;i++){
		cout<<rs[i]<<':'<<num[i]<<endl;		//按格式输出 
	}
}
//测试 
int main(){
	int a[]={3, 1, 2, 3, 1, 5, 2, 1};
//	int a[]={1,1,2,2,3,3,4,4,4,5,6,7};
	int rs[8];
	int n=8;
	cout<<getSet(rs,a,n)<<endl;
	getSet2(rs,a,n);
	getSet3(rs,a,n);
} 
