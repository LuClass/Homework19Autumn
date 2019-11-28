#include<iostream>
#include<math.h>
using namespace std;

bool is_prime_number(int x){
	 int m = sqrt(x);
	 for(int i=2;i<=m;i++){
	 	if(x%i==0){
	 		return false;
		 }
	 }
	 return true;	
}

int main(){
	int k=0;
	for(int i=2;i<=500;i++){
		if(is_prime_number(i)){
			if(is_prime_number(i+2)){
				cout<<i<<"ºÍ"<<i+2<<"	";
				k++;
				if(k==5){
					cout<<endl;
					k=0;
				}
			}
		}
	}
	return 0;
}
