#include<iostream>
#include<cstring>
using namespace std;

struct Row
{
	int length;
	char* rowp;
};

void del(Row* tb, int row) {
	for (int i = 0; i < row; i++) {
		delete[] tb[i].rowp;
	}
	delete[]tb;
}

void sort_by_content(Row* tb, int row)
{
	Row temp = { 0,NULL };
	for (int i = 0; i < row - 1; i++)
	{
		for (int j = 0; j < row - 1 - i; j++)
		{
			if (strcmp(tb[j].rowp, tb[j + 1].rowp) < 0)
			{
				temp = tb[j];
				tb[j] = tb[j + 1];
				tb[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < row; i++)
		cout << tb[i].rowp << endl;
}

int main()
{
	int row;
	cin >> row;
	Row* table = new Row[row];
	for (int i = 0; i < row; i++)
	{
		int length;
		cin >> length;
		table[i].length = length;
		table[i].rowp = new char[length];
		for (int j = 0; j < length; j++)
		{
			char c;
			cin >> c;
			table[i].rowp[j] = c;
		}
	}
	sort_by_content(table, row);
	del(table, row);
	return 0;
}
