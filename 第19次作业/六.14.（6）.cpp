#include<iostream>
#include<string.h>
#define MAX 5
using namespace std;
int main(){
	int i,j,temp;
	char x[MAX][20];
	char *a[MAX];
	char *temp1;
	char y[20];
	int getRev(char a[]);
	int n[MAX];
	cout<<"请分别在下面的五行中输入字符串，每个字符串大小不超过20"<<endl;
	cin.get();
	for(i=0;i<=MAX-1;i++){
		cin.getline(x[i], 20);
		n[i]=getRev(x[i]);
		a[i]=x[i];
	}
	for(i = 0; i < MAX-1; i++)
		for(j = 0; j < MAX-1-i; j++)
			if(n[j] > n[j+1]){
				temp = n[j]; 
				n[j] = n[j+1]; 
				n[j+1] = temp;
				temp1 = a[j];
				a[j] = a[j+1];
				a[j+1] = temp1;
			}
	for(i=0;i<=MAX-1;i++){
		cout<<x[i]<<":"<<n[i]<<endl;
	}
} 
	
int getRev(char a[]){
	int n,i,j,count=0;
	n=strlen(a);
	for(i=0;i<=n-1;i++){
		for(j=i+1;j<=n-1;j++){
			if(a[i]>a[j]){
				count++;
			}
		}
	}
	return count;
} 
