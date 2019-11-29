#include<iostream>
using namespace std;

int main(){
    int x;
	int sum=0;
    cin>>x;
    for(int i=1;i<x;i++){
        if(x%i==0)
            cout<<i<<' ';
    }
    cout<<endl<<endl;
	cout<<"ÍêÈ«Êý:"<<endl;
    for(int i=1;i<=100;i++){
        for(int j=1;j<i;j++){
            if(i%j==0)
                sum+=j;
        }
        if(sum==i){
        	cout<<i<<endl;
		} 
        sum=0;
    }
    return 0;
}
