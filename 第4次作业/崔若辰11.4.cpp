#include<iostream>
using namespace std;

int main() 
{
	int sum=0;
	char ch;
	while(ch=cin.get()) {
		if(ch=='\n'){
		    break;
		} 
        else if(ch>='0'&&ch<='9'){
	        sum++;
    } 
  }
  cout<<"输入数字字符的个数为： "<<sum;
  return 0;
}
