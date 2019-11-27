
#include<iostream>
using namespace std;
int main(){
	char a[50];
	cin.getline(a, 50);
	for (int i = 0; a[i]; i++)
		cout << a[i];
	cout << endl;
	for (int i = 0; a[i]; i++){
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] = a[i] + 32;
		cout << a[i];
	}
	cout << endl;
	return 0;
}
