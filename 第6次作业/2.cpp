#include <iostream>
using namespace std;
double W(int n,int k){

	double m;
	int i,j,l,a=1,b=1,c=1; 
	for(i=1;i<=n;i++){
		a*=i;}
	for(j=1;j<=k;j++){
		b*=j;}
	for(l=1;l<=(n-k);l++){
		c*=l;}
	m=a/(b*c);
	return m;
}
	
int main (){
	int x,y;
	double z;
	cin>>x>>y;
	z=W(x,y);
	cout<<z<<endl;
	return 0;
}
