#include <iostream>
using namespace std;
const int n=20;
#define MAX 3
#include <string.h>
int getRev(char*a){
	int count=0;char*temp;
	for (;*a;a++)
	for (temp=a;*temp;temp++){
	if (*a>*temp) count++;}
	return count;
}
int main(){
	int b[MAX];char c[MAX][n];
	for (int i=0;i<MAX;i++){cin.getline (c[i],n);
	b[i]=getRev(c[i]);
	}
		int temp;char *tem;
	for (int i=0;i<MAX;i++)
	for (int j=0;j<MAX-i-1;j++){
		if (b[j]>b[j+1]){
			temp=b[j+1];b[j+1]=b[j];b[j]=temp;
		tem=(c+1);(c+1)=c;c=tem;
		}
	}
	for (int i=0;i<MAX;i++){
	cout<<c[i]<<" "<<b[i]<<endl;
	}
}
