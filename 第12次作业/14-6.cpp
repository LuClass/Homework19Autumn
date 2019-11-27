#include<iostream>
#include<string.h>
#define MAX 2
using namespace std;

int getRev(char a[]) {
	int i,j,len,count=0;
	len=strlen(a);
	for(i=0; i<len-1; i++) {
		for(j=i+1; j<len; j++) {
			if(a[i]>a[j]) count++;
		}
	}
	return count;
}

int main() {
	char a[MAX][30];
	int count[MAX];
	int i,j,min,t;
	bool flag[MAX];
	memset(a,0,sizeof(a));
	memset(count,0,sizeof(count));
	memset(flag,true,sizeof(flag));
	for(i=0; i<MAX; i++) {
		cin.getline(a[i],20);
		count[i]=getRev(a[i]);
	}
	for(i=0; i<MAX; i++) {
		for(j=0; j<MAX; j++) {
			if(flag[j]) {
				min=count[j];
				t=j;
				break;
			}
		}
		for(j=0; j<MAX; j++) {
			if((count[j]<min)&&(flag[j]==true)) {
				min=count[j];
				t=j;
			}
		}
		flag[t]=false;
		cout<<a[t]<<" "<<min<<endl;
	}
	return 0;
}
