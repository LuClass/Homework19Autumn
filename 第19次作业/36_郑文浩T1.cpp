#include<iostream>
#include<algorithm>
#define MAX 5
using namespace std;
int getRev(char *a){
	char *aa;
	int sum=0;
	while(*a!=0&&*(a+1)!=0){
		aa=a;
		while(*aa!=0){
			if(*a>*aa){
				sum++;
			}
			aa++;
		}
		a++;
	}
	return sum;
}  
bool Compare(char *s1,char *s2){
	return getRev(s1)<getRev(s2);
}
 
int main(){
	char *temp;
	char a[MAX][20];
	for(int i=0;i<MAX;i++){
		cin.getline(a[i],20);
	}
	char *aa[MAX];
	for(int i=0;i<MAX;i++){
		aa[i]=a[i];
	}
	sort(aa,aa+MAX,Compare);  
	for(int i=0;i<MAX;i++){
		cout << *(aa+i) << "   "<< getRev(*(aa+i)) << endl;
	}
}
