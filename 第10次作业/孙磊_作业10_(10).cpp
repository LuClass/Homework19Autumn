//(10)
#include<iostream>
using namespace std;

int getNum(int a[]){
	int x=0;
	for(int i=0;i<21;i++){
		if(a[i]==1) x++;
	}
	return x;	//返回数组里面等于1的项数 
}
int main(){
	int a[21];
	for(int i=0;i<21;i++){
		a[i]=1;		//21项全部赋值 1 
	}
	int x=0;
	while(getNum(a)!=1){		//循环条件为数组里面等于1的只有一项 
		for(int i=0;i<21;i++){
			if(a[i]==1) x++;		//等于1时，x自增 
			if(x==5){		//当x==5时。将该项赋值为0，并将x再归零 
				a[i]=0;
				x=0;
			} 
		}
	}
	int y=0; 
	for(int i=0;i<21;i++){
		if(a[i]==1){
			y=i;		//将最后一项角标赋给 y 
			break;
		}
	}
	cout<<"剩最后一个人的编号为:"<<y+1<<endl;		//+1 
	

}
