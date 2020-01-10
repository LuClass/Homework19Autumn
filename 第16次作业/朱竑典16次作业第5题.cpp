	/*输入一个字符串，串内有数字和非数字字符，
	如： abc2345  345rrf678  jfkld945 将其中连续的数字作为一个整数，依次存放到一个整型数组中。
	如对于以上的输入，将 2345 存放到 b[0]， 345 放入 b[1]，...。
	统计出字符串中的整数个数，并输出这些整数*/

#include <iostream>
#include <string.h>
using namespace std;
int main ( ){
	char a[100];
	cin.getline(a,100);
	const char * pa=a;
    //int	num=strlength(pa);
	int i=0,j=0,b[100];
	for (;*(pa+i);i++){
		int sum=0; 
		while (*(pa+i)>='0'&&*(pa+i)<='9'){
			sum=sum*10+(*(pa+i)-'0');
			i++;	
		}
		if (sum!=0) b[j++]=sum;
	}
	cout<<"字符串中整数的个数为"<<j<<endl;
	cout<<"分别是:"<<endl;
	cout<<'\t';
	for (int k=0;k<j;k++)
		cout<<b[k]<<" ";
	return 0;
}
