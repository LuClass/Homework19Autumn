#include<iostream>
using namespace std;

int getNum(int a[]){
	int x=0;
	for(int i=0;i<21;i++){
		if(a[i]==1) x++;
	}
	return x;	
}
int main(){
	int a[21];
	for(int i=0;i<21;i++){
		a[i]=1;	
	}
	int x=0;
	while(getNum(a)!=1){	
		for(int i=0;i<21;i++){
			if(a[i]==1) x++;		
			if(x==5){		
				a[i]=0;
				x=0;
			} 
		}
	}
	int y=0; 
	for(int i=0;i<21;i++){
		if(a[i]==1){
			y=i;		
			break;
		}
	}
	cout<<"最后一个人的编号:"<<y+1<<endl;		
	

}
