#include<iostream>
#include<string.h>
using namespace std;

int getSet(int rs[],const int a[],int n){
	int i,j,t,max,count=0,app[100];
	bool flag[100];
	memset(app,0,sizeof(app));
	memset(flag,true,sizeof(flag));
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(rs[j]==0){
				rs[j]=a[i];
				app[j]=1;
				count++;
				break;				
			}
			else if(a[i]==rs[j]) {
				app[j]++;	
				break;
			}
		}	
	}
	for(i=0;i<count;i++) {
		cout<<rs[i]<<" ";
		cout<<app[i]<<endl;
	}
	for(i=0;i<count;i++){
		for(j=0;j<count;j++){
			if(flag[j]){
				max=app[j];
				t=j;
				break;
			}
	    }
		for(j=0;j<count;j++){
			if((flag[j]==true)&&(app[j]>max)){
				max=app[j];
				t=j;
			}
		}
		flag[t]=false;
		cout<<rs[t]<<": "<<max<<endl;
	}
	return count;
}

int main(){
	int a[8]={3,1,2,3,1,5,2,1},rs[8];
	memset(rs,0,sizeof(rs));
	cout<<getSet(rs,a,8);
	return 0;
}
