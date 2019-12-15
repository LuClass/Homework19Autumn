#include<iostream>
#define MAX 5 
using namespace std;
int getRev(char *a);
void outRev(char *a[], int n);
int getWordCount(char *a);

int getRev(char *a){
	char*a1 = a;
	int count = 0;
	while(*a1){
		char*a2=a1+1;
		while(*a2){
			if(*a1>*a2) count++;
			a2++;
		}
		a1++;
	}
	return count;
}

void outRev(char *a[], int n){
	int count[n];
	for(int i=0;i<n;i++)
		count[i]=getRev(a[i]);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(count[j]>count[j+1]){
				swap(a[j], a[j+1]);
				swap(count[j], count[j+1]);
			}
		}		
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<':'<<count[i]<<endl; 
}
int getWordCount(char *a){
	char *a1 = a;
	int count;
	if(*a==' ') 
		count=0;
	else 
		count =1;
	while(*a1){
		char *a2 = a1+1;
		if(*a1==' '&&*a2!=' '&&*a2!=0)
			count++;
		a1++;
		a2++;
	}
	return count;
}

int main()
{
	//(6)ÄæÐòÊý 
	char a[MAX][20] = {"EAABEC", "SDFGZXC", "SDFZVV", "XCASD", "ABCDE"};
	char *a1[MAX];
	for(int i=0;i<MAX;i++) a1[i]=a[i];
	outRev(a1, MAX);
	//(8)µ¥´ÊÊý 
	char b[] = "  I am    Iron   MAN    ";
	cout<<getWordCount(b)<<endl;
}
