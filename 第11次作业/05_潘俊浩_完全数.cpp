#include<iostream>
using namespace std;
bool iswanshu(int n){
	int i;
	int m;
	int sum=0;
	if(n==1) sum=1;
	else
	{
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum+=i;
			}
		}
	}
	if(sum==n) return true;
	else return false;	
}
int main()
{
	int i,j;
	cin >> i >> j;
	for(int n=i;n<=j;n++){
		if(iswanshu(n)){
			cout << n <<endl;
		}
	}


    return 0;
 }

