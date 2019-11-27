#include<iostream>
using namespace std;
int getSet(int rs[],const int a[],int n);
void ggetSet(int rs[],const int a[],int n);
void gggetSet(int rs[],const int a[],int n);
int main(){
	const int n=8;
	int rs[n];
	const int a[n]={3,1,2,3,1,5,2,1};
	cout <<getSet(rs,a,n)<<endl;
	ggetSet(rs,a,n);
	cout <<endl;
	gggetSet(rs,a,n);
	return 0;
}
int getSet(int rs[], const int a[],int n){
    int counter = 0;
    bool Judge; 
    for(int i = 0;i < n;i++) { 
        Judge = true; 
        for(int j = 0;j < counter;j++){  
          if(a[i] == rs[j])
          Judge = false;
	    }
        if(Judge == true) 
	    rs[counter++] = a[i]; 
    }
  return counter; 
}
void ggetSet(int rs[],const int a[],int n) { 
    int counter = 0,cishu[n]; 
    bool flag; 
    for(int i = 0;i < n;i++) 
        cishu[i] = 0; 
    for(int i = 0;i < n;i++){ 
        flag = true; 
        for(int j = 0;j < counter;j++) { 
           if(a[i] == rs[j]) { 
           flag = false; 
           cishu[j]++; 
           } 
        } 
        if(flag == true){
           rs[counter] = a[i];
		   cishu[counter++]++; 
        } 
    }
    for(int i=0;i<counter;i++){
	    cout << rs[i]<< " ";
    }
    cout << endl;
    for(int i=0;i<counter;i++){
	    cout << cishu[i]<< " ";
    }
}
void gggetSet(int rs[],const int a[],int n) { 
    int counter = 0,cishu[n]; 
    bool flag; 
    for(int i = 0;i < n;i++) 
        cishu[i] = 0; 
    for(int i = 0;i < n;i++){ 
        flag = true; 
        for(int j = 0;j < counter;j++) { 
           if(a[i] == rs[j]) { 
           flag = false; 
           cishu[j]++; 
           } 
        } 
        if(flag == true){
           rs[counter] = a[i];
		   cishu[counter++]++; 
        } 
    }
    int temp1,temp2;
    for(int i=1;i<counter;i++){
    	for(int j=0;j<counter-1;j++){
    		if(cishu[j]<cishu[j+1]){
    			temp1=cishu[j+1];
    			cishu[j+1]=cishu[j];
    			cishu[j]=temp1;
    			temp2=rs[j+1];
    			rs[j+1]=rs[j];
    			rs[j]=temp2;
			}
		}
	}
	for(int i=0;i<counter;i++){
		cout <<rs[i]<<':'<<cishu[i]<<endl;
	}
}
    

