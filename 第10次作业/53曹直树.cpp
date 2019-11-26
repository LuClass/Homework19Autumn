#include <iostream>
#include <stdlib.h>
using namespace std;
const int n=6;
void getRandom (int data[], int n){
	srand (time (NULL));
	for (int i=0;i<n;i++)
	data[i]=rand()%100;}
int getMax (const int a[], int n) {
	int j,p=0;
	for (j=1;j<n;j++){
	if (a[p]<a[j]){
	p=j;
	}
	}
	cout<<"最大值下标是"<<p<<endl;
	cout<<"最大值为"<<a[p];}
int main ()
{
	int a[n],i;
	cin>>i;
	getRandom (a,n);
	for (auto i : a){
		cout<<i<<" ";
}
cout<<endl;
getMax(a,n);
}//2
#include <iostream>
using namespace std;
int f(int a){
	int count=0;
	for(int i=1;a/i>0;i*=10)
	count +=(a/i)%10;
	return count;
}
int g(int b){
	for (int k=2;k<=b;k++){
	if (b%k==0)
	b=k;
	continue;}
	return b;
	}
int h(int c){
	int count=0;
	for (;c>=g(c);c/=g(c)){
	if (c==1)
	break;
	count +=f(g(c));
}
	return count;
}
bool isSmith(int a){
	if (h(a)==f(a))
	cout<<"It is Smith";
	if (h(a)!=f(a))
	cout<< "Not Smith";
}
int y(int d){
	for (int i=4937774;i<=10000000;i++)
	if (h(i)==f(i)){
	cout<<"The next Smith which is greater than 4937774 is"<<i;
	break;}
}
int isPrime(int x){
	for (int i=2;i*i<=x;i++)
	if (x%i==0)
	return 0; 
	return 1;
}
int input(int a){
	while (cin>>a){
	if (isPrime(a)==0){
	isSmith(a);
	cout<<endl;
	y(a);
	cout<<endl;}
	else
	cout<<"error"<<endl;
	}
}
	
int main(){
	int a;
input (a);
	return 0;
}//5
#include<iostream>
using namespace std;
int main()
{int i,j,s=21,k=0,a[21];
for (i=0;i<21;i++)
a[i]=i+1;
while(1)
  {
        for (i=0;i<21;i++)
        if (a[i]!=0)
       {   k++;
            if (k%5==0)
            {a[i]=0;s--;}
       }
        if(s==1)
          break;
  }
   for (i=0;i<21;i++)
   if (a[i]!=0)
   cout<<i+1;
}//10
		