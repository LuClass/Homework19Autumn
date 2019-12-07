#include<iostream>
#include<cstring>
using namespace std;
struct Row{
	int len;
	char *rowp;
}; 
int repeat(char *s,Row* tb,int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(strcmp(s,tb[i].rowp)==0) count++;
	}
	return count;
}
void print(Row *tb,int n){
	for(int i=0;i<n;i++){
		cout << tb[i].rowp <<" "<<"ÖØ¸´´ÎÊý:"<<repeat(tb[i].rowp,tb,n) << endl;
	}
	cout << endl;
}
void dele(Row *tb,int n){
	for(int i=0;i<n;i++){
		delete [] tb[i].rowp;
	}
	delete []tb;
}
void toDown(Row *tb,int n){
	char *temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(repeat(tb[j].rowp,tb,n)<repeat((tb[j+1].rowp),tb,n)){
				temp=tb[j].rowp;
				tb[j].rowp=tb[j+1].rowp;
				tb[j+1].rowp=temp;
			}
		}
	}
}
int main(){
	int n;
	cin >> n;
	Row *tb=new Row[n];
	for(int i=0;i<n;i++){
		char temp[20];
		cin>>temp;
		tb[i].len=strlen(temp);
		tb[i].rowp =new char[tb[i].len+1];
		for(int j=0;j<tb[i].len+1;j++){
			tb[i].rowp[j]=temp[j];
		}
	}
	cout << endl;
	print(tb,n);
	toDown(tb,n);
	print(tb,n);
}
