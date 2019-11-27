/*
(4)孪生素数是相差为 2 的一对素数。如 3 和 5， 5 和 7， 11 和 13。 
设计一个程序，求出 500 之内所有孪生素数
*/ 

#include<iostream>
#include<iomanip>
using namespace std;
int prime[501],pNum=0;
bool p[501]={0};

void FindPrime(){
	for(int i=2;i<501;i++)
		if(p[i]==false){
			prime[pNum++]=i;
			for(int j=i+i;j<501;j+=i)
				p[j]=true;
		}
}
int main() {
	int n;
	FindPrime();
	cout<<"500以内的所有孪生素数: "<<endl;
	int num=0;	
	for(int i=0;i<pNum;i++){
		if(prime[i+1]-prime[i]==2){
			cout<<setw(3)<<prime[i]<<"和"<<setw(3)<<prime[i+1]<<" ";
			num++;
		}
		if(num%5==0){
			cout<<endl;
			num+=1;
		}	
	}
}
