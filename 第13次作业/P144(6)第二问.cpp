#include <iostream>
#include <string.h> 
using namespace std;
#define MAX 5
int getRev(char a[]){
	int sum=0;
	for (int i=0;i<strlen(a)-1;i++){
		for (int j=i+1;j<=strlen(a)-1;j++)
			if (a[i]>a[j])
				sum++;
	}
	return sum;
}

void bubbleSort (int nxs[],char ch[][20]){
	int i,j,temp;
	char leap[MAX][20];  
	for(i = 0; i < MAX-1; i++)       
		for(j = 0; j < MAX-1-i; j++)      
			if(nxs[j]>nxs[j+1]){       
				temp=nxs[j];
		        nxs[j]=nxs[j+1];      
				nxs[j+1]=temp; 
				strcpy(leap[0],ch[j]);
				strcpy(ch[j],ch[j+1]);
				strcpy(ch[j+1],leap[0]);   
			} 
}
int main (void){
	char ch[MAX][20];
	for(int i=0;i<MAX;i++)
		cin.getline(ch[i],20);
	int nxs[MAX];
	for(int i=0;i<MAX;i++)
		nxs[i]=getRev(ch[i]);
	bubbleSort(nxs,ch);
	for(int i=MAX-1;i>=0;i--)
		cout<<ch[i]<<" "<<nxs[i]<<endl;
	return 0;
}


