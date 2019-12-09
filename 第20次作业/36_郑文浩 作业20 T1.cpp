#include<iostream>
#include<cstring>
using namespace std;
struct Row{
	int len;
	char *rowp;
};
int getRev(char *s){
	int sum=0;
	int len=strlen(s);
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if(s[i]>s[j]){
				sum++;
			}
		}
	}
	return sum;
}
void dele(Row* tb,int max){
	for(int i=0;i<max;i++){
		delete [] tb[i].rowp;
	}
	delete []tb;
}
void print(Row *tb,int max){
	for(int i=0;i<max;i++){
		cout << tb[i].rowp <<" "<<"ÄæÐòÊý:"<<getRev(tb[i].rowp) << endl;
	}
	cout << endl;
}
void toUp(Row *tb,int max){
	char *temp;
	for(int i=0;i<max;i++){
		for(int j=0;j<max-1;j++){
			if(getRev(tb[j].rowp)>getRev(tb[j+1].rowp)){
				temp=tb[j].rowp;
				tb[j].rowp=tb[j+1].rowp;
				tb[j+1].rowp=temp;
			}
		}
	} 
}
int main(){
	int max=0;
	cin >> max;
	Row *tb=new Row[max];
	for(int i=0;i<max;i++){
		char temp[20];
		cin>>temp;
		tb[i].len=strlen(temp);
		tb[i].rowp =new char[tb[i].len+1];
		for(int j=0;j<tb[i].len+1;j++){
			tb[i].rowp[j]=temp[j];
		}
	}
	cout << endl;
	print(tb,max);
	toUp(tb,max);
	print(tb,max);
	dele(tb,max); 
}

