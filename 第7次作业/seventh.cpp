//(2)
#include <iostream>
using namespace std;

int main() {
	long int i;
	int bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
	//scanf("%ld", &i);
	cin >> i;
	cin.get();
	bonus1 = 100000 * 0.1;
	bonus2 = bonus1 + 100000 * 0.75;
	bonus4 = bonus2 + 200000 * 0.5;
	bonus6 = bonus4 + 200000 * 0.3;
	bonus10 = bonus6 + 400000 * 0.15;
	int flag = 0;
	if (i <= 100000)			//0
		flag = 0;
	else if (i <= 200000)		//1
		flag = 1;
	else if (i <= 400000)		//2 3
		flag = 2;
	else if (i <= 600000)		//4 5
		flag = 4;
	else if (i <= 1000000)		//6 7 8 9
		flag = 6;
	else						//10
		flag = 10;
	//cout << int(i/100001) << endl;
	switch (flag)
	{
	case 0:
		bonus = i * 0.1;
		break;
	case 1:
		bonus = bonus1 + (i - 100000) * 0.075;
		break;
	case 2:
	case 3:
		bonus = bonus2 + (i - 200000) * 0.05;
		break;
	case 4:
	case 5:
		bonus = bonus4 + (i - 400000) * 0.03;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
		bonus = bonus6 + (i - 600000) * 0.015;
		break;
	default:
		bonus = bonus10 + (i - 1000000) * 0.01;
		break;
	}
	//printf("bonus=%d", bonus);
	cout << "bonus=" << bonus;
	//getch();
	cin.get();
	return 0;
}

//(13)
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int i, j, k, n;
	//printf("'water flower'number is:");
	cout << "'water flower'number is:";
		for (n = 100; n < 1000; n++)
		{
			i = n / 100;/*分解出百位*/
			j = n / 10 % 10;/*分解出十位*/
			k = n % 10;/*分解出个位*/
			if (i * 100 + j * 10 + k == i * i * i + j * j * j + k * k * k)
				//printf("%-5d", n);
				cout << setw(5) << setiosflags(ios::left)  << n;
		}
	cin.get();
	return 0;
}

//(16)
#include <iostream>
using namespace std;

int main() {
		int a, b, num1, num2, temp;
		//printf("please input two numbers:\n");
		//scanf("%d,%d", &num1, &num2);
		cout << "please input two numbers:\n" << endl;
		cin >> num1 >> num2;
		if (num1 < num2)/*交换两个数，使大数放在num1上*/
		{
			temp = num1;
			num1 = num2;
			num2 = temp;
		}
		a = num1; b = num2;
		while (b != 0)/*利用辗除法，直到b为0为止*/
		{
			temp = a % b;
			a = b;
			b = temp;
		}
		//printf("gongyueshu:%d\n", a);
		//printf("gongbeishu:%d\n", num1 * num2 / a);
		cout << "gongyueshu:" << a << endl;
		cout << "gongbeishu:" << num1 * num2 / a << endl;
		cin.get();
		return 0;
}

//(23)
#include <iostream>
using namespace std;

int main() {
	int x, y;		//x rows,y columns;
	cin >> x >> y;
	int count = 0;
	/*
	5 5
*****
 *****
  *****
   *****
	*****

	*/
	for (int i = 0; i < x; i++) {
		for (int k = 0; k < count; k++)cout << " ";
		for (int j = 0; j < y; j++) {
			cout << "*";
		}
		cout << endl;
		++count;
	}
	return 0;
}


