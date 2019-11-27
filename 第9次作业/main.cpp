<<<<<<< HEAD
using namespace std;
#include <iostream>
#include "max.cpp"
#include "hex.cpp"
int max(int ,int );
void toHex(int );
int main()
{
	int x,y;
	cin>>x>>y;
	toHex(max(x,y));
}

=======
#include <iostream>
#include "max.cpp"
#include "hex.cpp"
using namespace std;
int main()
 {
	int a,b,x;
	cin >> a >> b;
	x = max(a,b);
	toHex(x);	
	return 0;
}
>>>>>>> ff801329c1e2834d9f9ec5e466b8ec36463d9bad
