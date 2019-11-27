//第六次作业 36_郑文浩 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	unsigned C(unsigned,unsigned);          //P110页 T21(2) 
	cout << "C(4,2)=" << C(4,2)<< endl << "C(6,4)="<<C(6,4)<<endl<<"C(8,7)="<< C(8,7)<<endl;
	bool ZhiShu(int);
	cout << "500以内的孪生素数:";          //T21(4) 
	for(int j=1;j<=499;j+=2){
		if(ZhiShu(j)&&ZhiShu(j+2)){
			cout << j<<"和"<< j+2<< ' ';
		}
	}
	cout << endl;
	void Fen(unsigned x);              //T21(5)
	int x;
	cin >> x;
	cout << x<<'=';
	Fen(x);
	return 0;}
unsigned C(unsigned n,unsigned k){
	if(n==k||k==0)
	return 1;
	else return C(n-1,k)+C(n-1,k-1);
}
bool ZhiShu(int n){
	if(n==1)
	return false;
	else if(n==2||n==3)
	return true;
	else if(n%2==0)
	return false;
	else if(n>2){
	int j;
	for(j=2;j*j<=n;j+=1){
		if(n%j==0)
		return false;
		
	}
	if(j*j>n)
	return true;
	}
}
void Fen(unsigned x){
	if(ZhiShu(x))
	cout << x;
	else if(x==1)
	cout << ' ';
	else{
	for(int j=2;j<=x;j++){
		if(x%j==0){
			cout <<  j<< '*';
			return Fen(x/j);
		}
}
}
}
