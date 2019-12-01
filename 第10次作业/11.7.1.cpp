#include <iostream>
using namespace std; 
int number(int a[],int n){
int i,j;
for( i=0,j=0;i<=n;i++)
if(a[i]==1)
j++;
return j;
}
int main (void){
	int a[20];
	for(int i=0;i<=20;i++){
		a[i]=1;
	}
	
	for(int i=0,j=0;number(a,20)!=1;i++){
		if(a[i]==1)
		j++;
		if(j==5){
			j=0;
			a[i]=0;
		}
		if(i==20)
		i=0;
	}
	
	for(int j=0;j<=20;j++){
	if(a[j]==1)
	cout<<j+1<<endl;}
	return 0;

}
