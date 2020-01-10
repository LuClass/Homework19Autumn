#include<iostream>
#include<string.h>
using namespace std;
int main() {
	cout<<"共有多少行字符串 ： ";
	int n,i;
	cin>>n;
	char a[n][50];
	cin.get();
	char *b[n];
	for(i=0;i<n;i++){
		cin.getline(a[i],50);
		b[i]=a[i];
	}
	void bubbleSort(char * strs[], int n);
	bubbleSort(b,n);
}
void bubbleSort(char * strs[], int n){
	char *temp;
	for(int i = 0; i < n-1; i++)				
		for(int j = 0; j < n-i-1; j++)
			if(strcmp(strs[j], strs[j+1]) > 0){
				temp = strs[j];				
				strs[j] = strs[j+1];
				strs[j+1] = temp;
			}
			for(int i = 0; i <=n-1; i++)
				cout<<strs[i]<<endl;
}
	
