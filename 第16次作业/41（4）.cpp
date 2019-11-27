#include<iostream>
#include<string.h>
using namespace std;
void s(char (*k)[20],int n){
	char *a;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(strcmp(k[j],k[j+1])>0)
			strcpy(a,k[j]);
		    strcpy(k[j],k[j+1]);
			strcpy(k[j+1],a);
		}
}
for(int i=0;i<n;++i){
	     cout<<k[i]<<endl;
        }
}
int main(){
	int n;
	char k[10][20];
	cin>>n; 
	getchar();
	for(int i=0;i<n;i++){
		cin.getline(k[i],20);	
	}
	s(k,n);
	return 0;
}


