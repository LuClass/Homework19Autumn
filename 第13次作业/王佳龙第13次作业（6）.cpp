#include <string.h>
#include <iostream>
#define MAX 4
using namespace std;
int getRev(char a[]){
    int count=0,n,temp,b[100];
    n=strlen(a);
    for(int j=0;j<n;j++)
    {for(int m=j+1;m<n;m++)
	{b[j]=a[j];
	b[m]=a[m];
	if(b[j]>b[m])
	count++;
   	}
	}
    return count;  	
}
int main(){
	char a[20],c[1];
cout << "输入数组a" << endl;
	cin.getline(a,20);
	cout<<endl<<"a的逆序数是"<<getRev(a)<<endl;
    char b[MAX][20],d[MAX];
   cout << "依次输入MAX个字符串" << endl;
 for(int i=0;i<MAX;i++){
    cin.getline(b[i],20);
    d[i]=getRev(b[i]);
    }
for(int i=0;i<MAX;i++){
for(int j=i+1;j<MAX;j++){
if(d[i]>=d[j]){
strcpy(c,b[i]);
strcpy(b[i],b[j]);
strcpy(b[j],c);
}
}
}
for(int i=0;i<MAX;i++)
cout <<b[i]<<endl;
}
    
    
    
