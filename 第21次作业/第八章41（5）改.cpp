#include<bits/stdc++.h>
#define max 10000
using namespace std;
int main(){
	char a[max];
	int b[max];
	int i,count,j=0;
	cin.getline(a,max);
	char *x=a;
	int reverse( int number );
	while(*x++){
		count=0;
		i=0;
		if(*x>='1'&&*x<='9'){
			while(*x>='1'&&*x<='9'){
				count++;
				x++;
		}
		for(int k=1;k<=count;k++){
			i+=pow(10,k-1)*(*(x-k)-'0');
		}
		j++;
		b[j]=i;			
		}
	}
	for(int k=1;k<=j;k++){
		cout<<b[k]<<" ";
	}
}
