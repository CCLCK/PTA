#define _CRT_SECURE_NO_WARNINGS 1



//
//int main()
//{
//	int t;
//	char ch;
//	cin >> t >> ch;
//	int n = 0;
//	while ((2*n*n-1) <= t)
//	{
//		n++;
//	}
//	n--;
//	int total = n + n - 1;
//	int ans = t-2*n*n+1;
//	int j = 0;
//	for (int i = 0; i<n; i++)
//	{
//		int ttmp = i;
//		while (ttmp--)
//		{
//			cout << " ";
//		}
//		int tmp = j;
//		while (tmp < 2*n-1)
//		{
//			cout << ch;
//			tmp++;
//		}
//		j += 2;
//		cout << endl;
//	}
//	for (int i = 1; i < n ; i++)
//	{
//		int ttmp = n-1-i;
//		while (ttmp--)
//		{
//			cout << " ";
//		}
//		int tmp = 0;
//		while (tmp <(2 * i + 1))
//		{
//			tmp++;
//			cout << ch;
//		}
//		cout << endl;
//	}
//	cout << ans << endl;
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int a[15];
//int main()
//{
//	char ch[1005];
//	cin >> ch;
//	int len = strlen(ch);
//	for (int i = 0; i < len; i++)
//	{
//		a[ch[i] - '0']++;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (a[i])
//		{
//			cout << i << ":" << a[i] << endl;
//
//		}
//	}
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	cout <<"Celsius = "<< (5 * (n - 32) / 9) << endl;
//
//	return 0;
//}

//
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//typedef long long ll;
//ll a[1005][2];
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		ll tmp,m,n;
//		cin >> tmp;
//		cin >> m;
//		cin >> n;
//		a[m][0] = tmp;
//		a[m][1] = n;
//	}
//	int x;
//	cin >> x;
//	while (x--)
//	{
//		int index;
//		cin >> index;
//		cout << a[index][0] << " " << a[index][1] << endl;
//	}
//	return 0;
//}


#include<iostream>
using namespace std;

bool func(int x)
{
	for (int i = 2; i*i <= x; i++)
	{
		if (x%i == 0)
		{
			return false;
		}
	}
	return true;

}

char a[1005];
int main()
{
	int x;
	cin >> x;
	int max = 1;
	int start = 2;
	int flag = 0;
	if (func(x))
	{
		cout << "1" << endl;
		cout << x << endl;
		return 0;
	}
	else
	{
		for (int i = 2; i <=x; i++)
		{
			int cnt = 0;
			int n = 1;
			int tmp=i ;
			while (n < x)
			{
				n = n*tmp;
				if (n<=x&&x%n == 0)
				{
					cnt++;
				}
				else
				{
					break;
				}
				if (cnt>max)
				{
					flag = 1;
					start = i;
					max = cnt;
				}
				tmp++;
			}
		}
	}
	if (flag==0)
	{
		while ((x % start) != 0)
		{
			start++;
		}
	}
	cout << max << endl;
	for (int i = 0; i < max-1; i++)
	{
		cout << start<<"*";
		start++;
	}
	cout << start << endl;
	return 0;
}



