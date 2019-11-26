2.
#include<iostream>
using namespace std;
float number(int n,int k){
	int a=1,b=1,i;
	for(i=n-k+1;i<=n;i++)
	   a*=i;
	for(i=1;i<=k;i++)
	   b*=i;
	return a/b; 
}
int main()
{
	cout << number(4,2)<<endl;
	cout << number(6,4)<<endl;
	cout << number(8,7)<<endl;
	      
 }
 
4.
#include <iostream>
using namespace std;
bool sushu(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
	if(n%i==0)
	return false;
	return true;
	
	
}
int main()
{
	cout<<"ÂÏÉúËØÊý£º";
    int i,j=0;
    for(i=3;i<=497;i++)
    {
	if(sushu(i))	
	  if(sushu(i+2))
	  {j++;
	  cout<<i<<"ºÍ"<<i+2<<' '; 
	  if(j%5==0)
	  cout<<endl;
      }
	}
    return 0;	
}

5.
#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	cout<<x<<"=";
	while(x!=1){
		for(int i=2;i<=x;i++){
			if(x==i){
				cout<<i;
				x/=i;
				break;
			}
			if(x%i==0){
				cout<<i<<"*";
				x/=i;
				break;
			}
		}
	}
} 
