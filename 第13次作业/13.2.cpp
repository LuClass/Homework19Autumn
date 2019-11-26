#include <iostream>
#define max 4
using namespace std;
int getRev(char a[]){
	int sum=0;
	for(int i=0;a[i+1];i++){
		for(int j=i+1;a[j];j++){
		 if(a[i]-a[j]>0)
		 sum++;	
		}
	}
	return sum;
} 
int main (){
	char a[max][20];
	int b[max],c[max];
	cout<<"input"; 
	for(int i=0;i<max;i++){
		cin>>a[i];
	}
	for(int i=0;i<max;i++){
		b[i]=getRev(a[i]);
		c[i]=getRev(a[i]);
	}
for(int j=0;j<max;j++){
	for(int i=0;i<max-1;i++){
		if(b[i]<b[i+1]){
			int s;
			s=b[i];
			b[i]=b[i+1];
			b[i+1]=s;	
		}
	}
}
     for(int i=0;i<max;i++){
     	for(int j=0;j<max;j++){
     		if(c[j]==b[i]){
     			cout<<a[j]<<' '<<c[j]<<endl;
     			c[j]=-1;        //防止有逆序相同重复输出第一个 
     		}
     	}
     }
}
