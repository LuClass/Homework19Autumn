#include <iostream>
using namespace std;
#define MAX 20
const int n=7;
#include <string.h>
int getRev (char a[]){
	int count=0;
	for (int i=0;a[i];i++){
		for (int j=i+1;a[j];j++){
			if (a[i]>a[j])
			count++;
		}
	}
	return count;
}
int main (){
	char s[MAX][21]={"DAABEC","taylor swift","1433223","CHINA","GAY"};
	int b[MAX];
	int temp;
	char tem[MAX];
	for(int i=0;i<MAX;i++)
	b[i]=getRev(s[i]);
	for (int j=0;j<MAX-1;j++)
	for (int k=0;k<MAX-1-j;k++)
	if (b[k]>b[k+1]){
		temp=b[k];
		b[k]=b[k+1];
		b[k+1]=temp;
		strcpy(tem,s[k]);
		strcpy(s[k],s[k+1]);
		strcpy(s[k+1],tem);
	}
	for(int i=0;i<MAX;i++)
		cout<<s[i]<<" ";
		cout<<endl;
	for(int i=0;i<MAX;i++)
	cout<<b[i]<<" ";
}
