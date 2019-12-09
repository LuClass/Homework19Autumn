#include<iostream>
using namespace std;
int getRev(char *a);
void outRev(char *a[], int n);

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

void outRev(char *a[], const int n){
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

int main()
{
	int max = 5;
	//(6)ÄæÐòÊý 
	char (*a)[20] = new char [max][20];
	char *a1[max];
	for(int i=0;i<max;i++){ 
		cin.getline(a[i],20);
		a1[i] = a[i];
	}
	outRev(a1, max);
	delete a;
}
