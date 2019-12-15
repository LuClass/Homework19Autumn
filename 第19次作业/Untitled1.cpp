#include <iostream>
#include <string.h>
using namespace std;
#define MAX 5
int getRev (char a[20]){
	int count=0;
	for (int i=0;*(a+i+1);i++){ 
		for (int j=i+1;*(a+j);j++)
			if (*(a+i)>*(a+j))	count++; 
	}
	return count;
}

void bubbleSort (int b[],char a[][20]){
	int temp1;
	char temp2[1][20];
	for (int i=0;i<MAX-1;i++)	
		for (int j=0;j<MAX-i-1;j++)
			if (b[j]>b[j+1]){
				temp1=b[j];		strcpy(temp2[0],a[j]);
				b[j]=b[j+1];	strcpy(a[j],a[j+1]);
				b[j+1]=temp1;	strcpy(a[j+1],temp2[0]);
			} 
}

int main (){
	char a[MAX][20];					//MAX=5
	int b[MAX];							//用来存储每个字符串的逆序数 
	for (int i=0;i<MAX;i++)
		cin.getline(*(a+i),20);			//输入五个字符串 
	for (int i=0;i<MAX;i++)
		b[i]=getRev(*(a+i));				//grtRev函数是求逆序数的函数，我这里想拿出第一行的整个字符串作为函数的参数。
										//也就是对第一个字符串的每一个字符进行比较。我原本不用指针的时候代码是对的
										//我不知道如何用指针来表示这个东西 
	bubbleSort(b,a);
	for(int i=0;i<MAX;i++)
		cout<<a[i]<<"   "<<b[i]<<endl;
	return 0; 
}
