#include<iostream>
using namespace std;
bool Number(char c){
	if(c>='0'&&c<='9'){
		return true;
	}
	else return false;
}
int CouNum(char *c){
	int count=0;
	while(*c){
		if(Number(*c)&&!Number(*(c+1)))
		count++;
		c++;
	}
	return count;
}
int main(){
	int max,len=0;
	cin >> max;
	char *a=new char[max];
	for(int i=0;i<max-1;i++){
		cin >> a[i];
	}
	a[max-1]='\0';
	cout << a << endl;
	char *b=a;
	cout << CouNum(b)<< endl;
	int *n=new int[CouNum(a)];
	int i=0;
	while(*b){
		int temp=0;
		while(Number(*b)){
			n[i]=10*temp+(int)(*b-48);
			temp=n[i];
			b++;
		}
		if(Number(*(b-1))) i++;
		b++;
	}
	for(int j=0;j<CouNum(a);j++){
		cout << n[j] << endl;
	}
}
