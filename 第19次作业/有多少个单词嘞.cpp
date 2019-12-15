/*编写一个函数：int getWordCount(char a[])，统计字符串a中的单词个数，单词之间用一个空格或tab符仅提交函数。*/ 

#include <iostream>
using namespace std;
int getWordCount (char* a) {
	int num=0;
	for (int i=0;*(a+i);i++)
		if (*(a+i)!=' '){
			for (int j=i;*(a+j)!=' ';j++,i++);
			num++;
		}
		return num;
}

int main ( ){
	char a[100];
	cin.getline(a,100);
	cout<<getWordCount(a)<<endl;
	return 0;
}
