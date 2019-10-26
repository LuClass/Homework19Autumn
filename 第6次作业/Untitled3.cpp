#include<iostream>
using namespace std;
int main(){
    int i,x;
    cout<<"x="<<"";
    cin>>x;
    int k = 0;
    for (i = 2; i <= x; i++){
	if (k == 0 && x%i == 0){
	cout<<x<< "=" << i;
    x /= i;
    k = 1;
    }
    while(x%i == 0)
    {
    cout <<"*" << i;
    x /= i;
    }
    }
}
