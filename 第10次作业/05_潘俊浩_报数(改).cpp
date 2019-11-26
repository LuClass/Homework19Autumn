#include<iostream>
using namespace std;
int main()
{
	int k=21;
	int a[21]={0};
	int i=0,n=0;
	while(1){
		if(i>20) i=0;
		if(k==1&&a[i]==0) break;
		if(a[i]==0) n++;
		if(n==5){
			a[i]=1;
			n=0;
			k--;
//			cout << i<<endl; 
		}
		i++;		
	}
    cout << i+1;

    return 0;
 }

