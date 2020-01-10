#include<iostream>
#include<string.h>
#define n 5 
using namespace std;
int cpychar(int i,int j,char s[n][20]){
	int y=1;
	for(int x=0;s[i][x];x++){ 
	if(strlen(s[i])!=strlen(s[j])){
		y=0;
		break;
	}
	if(s[i][x]!=s[j][x])
	{ y=0;
	  break;
	}} 
	return y;
}
int main (){
	char s[n][20];
	for(int i=0;i<n-1;i++){
		cin.getline(s[i],20);
	}
	int a[n],b[n];
	for(int i=0;i<n;i++){
		a[i]=0;
		b[i]=0;
	}
	char f[n][20];
	for(int i=0;i<n;i++){
		if(!s[i])
		break;
		int sum=1;
		for(int j=i+1;j<n;j++){
			if(cpychar(i,j,s)){
				sum++;
				strcpy(s[j],'\0');	}
			a[i]=sum;
			b[i]=sum;
		}
	}
	if(s[n-1]) {
		a[n-1]=1;
		b[n-1]=1;
	}

	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			if(a[j-1]<a[j]){
				int x;
				x=a[j-1];
				a[j-1]=a[j];
				a[j]=x;			
			}
		}
	}
	
	int p=0;
	for(int i=0;a[i];i++){
		for(int j=0;j<n-1;j++){
		if(b[j]==a[i]){
			strcpy(f[p],s[j]);
			p++;
			cout<<a[i]<<' '<<s[j]<<endl;
			b[j]=0; 
		}	}
	}
	return 0;
}//f¼´Îª½µÐòÅÅÁÐ 
