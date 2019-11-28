#include <iostream>
using namespace std;
#include <string.h>

void bubbleSort(char * strs[], int n){		
	char *temp;
	for(int i = 0; i < n-1; i++)				
		for(int j = 0; j < n-i-1; j++)
			if(strcmp(strs[j], strs[j+1]) > 0){
				temp = strs[j];				
				strs[j] = strs[j+1];
				strs[j+1] = temp;
			}
}
int main (){
int n,count=1,k=0;cin>>n;char t[10][20];char *a[]={t[0],t[1],t[2],t[3],t[4],t[5],t[6],t[7],t[8],t[9]};int c[100];
for (int i=0;i<n+1;i++){
		cin.getline(t[i],20);
		strcpy(a[i],t[i]);
	}
bubbleSort(a,n);
for (int i=0;i<n+1;i++)
	cout<<a[i]<<endl;
	for (int i=0;i<n+1;i++){
		count=1;
		for (int j=i;j<n+1;j++){
		if (strcmp(a[i],a[j])==0)
		count ++;}
	c[k]=count;
	k++;}
		int p, q, temp;char *b;
	for(p = 0; p < n-1; p++)//外层循环控制总轮次
		for(q = 0; q < n-1-p; q++)//内层循环比较次数
			if(c[q] > c[q+1]){	//是否要交换
			b= a[q];				
				a[q] = a[q+1];
				a[q+1] = b;
			}
			cout<<endl<<" 次数降序"<<endl;
			 for (int i=0;i<n+1;i++)
	cout<<a[i]<<endl;
			
}

