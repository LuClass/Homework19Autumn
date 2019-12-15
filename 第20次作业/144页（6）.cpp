#include<iostream>
#include<string.h>
using namespace std;
int getRev(char *a){
 	int s=0;
 	for(int i=0;a[i];i++){
 		for(int j=i+1;a[j];j++){
 			if(a[i]>a[j])
 			s++;
 		}
 	}
 	return s;
 }
 struct MAX{
 	char *max;
 };
 void del(MAX *tb, int n){
 	for(int i=0; i<n; i++){
 		delete [] tb[i].max;
 	}
 	delete []tb;
 }

 int main(){
 	int n= 0,temp;
 	char t[20];
 	cin>>n;
    const int x=n;
    getchar();	
 	int count[x];
 	MAX * ta = new MAX[n];
 	for ( int i = 0; i < n; i++){
 		ta[i].max=new char[20];
 		cin.getline(ta[i].max,20);
 	}	
 for(int i=0;i<n;i++){
 	count[i]=getRev(ta[i].max);
 }
 for(int i=0;i<n-1;i++){
 	for(int j=0;j<n-i-1;j++){	
 	if(count[j]>count[j+1]){
 		temp=count[j];
 		count[j]=count[j+1];
 		count[j+1]=temp;
 		strcpy(t,ta[j].max);
 		strcpy(ta[j].max,ta[j+1].max);
 		strcpy(ta[j+1].max,t);
 	}
 }
 }
 for(int i=0;i<n;i++){
 	cout<<count[i]<<"  "<<ta[i].max<<endl;
 }
 del(ta,n);
 	return 0;
 }
