using namespace std;
#include<iostream>
#include <string.h>
const int m=20;
struct Row{
	int num;
	int * rowp;
};

void print(Row*tb,int row){
	const int ro=row;
	int s[ro];char b[ro][m];char c[ro][m];
	for (int i=0;i<ro;i++){
		char a[m]={0};
		for(int j=0;j<tb[i].num;j++){
		a[j]=tb[i].rowp[j];
	} 
	 strcpy(b[i],a);strcpy(c[i],a);
}
char temp[m];int k=0;
for (int i=0;i<ro;i++)
for (int j=0;j<ro-i;j++)
if (strcmp(b[j],b[j+1])>0){
	strcpy(temp,b[j]);strcpy(b[j],b[j+1]);strcpy(b[j+1],temp);
}
cout<<" 字典序排列 "; 
for (int i=0;i<row;i++) cout<<b[i]<<"  ";
cout<<endl;
for (int i=0;i<row+1;i++){
	int count=1;
	for (int j=i;j<row+1;j++)
	if (strcmp(c[i],c[j])==0) count++;
	s[k]=count;k++;
}
for (int i=0;i<ro;i++)
for (int j=0;j<ro-i;j++)
if (s[j]>s[j+1]){
	strcpy(temp,c[j]);strcpy(c[j],c[j+1]);strcpy(c[j+1],temp);
}
cout<<" 按出现次数降序排列 ";
for (int i=0;i<row;i++) cout<<c[i]<<" "; 
}
void del(Row *tb, int row){
	for(int i = 0; i < row; i++){
		delete [] tb[i].rowp;
	}
	delete []tb;
}
int main(){
	int i, j, row = 0;
	cin>>row;int n=row;
	Row * table = new Row[row];
	for (i = 0; i < row; i++){
		int num = 0;
		cin>>num;
		table[i].rowp = new int[num];
		table[i].num = num;
		for (j = 0; j < num ; j++){
			char k='\0';cin>>k;

			table[i].rowp[j] = k;
		}
	}
	print(table, row);
	del(table, row);
}

