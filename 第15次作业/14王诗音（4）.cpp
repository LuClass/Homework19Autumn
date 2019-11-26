#include<iostream>
using namespace std;
enum Way{percent,grade};
struct Course{
	char id[20],name[20];
	Way w;
};
struct Score{
	char sid[20],name[10],cid[20];
	union score{
		int p;
		char g;
	}s;
};
int main()
{
	return 0;
}
