#include<iostream>
using namespace std;
int main(){
	void part(int n);
	int x;
	cin>>x;
	cout<<x<<" = ";
	part(x);
}
void part(int n){
	int i;
	for(i=2;i<=n;i++)
    while(n!=i)
    {
      if(n%i==0)
      {
        cout<<i<<"*";
        n=n/i;
      }
      else
        break;
    }
    cout<<n;
    
}
