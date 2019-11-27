/*
(8)设计一个程序，由 3 个文件组成，一个文件main.cpp 包含main 函数，
第 2 个文件max.cpp 包含一个函数max(int, int)，
第 3 个文件 hex.cpp 包含一个函数 toHex(int x)将形参 x 显示为十六进制。
建立各文件，然 后建立一个多文件项目，输入任意两个整数，求出最大值并以十六进制形式显示。 
如果不配置多文件项目，如何更改程序使之能构建运行？
*/ 
/*
(8)设计一个程序，由 3 个文件组成，一个文件main.cpp 包含main 函数，
第 2 个文件max.cpp 包含一个函数max(int, int)，
第 3 个文件 hex.cpp 包含一个函数 toHex(int x)将形参 x 显示为十六进制。
建立各文件，然 后建立一个多文件项目，输入任意两个整数，求出最大值并以十六进制形式显示。 
如果不配置多文件项目，如何更改程序使之能构建运行？
*/ 
#include <iostream>
using namespace std;
//#include"max.cpp"
//#include"hex.cpp"
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
void toHex(int x){
	while(x!=0){
		int i=(x%16);
		if(i>=0&&i<10){
			cout<<i;
		}
		else{
			cout<<(char)('A'+i-10);
		}
		x/=16;
	}
}
int main() {
	cout<<"请输入两个整数"<<endl;
	int x,y;
	cin>>x>>y;
	cout<<"十六进制形式显示的最大值"<<endl;
	toHex(max(x,y));
	return 0;
}

