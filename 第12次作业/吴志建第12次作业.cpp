#include<iostream>
#include<algorithm>
using namespace std;

int getSet(int rs[], const int a[], int n)    //得到集合数组并返回集合数组中的元素个数
{
	rs[0] = a[0];
	int rs_index = 0;
	bool equ = true;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= rs_index; j++)
		{
			if (a[i] == rs[j])
			{
				equ = false;
				break;
			}
		}
		if (equ == true)
		{
			rs_index++;
			rs[rs_index] = a[i];
		}
		equ = true;
	}
	return ++rs_index;
}
void getSet2(int rs[], int times[], const int a[], int n)    //改进后得到集合数组和集合数组各元素的出现次数
{
	rs[0] = a[0];
	times[0] = 1;
	int rs_index = 0;
	bool equ = true;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= rs_index; j++)
		{
			if (a[i] == rs[j])
			{
				equ = false;
				times[j]++;
				break;
			}
		}
		if (equ == true)
		{
			rs_index++;
			rs[rs_index] = a[i];
			times[rs_index] = 1;
		}
		equ = true;
	}
}

void sort(int rs[], int times[], const int a[], int n)    //对出现次数降序排序并输出
{
	int m = getSet(rs, a, n);    //得到集合数组和元素个数
	getSet2(rs, times, a, n);    //得到出现次数数组
	int temp;
	for (int i = 0; i < m - 1; i++)    //冒泡排序
	{
		for (int j = 0; j < m - 1 - i; j++)
		{
			if (times[j] < times[j + 1])
			{
				temp = times[j];
				times[j] = times[j + 1];
				times[j + 1] = temp;
				temp = rs[j];
				rs[j] = rs[j + 1];
				rs[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < m; i++)
		cout << rs[i] << ":" << times[i] << endl;
}

int main()    //测试函数
{
	int a[8] = { 3,1,2,3,1,5,2,1 };
	int rs[100], times[100];
	fill_n(rs, 100, 0);
	fill_n(times, 100, 0);
	cout << getSet(rs, a, 8) << endl;
	sort(rs, times, a, 8);
	return 0;
}