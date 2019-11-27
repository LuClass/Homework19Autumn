#include<iostream>
using namespace std;
int main(){
	char str[51],str_cpy[51];
	cin.getline(str, 51);
	int i=0;
	while(str[i]!=0){
		str_cpy[i]=str[i];
		if(str[i]>=65&&str[i]<=90)
			str[i]=str[i]+32;
			i++;
	}
	cout<<str_cpy<<endl;
	cout<<str<<endl;
	return 0;
}

