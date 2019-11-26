using namespace std;
#include <iostream>
int main(void)
{
	char c;
	int digit=0;
    while((c=getchar())!='\n')
    {
	if(c>='0'&&c<='9')
          digit++;
    }
    cout<<"digit="<<digit;
	return 0;
}
