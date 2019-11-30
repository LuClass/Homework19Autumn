#include <iostream>
using namespace std;
int main (){
	int m,n,i,j,leap=1;
	for(n=3;n<=500;n++){
		for(i=2;i<n;i++){
			if(n%i==0){
				 leap=0;
			 	  break;}}
		if(leap==1){
			m=n;
			n+=2;
			for(j=2;j<n;j++){
				if(n%j==0){
					leap=0;
				 	break;}}
			if(leap==1){
				cout<<m<<","<<n<<endl;}}
		leap=1;}
	return 0;
}
