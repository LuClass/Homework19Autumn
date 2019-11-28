#include <bits/stdc++.h>
using namespace std;

double execution(double a,double b,double c){
	return sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c));
}

int main(){
	double a,b,c;
	cin >> a >> b >> c;
	cout << execution(a,b,c);
    return 0;
}
