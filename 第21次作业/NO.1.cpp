#include<iostream>
using namespace std;
int main()
 {string str;
	getline(cin,str);
	unsigned long len = str.length();
	int *b = new int [len/2+1];
	int tmp = 0,index=0;
	bool isget = false;
	for(int i=0; i<len; ++i) {
		if(str[i]>='0'&&str[i]<='9') {
			tmp = tmp*10 + str[i]-'0';
        	isget = true;
			if(i!=len-1) continue;
		}
		if(isget) {
			b[index++] = tmp;
			tmp = 0;
			isget = false;
		}
	}
	cout<<index<<endl;
	for(int i=0; i<index; ++i) {
		cout<<b[i]<<" ";
	}
	return 0;
}
