#include <iostream>
using namespace std;
int main ()
{
	int n,i,j=4;
	for(n=1;n<=4;n++){
		for(i=1;i<=j;i++){
			if(i<=n-1){cout<<" ";}
			else cout<<"*";}
		j++;
		cout<<endl;	
	}
	return 0;
}
