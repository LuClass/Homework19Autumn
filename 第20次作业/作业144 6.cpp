#include <iostream>
using namespace std;
#include <string.h>
const int m=20;
struct Row{
	int num;int *rope;
};
int getRev(char* a){
	int count=0;char*temp;
	for (;*a;a++){
		for(temp=a;*temp;temp++)
		if (*a>*temp) count++;
	}
	return count;
}  
void print(Row*tb,int row){
	const int ro=row;
	int s[ro];char b[ro][m];
	for (int i=0;i<ro;i++){
		char a[m]={0};
		for(int j=0;j<tb[i].num;j++){
		a[j]=tb[i].rope[j];
	} 
	 s[i]=getRev(a);
	 strcpy(b[i],a);
}

char temp[m];int tem;
for (int i=0;i<ro;i++)
for (int j=0;j<ro-i;j++)
if (s[j]>s[j+1]){
	tem=s[j];s[j]=s[j+1];s[j+1]=tem;
	strcpy(temp,b[j]);strcpy(b[j],b[j+1]);strcpy(b[j+1],temp);
}
	for (int i=0;i<row;i++) cout<<s[i]<<" ";cout<<endl;
	for (int j=0;j<row+1;j++) cout<<b[j]<<" ";

}
void del(Row*tb,int row){
	for(int i=0;i<row;i++){
		delete [] tb[i].rope;
	}
	delete[]tb;
}
int main(){
	int i,j,MAX=0;
	cin>>MAX;
	Row *table=new Row[MAX];
	for (i=0;i<MAX;i++){
		int num=0;cin>>num;
		table[i].rope=new int [num];
		table[i].num=num;
		for (j=0;j<num;j++){
	    char k='\0';cin>>k;
		table [i].rope[j]=k;}
	}
	print(table,MAX);
	del(table,MAX);
	}
	

