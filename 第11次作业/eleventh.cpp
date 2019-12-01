//(1)
#include <iostream>
#include <string>
using namespace std;

inline long long binaryPow(long long p, long long q) {
	if (q == 0)return 1;
	long long ans = 1;
	while (q != 0) {
		if (q & 1) {
			ans *= p;
		}
		p *= p;
		q >>= 1;
	}
	return ans;
}

int main() {
	//This disables the synchronization between the C and C++ standard streams
	ios_base::sync_with_stdio(false);
	//This unties cin from cout. Tied streams ensure that one stream is flushed automatically before each I/O operation on the other stream.
	cin.tie(NULL);
	long long i, j;
	cin >> i >> j;
	for (i; i <= j; ++i) {
		string s = to_string(i);
		long long sLen = s.length();
		long long sum = 0;
		for (int k = 0; k < sLen; ++k) {
			sum += binaryPow((long long)s[k] - '0', sLen);
		}
		if (sum == i)cout << "Narcissistic number:" << i << endl;
	}
	return 0;
}



//(2)
//should consider overflow
bool isPalindromicNumber(int n) {
	if (n < 0 || (n%10 == 0 && n!=0))return false;
	if (n == 0)return true;
	int halfNum = 0;
	while (n > halfNum) {
		halfNum = halfNum * 10 + n % 10;
		n /= 10;
	}
	return n == halfNum || n==halfNum/10;
}
//0 ms solution,without any extra space(
//bool isPalindrome(int x)
//{
//	if (x < 0)
//		return false;
//	if (x / 1000000000 == 0)
//	{
//		if (x / 100000000 == 0)
//		{
//			if (x / 10000000 == 0)
//			{
//				if (x / 1000000 == 0)
//				{
//					if (x / 100000 == 0)
//					{
//						if (x / 10000 == 0)
//						{
//							if (x / 1000 == 0)
//							{
//								if (x / 100 == 0)
//								{
//									if (x / 10 == 0)
//									{
//										return true;
//									}
//									else
//									{
//										return x / 10 % 10 == x % 10;
//									}
//								}
//								else
//								{
//									return x / 100 % 10 == x % 10;
//								}
//
//							}
//							else
//							{
//								return x / 1000 % 10 == x % 10
//									&& x / 100 % 10 == x / 10 % 10;
//							}
//						}
//						else
//						{
//							return x / 10000 % 10 == x % 10
//								&& x / 1000 % 10 == x / 10 % 10;
//						}
//					}
//					else
//					{
//						return x / 100000 % 10 == x % 10
//							&& x / 10000 % 10 == x / 10 % 10
//							&& x / 1000 % 10 == x / 100 % 10;
//					}
//				}
//				else
//				{
//					return x / 1000000 % 10 == x % 10
//						&& x / 100000 % 10 == x / 10 % 10
//						&& x / 10000 % 10 == x / 100 % 10;
//				}
//			}
//			else
//			{
//				return x / 10000000 % 10 == x % 10
//					&& x / 1000000 % 10 == x / 10 % 10
//					&& x / 100000 % 10 == x / 100 % 10
//					&& x / 10000 % 10 == x / 1000 % 10;
//			}
//		}
//		else
//		{
//			return x / 100000000 % 10 == x % 10
//				&& x / 10000000 % 10 == x / 10 % 10
//				&& x / 1000000 % 10 == x / 100 % 10
//				&& x / 100000 % 10 == x / 1000 % 10;
//		}
//
//	}
//	else
//	{
//		return x / 1000000000 % 10 == x % 10
//			&& x / 100000000 % 10 == x / 10 % 10
//			&& x / 10000000 % 10 == x / 100 % 10
//			&& x / 1000000 % 10 == x / 1000 % 10
//			&& x / 100000 % 10 == x / 10000 % 10;
//	}
//}



//(3)
#include <iostream>
#include <cmath>
using namespace std;

//打表解法
//int range[-2147483648,+2147483647]
//Euclid proved that 2^(p−1）*(2^p − 1) is an even perfect number whenever 2^p − 1 is prime (Elements, Prop. IX.36).
//the the first 10 even perfect numbers
//6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128, 2658455991569831744654692615953842176
//191561942608236107294793378084303638130997321548169216
int ans[] = { 6,28,496,8128,33550336 };

//一般解法
bool isPerfectNum(const int n) {
	if (n <= 1)return false;
	int sum = 1;
	int sq = sqrt(n) + 1;
	for (int i = 2; i < sq; ++i) {
		if (n % i == 0) {
			sum += i + n / i;
		}
	}
	if (sum == n)return true;
	return false;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i, j;
	cin >> i >> j;
	for (i; i <= j; ++i) {
		if (isPerfectNum(i)) {
			cout << i << endl;
		}
	}
	return 0;
}
