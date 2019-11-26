#include<iostream>
#include<cmath> 
#include<time.h>
#include <stdlib.h>
using namespace std;
void makeRandom(int a[], int n){
	srand(time(0));
    for(int i = 0; i < n; i++)
		a[i] = rand() % 100;	//100以内的随机数
}
int getMax(const int a[],int n){
	int max=a[0],index=0;
	for(int i=1;i<n;i++){
		if(max<a[i]){
			max=a[i];
			index=i;
		}
	}
     return max;
	
}
bool isSu(int n){
	if(n<=1)
	return false;
	else if(n==2)
	return true;
	else{
		int i;
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return false;
			}
		}
		if(i>sqrt(n)){
			return true;
		}
	}
}
int sum(int n){
	int summary=0;
	do{
		summary+=n%10;
		n/=10;
	}while(n!=0);
	return summary;
}
bool isSmith(int n){
	int summary=0;
	int temp=sum(n);
	if(isSu(n)){
		return false;
	}
	else if(n==1){
		return false;
	}
	else{
		do{
			for(int i=2;i<=n;i++){
				if(n%i==0){
					summary+=sum(i);
					n/=i;
					break;
				}
			}
		}while(n!=1);
		if(temp==summary)
		return true;
		else return false;
	}
}

int main(){
	int const x=11;                                   //T(2)
	int a[x];
	makeRandom(a,x);
	cout << "该随机数组最大值为："<<getMax(a,x)<< endl;
	int n;                                      //T(5)
	cin >> n;
	cout << "输入的数为：" << n << ',';
	if(isSmith(n)){
		cout <<"他是史密斯数" << endl;
	}
	else cout  << "他不是史密斯数" << endl;
	for(int i=4937774;;i++){
		if(isSmith(i)){
			cout << "4937774后面的第一个史密斯数为"<< i<<endl;
			break;
		}
	}
	int b[22];                   //T(10)
	int m=21;
	int circu=0;
	for (int i=1;i<=21;i++)
	{
		b[i]=i;
	}
	while (1)
	{
		
		for (int j=1;j<=21;j++)
		{
			if (b[j]!=0)
			{
				circu++;
				if (circu%5==0)
				{
					b[j]=0;
					m--;
					if(m==1)
						break;
				}
			}
			
		}
		if(m==1)
			break;
	}
	int g;
	for (g=1;b[g]==0;g++){}
	cout<<"编号为"<<g<<"的人留了下来。";	
	return 0;
}
