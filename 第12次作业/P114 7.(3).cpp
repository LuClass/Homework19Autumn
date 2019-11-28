#include <iostream>
using namespace std;
int getSet(int rs[],const int a[],int n){
	int num=0;
	int count[n]; 
	rs[0]=a[0];
	for(int i=1;i<n;i++){
		int leap=1;
		for(int c=num;c>=0;c--){
			if(a[i]==rs[c])
				leap=0;		
		}
		if(leap==1){
			num++;
			rs[num]=a[i];
		}
	}
	cout<<"rs={";
	for(int i=0;i<=num;i++)
		cout<<rs[i]<<" ";
	cout<<"}"<<endl;
	
	for(int i=0;i<=num;i++){
		int k=0;
		for(int j=0;j<n;j++){
			if(rs[i]==a[j])
				k++;
		}
		count[i]=k;
	}
	cout<<"各元素出现的次数为{";  
	for(int i=0;i<=num;i++)
		cout<<count[i]<<" ";
	cout<<"}"<<endl;

	int b,c,minValue,minIndex,temp,leap; 
	for(b=0; b<num;b++){
		minValue=rs[b];
		minIndex=b;				
		for(int c=b+1;c<=num;c++){
			if(minValue>rs[c]){
				minValue=rs[c]; 
				minIndex=c;
			}
		}
		if(b!= minIndex){
			temp = rs[b];
			rs[b] = rs[minIndex]; 
			rs[minIndex] = temp;
			leap=count[b];
			count[b]=count[minIndex];
			count[minIndex]=leap;
		}
		cout<<rs[b]<<":"<<count[b]<<endl;	
	}
	cout<<rs[num]<<":"<<count[num]<<endl;
}

void fuction(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<endl;
}

int main (void){
	int rs[15],a[15],n,m;
	cout<<"a数组的元素个数 ";
	cin>>n;
	cout<<"a数组为："; 
	fuction(a,n);
	getSet(rs,a,n);
	return 0;
}
