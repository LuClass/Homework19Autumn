#include<iostream>
using namespace std;
#include<string.h>
char qiu(char k[6][15]){
	int f[6];
	for(int s=0;s<6;s++){
		f[s]=1;
		for(int e=0;e<s;e++){
			if(strcmp(k[e],k[s])==0){
				s++;
			}
		}
		for(int d=s+1;d<6;d++){
		if(strcmp(k[s],k[d])==0){
			f[s]++;
		
		}
	
}	cout<<k[s]<<" "<<f[s]<<endl;
	
}




return 1;
}

int main(){
	char a[6][15];
for(int m=0;m<6;m++){
	cin.getline(a[m],15);
	}
	qiu(a);
	return 0;	
}
