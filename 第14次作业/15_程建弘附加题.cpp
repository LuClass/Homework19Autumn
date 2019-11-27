/*
增加一道作业题，输入一个长度不超过50的字符串，
把其中的大写字母改为小写，然后分别输出修改之前的和修改之后的字符串。 
 不要使用string.h头文件
*/
#include<iostream> 
using namespace std;
void change(char s[]){
	for(int i=0;s[i];i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i]-=32;
		}
		else if(s[i]>='A'&&s[i]<='Z'){
			s[i]+=32;
		}
	}
}
int main(){
	char s[50];
	cin.getline(s,50);
	cout<<"修改前的字符串："<<endl;
	cout<<s<<endl;
	change(s);
	cout<<"修改后的字符串："<<endl;
	cout<<s<<endl;
}
/*测试数据
asf sdgsdvs w wef sdf ds sd w reg re gregreg
*/ 
