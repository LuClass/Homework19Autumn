#include<iostream>
using namespace std;
int main(){
	int n,m,result=0; 
    cout<<"输入总人数：";
	cin>>n;
	cout<<endl<<"输入游戏所需数:"; 
	cin>>m;
	for(int i=2;i<=n;i++)
	result=(result+m)%i;
    cout<<"最后一个人编号为"<<result+1<<endl;
}

