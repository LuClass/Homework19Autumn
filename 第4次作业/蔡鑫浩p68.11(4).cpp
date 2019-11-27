#include <iostream>
using namespace std;
int main()
{
 	int a;
 	char k;
 	for(a=0;(k=getchar())!='\n';){
 		if(k<='9'&&k>='0'){
 			a++;
		}
	 }
	 cout<<a;
return 0;
}
