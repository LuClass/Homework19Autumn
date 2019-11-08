#include<iostream>
using namespace std;
int main() {
	int a[21] = {}, k = 0,i = 0;
	for (;;) {
		int w = 0; k = 0;
		for (int j=0 ,c=22; k < 21; k++) {
			for (int k2=0; k2 < 21;k2 ++) {
				if (a[k2] == 4)continue;
				else { j++; c = k2; }
			}
			if (j == 1) { cout <<"±àºÅ£º"<< c+1; goto stop; }
			if ((a[k] + 1) % 5 == 0)continue;
			a[k] = i;
			i++;
			if (i % 5 == 0)i = 0;
			w += a[k];
		}
		for (auto y : a)
			cout << y << ' ';
		cout << endl;
	}
	stop:
		return 0;
}
