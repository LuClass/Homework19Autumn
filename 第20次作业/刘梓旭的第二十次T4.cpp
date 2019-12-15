#include<iostream>
#include<string.h>
#include <iomanip>
using namespace std;
struct node{
	char*str;
	int num;
};
void sort(node*s,int n){
	char *temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(s[j].str,s[j+1].str)>0){
				temp=s[j].str;
				s[j].str=s[j+1].str;
				s[j+1].str=temp;
			}
		}
	}
}
node* count(node* ss,int n){
	for(int i=0;i<n;i++){
		ss[i].num=0;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(ss[i].str,ss[j].str)==0){
				ss[i].num+=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(ss[j].num<ss[j+1].num){
				int tmp=ss[j].num;
				ss[j].num=ss[j+1].num;
				ss[j+1].num=tmp;	
				char *temp=ss[j].str;
				ss[j].str=ss[j+1].str;
				ss[j+1].str=temp;
			}
		}
	}	
	for(int i=0;i<n-1;i++)
	 {if(i==0)
	  cout<<ss[i].str<<ss[i].num<<" ";
	  else{int x=1;
	  for(int n=0;n<i;n++)
	         {if(strcmp(ss[i].str,ss[n].str)==0)
                x=0;
	         }
	         if(x)
	         cout<<ss[i].str<<" "<<ss[i].num<<" ";
	  } 

}
	return ss;
}

int main(){
	cout<<"请输入要计算的串数 n: ";
	int n;cin>>n;
	cout<<"请输入要计算的字符串"<<endl;	
	node* table=new node[n];
	for(int i=0;i<n;i++){
		table[i].str=new char[20];
		cin>>table[i].str;
	}
	///////////////////////////	
	cout<<"按串内容进行排序结果："<<endl;
	sort(table,n);
	for(int i=0;i<n;i++){
		cout<<table[i].str<<endl;
	}
	//////////////////////////
	cout<<"按串重复次数降序结果："<<endl;
	count(table,n);	
	
	for(int i=0;i<n;i++){
		delete []table[i].str;
	}
	delete []table;	
}

