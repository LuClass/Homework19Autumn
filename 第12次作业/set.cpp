#include <iostream>
using namespace std;
const int n=8;
int getSet (int rs[],const int a[],int n){
	int i=1,p=1,w;
	rs[0]=a[0];
	for (;i<n;i++){
		for (int j=0;j<i;j++){
			if (a[j]==a[i])	w=i;
			}
			if (i!=w){
			rs[p]=a[i];  
			p++;}
	}
return p;
} 
void makeRandom(int data[],int n){
	srand(time(NULL));
	for (int i=0;i<n;i++)
	data [i]=rand() %100;
}
int main (){
	int rs[n],a[n],i=0;
	makeRandom (a,n);
	cout<<getSet (rs,a,n)<<endl;
	for (int k=0;k<getSet (rs,a,n);k++)
    cout<<rs[k]<<" ";
}
