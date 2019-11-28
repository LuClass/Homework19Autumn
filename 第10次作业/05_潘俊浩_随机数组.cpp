#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void getRandom(int a[], int n){
	srand((unsigned)time(0));
    for(int i = 0; i < n; i++)
		a[i] = rand() % 100;
}
int getmax(const int a[],int n){
	int max=0,flag=0;
	for(int i = 0; i < n; i++){
		if(a[i]>=max){
			max=a[i];
			flag=i;
		}
	}
	return flag;
	  
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	getRandom(a,n);
//	cout << a[0] << a[1] << a[2]; 
	cout << getmax(a,n);
	


    return 0;
 }

