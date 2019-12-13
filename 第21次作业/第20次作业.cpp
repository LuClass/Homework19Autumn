#include <iostream>
using namespace std;
static int num=0;
int* getNum (char* a){
	int *b=new int[20];
	for(int i=0;i<20;i++){
		*b=0;
	}
	for (int i=0; *(a+i) ; i++ ){
		if (*(a+i)>='0'&&*(a+i)<='9'){
			b[num]=b[num]*10+(*(a+i)-48);
			if(*(a+i+1)<='0'||*(a+i+1)>='9'){
				num++;
				b[num]=0;
			}
		}
	}
	//for (int i=0;i<num;i++)
	//	cout<<b[i]<<" ";
	return b;
}


int main (){
	char a[20];
	int* b;
	cin.getline(a,20);
	b=getNum(a);
	for (int i=0;i<num;i++)
		cout<<b[i]<<" ";
	return 0;
}
