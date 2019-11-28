#include<iostream>
#include<algorithm>
using namespace std;
void sort_by_con(char* s[], int n)
{
	char* temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(s[j], s[j+1]) < 0)
			{
				temp = s[j + 1];
				s[j + 1] = s[j];
				s[j] = temp;
			}
		}
	}
}

void sort_by_times(char* s[], int n)
{
	char* rs[10];
	int times[10];
	int rs_index = 0;
	bool equ = true;
	fill_n(times, 10, 0);
	rs[0] = s[0];
	times[0] = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= rs_index; j++)
		{
			if (strcmp(s[i], rs[j]) == 0)
			{
				equ = false;
				times[j]++;
				break;
			}
		}
		if (equ == true)
		{
			rs_index++;
			rs[rs_index] = s[i];
			times[rs_index] = 1;
		}
		equ = true;
	}
	char* temp;
	int temp1;
	for (int i = 0; i < rs_index; i++)
	{
		for (int j = 0; j < rs_index - i; j++)
		{
			if (times[j] < times[j + 1])
			{
				temp1 = times[j];
				times[j] = times[j + 1];
				times[j + 1] = temp1;
				temp = rs[j];
				rs[j] = rs[j + 1];
				rs[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i <= rs_index; i++)
		cout << rs[i] << ":" << times[i] << "次" << endl;
}

int main()
{
	int n;
	cin >> n;
	char* s[10];
	char temp[10][20];
	for (int i = 0; i < n; i++)
	{
		cin >> temp[i];
		s[i] = temp[i];
	}
	cout << endl << "按出现次数排序" << endl;
	sort_by_times(s, n);
	cout << endl;
	cout << "按内容排序" << endl;
	sort_by_con(s, n);
	for (int i = 0; i < n; i++)
		cout << s[i] << endl;
	return 0;
}