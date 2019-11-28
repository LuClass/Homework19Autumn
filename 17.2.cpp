#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n=5;
	char a[n][10];
	for(int i=0;i<n;i++){
		gets(a[i]);
	}
	for(int i=0;i<n;i++){
		for(int m=i+1;m<n;m++){
			if(a[i]>a[m]){
				char *temp;
				strcpy(temp,a[i]);
				strcpy(a[i],a[m]);
				strcpy(a[m],temp);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
