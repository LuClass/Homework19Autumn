#include<iostream>
using namespace std;
#define MAX 5
#include<string.h>
#include<math.h>
int getRev(char* a){
	int num = 0;
	int len = strlen(a);
	for(int i=0;i<len;i++){
		for(int j = i+1;j<len;j++){
			if(a[i]>a[j]){
				num++;
			}
		}
	}
	return num;
}

int main(){
	char** str;
	for (int i = 0; i < MAX; i++) {
		str = (char**)malloc(MAX * sizeof(char*));
	}
	for(int i=0;i<MAX;i++){
		str[i] = (char*)malloc(20*sizeof(char));
	}
	int num[MAX];
	for(int i=0;i<MAX;i++){
		cin.getline((str[i]), 20);
	}
	for(int i=0;i<MAX;i++){
		num[i] = getRev(str[i]);
	}	
	cout<<endl;
	int be_min = -1;
	int min;
	for(int i=0;i<MAX;i++){
		 min = 0x7fffffff;
		 for(int j=0;j<MAX;j++){
		 	if(min>num[j]&&be_min<num[j]){
		 		min = num[j];
			 }
		 }
		 be_min = min;
		 for(int z = 0;z<MAX;z++){
		 	if(num[z] == min){
		 		cout<<(str[z])<<": "<<num[z]<<endl; 
			 }
		 }
	}
	for (int i = 0; i < MAX; i++) {
		free(str[i]);
	}
	free(str);
	system("pause");
	return 0;
} 
