#include<iostream>
using namespace std;
#include<algorithm>
#include<string.h>
int main(int argc, char* argv[]) {
	sort(argv + 1, argv + argc - 1, [](auto str1, auto str2)
	{if (strcmp(str1, str2) < 0) {
		return true;
	}
	else
	{
		return false;
	} });
	for_each(argv + 1, argv + argc - 1, [](auto str) {cout << str<<endl; });
}