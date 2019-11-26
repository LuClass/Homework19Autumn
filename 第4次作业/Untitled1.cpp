#include <iostream>
using namespace std;
int main(){
	int count=0;
	char ch=0;
	do{ch=cin.get();
	if(ch>='0'&&ch<='9')
	count++;
	}while(ch!='\n');
	cout<<"count="<<count<<endl;
	return 0;
}
