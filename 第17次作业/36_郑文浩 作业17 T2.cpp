#include<iostream>
#include<cstring>
using namespace std;
int main(int argc,char ** argv){
	char *temp;
	for(int i=1;i<argc;i++){
		cout << "argv["<<i << "]:" << argv[i] << " ";
	}
	cout << endl;	
	cout << "°´ÉýÐòÅÅÁÐ:" << endl;
	for(int i=1;i<argc-1;i++){
		for(int j=1;j<argc-1;j++){
			if(strcmp(argv[j],argv[j+1])==1){
			   temp=argv[j];
			   argv[j]=argv[j+1];
			   argv[j+1]=temp;	
			}
		}
	}
	for(int i=1;i<argc;i++){
		cout << "argv["<<i << "]:" << argv[i] << " ";
	}		
} 
