#include<iostream>
#include<string.h>
using namespace std;
const int x=5;
 void f(char *argv[],int x){
 	char *p;
 	for(int i=0;i<x-1;i++)
 		for(int j=0;j<x-1-i;j++){
 			if(strcmp(argv[j],argv[j+1])>0){
 				p=argv[j];
 				argv[j]=argv[j+1];
 				argv[j+1]=p;
 			}
 		}
 }
 int main(int argc,char *argv[])
 {
    f(argv,x);
    for(int i=0;i<x;i++)
    cout<<argv[i]<<" ";
    return 0;
 }
