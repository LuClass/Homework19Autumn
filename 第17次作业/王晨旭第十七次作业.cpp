
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
	cout<<"ÉýÐò£º"<<endl;
	for(int i=1;i<argc;i++){
		cout<<argv[i]<<endl;
	}
	system("pause");
	return 0;
} 

