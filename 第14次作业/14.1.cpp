
#include<iostream>
#include<math.h>
using namespace std;
struct ET{
	int a;
	int b;
	int c;
	int d;
};
ET f(int a, int b, int c){
	ET e = { a,b,c,b * b - 4 * a * c };
	return e;
}
int main(){
	int a, b, c;
	cout << "输入a,b,c:";
	while(cin >> a >> b >> c){
	
	ET e = f(a, b, c);
	if (e.d < 0)
		cout << "无实数解" << endl;
	else if (e.d == 0)
		cout << (double)-e.b / 2 / e.a << endl;
	else
		cout << (double)(-e.b + sqrt(e.d)) / 2 / e.a << ", " << (double)(-e.b - sqrt(e.d)) / 2 / e.a ;
	return 0;
}

}
