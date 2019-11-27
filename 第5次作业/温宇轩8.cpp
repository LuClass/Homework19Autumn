#include<iostream>
using namespace std;
#include <iomanip> 

int main(void){
	int i,j,k;
	cout<<"\n";
	for(i=1;i<10;i++)
	{
		for(j=1;j<i;j++)
		{
			k=i*j;
			cout<<" "<<j<<"*"<<i<<"="<<setw(2)<<k;
			
		}
		cout<<endl;
	
	}
}


