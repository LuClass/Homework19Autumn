#include<iostream>
using namespace std;
void test(int n){
	if(n%10!=0){
		cout << n%10;
		n = n/10;
		test(n);
	}
} 
int main()
{
	int n;
	cin >> n;
	test(n);


    return 0;
 }

