#include<iostream>
using namespace std;
int get_length(int n)
{
	int leng=0;
	while(n)
	{
		n/=10;
		leng++;
	}
	return leng;
}
bool ishuiwen(int n){
	int len;
	len = get_length(n);
	int a[20];
	for(int i=1;i<=len;i++){
		a[i]=n%10;
		n=n/10;
	}
	 
	for(int i=1;i<=len/2;i++){
		if(a[i]==a[len-i+1]) {
			cout << a[i] << "=" << a[len-i+1] <<endl;
			continue;
		}
		else return false;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	if(ishuiwen(n)) cout << "Yes";
	else cout << "No";


    return 0;
 }

