using namespace std;
#include <iostream>
int factorial(int m){
	if(m==0)
	{
		return 1;
	}
	else
	{
		int sum=1;
		for(int i=1;i<=m;i++)
		{
			sum*=i;
		}
		return sum;
	}
}
int C(int n,int k){
	int total=0;
	total=factorial(n)/(factorial(k)*factorial(n-k));
	return total;	
} 
int main(){
	cout<<C(4,2)<<" "<<C(6,4)<<" "<<C(8,7);
	return 0;
}
