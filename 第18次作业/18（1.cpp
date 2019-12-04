#include <iostream>
using namespace std;
char * strcatch(char * a, const char * b)
{
	int i;
	for (i = 0; *(a+i) != '\0'; i++)
	{



	}
	for (int j = 0; *(a+j) != '\0'; j++, i++)
	{
		*(a + i) = *(b + j);


	}
	*(a + i) = '\0';
	return a;
}
int main()
{
	char a[20], b[20];
	cin.getline(a, 20);
	cin.getline(b, 20);
	cout << strcatch(a, b);

}
