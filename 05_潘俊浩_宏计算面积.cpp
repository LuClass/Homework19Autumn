#include<iostream>
#include<math.h>
#define Surface(a,b,c) sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c))
using namespace std;
int main()
{
	double a,b,c;
	cin >> a >> b >> c;
	cout << Surface(a,b,c);
	


    return 0;
 }

