#include<iostream>
using namespace std;
#include<string.h>

int getSet(int rs[],const int a[],int n){
	int k=0;
	bool flag;
	rs[k] = a[k];
	k++;
	for(int i=1;i<n;i++){
		flag = true;
		for(int j=0;j<k;j++){
			if(a[i] == rs[j]){
				
			    flag = false;
				break;
				
			}			
		}
		if(flag){
			rs[k] = a[i];
			k++;
		}
	}
	return k;
}

int getSetandNum(int rs[],int num[], int a[],int n){
	int k=0;
	bool flag;
	rs[k] = a[k];
	num[k]++;
	k++;
	for(int i=1;i<n;i++){
		flag = true;
		for(int j=0;j<k;j++){
			if(a[i] == rs[j]){				
			    flag = false;
				num[j]++;				
			}			
		}
		if(flag){
			rs[k] = a[i];
			num[k]++;
			k++;
		}
	}
	return k;
}

void order(int rs[],int num[],int k){
	int be_max = 0x7fffffff;
	for(int i=0;i<k;i++){
		int max = 0;	
		for(int j=0;j<k;j++){
			if(num[j]>=max&&num[j]<be_max){
				max = num[j];
			}
		}
		be_max = max;
		for(int z=0;z<k;z++){
			if(num[z]==max){
				cout<<rs[z]<<":"<<num[z]<<endl;
			}
		}
	}
}

int main(){
	int rs[100];
	int num[100];
	memset(num,0,sizeof(num));
	int a[8] = {3,1,2,3,1,5,2,1};
	int k = getSet(rs,a,8);
	int j = getSetandNum(rs,num,a,8);
    for(int i=0;i<k;i++){
    	cout<<rs[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<k;i++){
		cout<<num[i]<<" ";
	}
	cout<<endl;
	order(rs,num,k);
	return 0;
} 
