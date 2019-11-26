//11(1)
#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	int s[32];
	int flag = 0;
	while(flag<32){
		s[flag++]=a&1;
		a=a>>1;
	}
	while(flag--){
		cout << s[flag];
	}
	return 0;
}

//11(2)
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, root1, root2;
	cin >> a >> b >> c;
	double delta = b * b - 4 * a * c;
	if (delta < 0) {
		cout << "root don't exist." << endl;
	}
	else if (delta == 0) {
		root1 = -b / (2 * a);
		cout << "root1 equles root2 = " << root1;
	}
	else if (delta > 0) {
		root1 = (-b + sqrt(delta)) / (2 * a);
		root2 = (-b - sqrt(delta)) / (2 * a);
		cout << root1 << '\x20' << root2;
	}
	return 0;
}