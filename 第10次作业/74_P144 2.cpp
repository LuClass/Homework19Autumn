#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;
void getRandom(int data[], int n){	
srand(time(NULL));	
 for(int i= 0;i<n;i++)		
    data[i]=rand()%100;
}
int getarray(int data[], int n){
	for(int i=0;i<n;i++){
		cout<<data[i]<<" ";
		}
	}
int getmax(int data[],int n){
    int temp;
    int j;
    for (j=0;j<n-1;j++){
    if (data[j]>data[j+1]){
    		temp=data[j];		
    	    data[j+1]=data[j];
    		data[j+1]=temp;	
    		}
    }
    return data[j];
    }
int main(){
    	int b[10];
    	int y;
    	int result;
    	getRandom(b,10);
        getarray(b,10);
        cout<<endl;
        result=getmax(b,10);
    	cout<<result;
    	return 0;
}

