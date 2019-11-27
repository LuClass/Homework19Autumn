#include<iostream>
#include<string.h>
using namespace std;

int main(){
	bool a[21];
	memset(a,true,sizeof(a));
	int count=0;
	int t=0;
	for(int i=1;;i++){
		while(a[t]==false){
			t++;
			if(t>20)
			    t-=21;
		}
		if(i%5==0){
			a[t]=false;
			count++;
			if(count==20)
			    break;
			t++;
			if(t>20)
			    t-=21;
		}
	}
	for(int i=0;i<21;i++){
		if(a[i]==true){
			cout<<i+1;
			break;
		}
	}
	return 0;
} 
