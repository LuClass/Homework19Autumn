/*
2 编写一个程序，在命令行可输入多个字符串，对上述字符串按升序排列输出。
*/ 
#include<iostream>
#include<string.h>
using namespace std;
void sort(char *str[],int n){
	char *temp;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(strcmp(str[j],str[j+1])>0){
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
}
int main(int argc,char * argv[]){
	sort(argv,argc-1);
	cout<<"排序结果为："<<endl;
	for(int i=1;i<argc;i++){
		cout<<argv[i]<<endl;
	}
	system("pause");
	return 0;
} 
