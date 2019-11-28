#include<string>
using namespace std;
const string toHex(int x){
int y=0;
string s="";
if(x==0){
    return 0;
}
while(x>0){
	y=x%16;
	if(y<10)
	s=char('0'+y)+s;
	else
	s=char('a'-10+y)+s;
	x=x/16;
}
    return s;
    
}
