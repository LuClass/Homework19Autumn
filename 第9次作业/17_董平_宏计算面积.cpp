#include <bits/stdc++.h>
#define execution(a,b,c) sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c))
using namespace std;
int main(){
	double a,b,c;
	cin >> a >> b >> c;
	cout << execution(a,b,c);
    return 0;
 }
