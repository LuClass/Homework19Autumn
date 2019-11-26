#include<iostream>
using namespace std;

void change(int& x,int& y){
	int t;
	if(x<y){
		t = x;
		x = y;
		y = t;
	}
	return;
}

int Mcd(int x,int y){
	int t;
	while(x%y!=0){
		t = x % y;
		x = y;
		y = t;		
	}
	return y;
}

int Mcm(int x,int y,int z){
	
	return x*y/z;
}
int main(void){
	int x,y;
	cout<<"x = ";
	cin>>x;
	cout<<"y = ";
	cin>>y;
	change(x,y);
	int mcd,mcm;
	mcd = Mcd(x,y);
	mcm = Mcm(x,y,mcd);
	cout<<"Maximum Common multiple = "<<mcm<<endl;
	cout<<"Minimum common divisor = "<<mcd;
	return 0;
	
} 
 
