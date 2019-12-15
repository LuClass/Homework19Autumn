#include<iostream>
#include<string.h>
using namespace std;
struct Row{
	int num;
	char *str;
};
int getRev(char a[]){
	int len=strlen(a);
	int num=0;
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if(a[i]>a[j]){
				num++;
			}
		}
	}
	return num;
}
int main(){
	int MAX;cin>>MAX;
	Row*table =new Row[MAX];
	for(int i=0;i<MAX;i++){
		table[i].str=new char[20];	
		cin>>table[i].str;
		table[i].num=getRev(table[i].str);
	}
	for(int i=0;i<MAX-1;i++){
		for(int j=i;j<MAX;j++){
			if(table[i].num>table[j].num){
				int temp=table[i].num;
				table[i].num=table[j].num;
				table[j].num=temp;
				char s[20];
				strcpy(s,table[i].str);
				strcpy(table[i].str,table[j].str);
				strcpy(table[j].str,s);
			}
		}
	}
	for(int i=0;i<MAX;i++){
		cout<<"ÄæÐòÊý: "<<table[i].num<<" ×Ö·û´®£º" <<table[i].str<<endl;
	}
	for(int i=0;i<MAX;i++){
		delete []table[i].str;
	}
	delete []table;
} 
