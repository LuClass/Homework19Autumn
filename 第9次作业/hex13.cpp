#include<iostream>
using namespace std;


 void toHex(int x)
{
	 int t, k = 0;
	 char a[8];

	 while (x != 0) {
		 t = x % 16;
		 if (t < 10) { a[k] = t + 48; }
		 else { a[k] = t + 55; }
		 k++;
		 x /= 16;
	 }
	 for (int i = k - 1; i >= 0; i--) {
		 cout << a[i];
	 }
}