#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	char a[n][50];
	void rank(char * strs[], int m);
	cin.get();
	for(i=0;i<=n-1;i++){
		cin.getline(a[i],50);
	}
	char *b[n];
	for(i=0;i<=n-1;i++){
		b[i]=a[i];
	}
	rank(b,n);
}
void rank(char * strs[], int m){
	const int n=m;
	int count[n]={0},flag[n],k=0;
	char *temp,x;
	int i,j;
	for(i=0;i<=m-1;i++){
			flag[i]=1;
		for(j=0;j<=i-1;j++){
			if(strcmp(strs[i],strs[j])==0){
				flag[i]=0;
				break;
			}
		}
	}
	for(i=0;i<=m-1;i++){
		if(flag[i])
			k++;
	}
	for(i=0;i<=m-1;i++){
		if(flag[i]==1){
			for(j=i;j<=m-1;j++){
				if(strcmp(strs[i],strs[j])==0){
					count[i]++;
				}
			}
		}
	}
	for(i=0;i<m-1;i++){
		for(j=0;j<m-i-1;j++){
			if(count[j]>count[j+1]){
				temp = strs[j];				
				strs[j] = strs[j+1];
				strs[j+1] = temp;
				x=count[j];
				count[j]=count[j+1];
				count[j+1]=x;
			}	
		}
	}
	for(i=m-1;i>=m-k;i--){
		cout<<strs[i]<<" : "<<count[i]<<endl;
	}
}



