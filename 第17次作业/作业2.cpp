#include <iostream>
#include <string.h>
using namespace std;
const int n=8;
void bubbleSort(char *a[],int n){
	char *temp;
	for (int i=0;i<n;i++){
	for (int j=0;j<n-1-i;j++)
	if (strcmp(a[j],a[j+1])>0){
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
}
}
int main(int argc,char *argv[]){
	bubbleSort(argv,n);
	for (int i=0;argv[i];i++)
	cout<<argv[i]<<" ";
}
