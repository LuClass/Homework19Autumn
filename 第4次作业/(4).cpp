#include <iostream>
using namespace std;
int main(void){

int n=0;
char x=0;
do{
	x=cin.get();
	if(x>='0'&&x<='9')
	n=++n;
}while(x!='\n');
cout<<"n="<<n<<endl;
return 0;
}
