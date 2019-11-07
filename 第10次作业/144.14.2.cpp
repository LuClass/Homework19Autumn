#include<iostream>
#include<time.h>
#include<algorithm>
using namespace std;
void getRandom(int a[], int n);
int main() {
	int a[10] = {}, b[10] = {},w=0;
	getRandom(a, 10);
	for (int k = 0; k < 10; k++)b[k] = a[k];
	for (auto x : a)
		cout << x << '\t';
	sort(a,a+10);
	for (int k = 0; k < 10; k++)if (b[k] == a[9]) { w = k; break; };
	//auto it = find(b, b + 10, a[9]);
	cout << '\n'<<a[9]<<endl;
	cout << "�±꣺"<<w;
	return 0;
}
void getRandom(int a[], int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100;
	return;
}
