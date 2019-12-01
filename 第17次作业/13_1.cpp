#include<iostream>
using namespace std;
#include<string.h>
#include<algorithm>
void transf(char* str){
	 int len = strlen(str);
	 for_each(str, str + len, [](auto& c) {if (c <= 'Z'&&c >= 'A') c += 32; });
}

int main(){
	char str[30];
	for (auto a : str) {
		cout << a;
	}
	cout << endl;
	cin.getline(str,30);
	transf(str);
	cout<<str;
	system("pause");
	return 0;
} 
