#include<iostream>
#include<math.h>
using namespace std;
int lifanghe(int n){
	int sum=0;
	while(n!=0){
		sum=sum+pow(n%10,3);
		n=n/10;
	}
	return sum;
}
int main()
{
	int i,j;
	cin >> i >> j;
	int n;
	n=i;
	for(;n<=j;n++){
		if(n==lifanghe(n)) cout << n <<endl;
	} 


    return 0;
 }

