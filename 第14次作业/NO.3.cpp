#include <iostream>
#define n 51
using namespace std;
char text[n];
void convert(char data[]){
	int i=0;
	while (data[i]!=0){
		if (data[i]<=90&&data[i]>=65) 
			data[i]=data[i]+32;
		i++; 
	}
}
int main(){
	cin.get(text,n);
	cout<<text<<endl;
    convert(text);
    cout<<text;
}
