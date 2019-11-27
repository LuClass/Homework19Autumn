#include<iostream>
#include<string.h>
#define MAX 3 
using namespace std;
int getRev(char a[]){
	int n=0,i,j;
	int m = sizeof(a)-1;
	for(i=0;i<m-1;i++){
		for(j=i+1;j<m-1;j++){
			if(a[i]>a[j]) n++;
		}
	} 
	return n;
} 
int main()
{
	char a[MAX][21]={"daabec","acbbad","cdabec"};
	int b[MAX];
	int i,j;
	for(i=0;i<MAX;i++){
		b[i]=getRev(a[i]);
//		cout << b[i] <<endl;
	}
	for(i=0;i<MAX-1;i++){
		for(j=0;j<MAX-1-i;j++){
			if(b[j]>b[j+1]){
				int temp;
				char ctemp[21];
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
				strcpy(ctemp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],ctemp);
				
			}
		}
	}
	for(i=0;i<MAX;i++){
		cout << a[i] <<' '<<b[i]<<endl;
	} 

    return 0;
 }

