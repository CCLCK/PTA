#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int x, y;
//	cin >> x >> y;
//	int t;
//	cin >> t;
//	int cnta = 0;
//	int cntb = 0;
//	while (t--)
//	{
//		int a, aa, b, bb;
//		cin >> a >> aa >> b >> bb;
//		int sum = a + b;
//		if (sum == aa&&sum == bb)
//		{
//			continue;
//		}
//		if (sum != aa&&sum != bb)
//		{
//			continue;
//		}
//		if (sum == aa)
//		{
//			cnta++;
//			x--;
//		}
//		if (sum == bb)
//		{
//			cntb++;
//			y--;
//		}
//		if (x == -1)
//		{
//			cout << "A" << endl;
//			cout << cntb << endl;
//			return 0;
//		}
//		if (y == -1)
//		{
//			cout << "B" << endl;
//			cout << cnta << endl;
//			return 0;
//		}
//
//	}
//	
//	return 0;
//}

//#include<iomanip>
//#include<iostream>
//using namespace std;
//int a[105][1005];
//bool record[100005];
//int t;
//bool check(int x)//数组里 有没有这个数
//{
//	for (int i = 0; i < t; i++)
//	{
//		for (int j = 1; j <= a[i][0]; j++)
//		{
//			if (a[i][j] == x)//有这个数字
//			{
//				return true;
//			}
//		
//		}
//	}
//	return false;
//}
//bool check_repeat(int ans[],int len,int x)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (x == ans[i])
//		{
//			return true;
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	cin >> t;
//	int cnt = 0;
//	int n = t;
//	while (n--)
//	{
//		int x;
//		cin >> x;
//		if (x == 1)
//		{
//			int tmp;
//			cin >> tmp;
//			continue;
//		}
//		a[cnt][0] = x;
//		for (int i = 1; i <=x; i++)
//		{
//			int tmp;
//			cin >> tmp;
//			a[cnt][i] = tmp;
//		}
//		cnt++;
//	}
//	int cnt_find;
//	cin >> cnt_find;
//	int cnt_ans = 0;
//	while (cnt_find--)
//	{
//		int finded;
//		cin >> finded;
//		if (!check(finded))//这个数字是孤儿
//		{
//			if (record[finded] == 0)
//			{
//				if (!cnt_ans)
//				{
//					cout << setfill('0') << setw(5) << finded;
//				}
//				else
//				{
//					cout << " ";
//					cout << setfill('0') << setw(5) << finded;
//				}
//				cnt_ans++;
//				record[finded] = 1;
//			}			
//		}
//	}
//	if (cnt_ans == 0)
//	{
//		cout << "No one is handsome" << endl;
//	}
//	
//	return 0;
//}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//bool a[100005];
//int main()
//{
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		int n;
//		int tmp;
//		cin >> n;
//		if (n == 1)
//		{
//			cin >> tmp;
//			continue;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			a[tmp] = true;
//		}
//	}
//	int x;
//	cin >> x;
//	int flag = true;
//	while (x--)
//	{
//		int finded;
//		cin >> finded;
//		if (a[finded] == false)
//		{
//			if (flag)
//			{
//				cout << setfill('0') << setw(5) << finded;
//				flag = false;
//			}
//			else
//			{
//				cout << " ";
//				cout << setfill('0') << setw(5) << finded;
//			}
//		}
//		a[finded] = true;
//	}
//	if (flag)
//	{
//		cout << "No one is handsome" << endl;
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << "I'm gonna WIN!" << endl;
//	cout << "I'm gonna WIN!" << endl;
//	cout << "I'm gonna WIN!" << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	int cnt1 = 0;
//	int cnt2 = 0;
//	while (t--)
//	{
//		int tmp;
//		cin >> tmp;
//		if (tmp % 2 == 0)
//		{
//			cnt1++;
//		}
//		else
//		{
//			cnt2++;
//		}
//	}
//	cout << cnt2 << " " << cnt1 << endl;
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//bool ans[1005];
//int cnt[5];
//int main()
//{
//	memset(cnt, 0, sizeof(cnt));
//	char ch[10005];
//	ans['g'] = 1;
//	ans['p'] = 1;
//	ans['l'] = 1;
//	ans['t'] = 1;
//	ans['G'] = 1;
//	ans['P'] = 1;
//	ans['L'] = 1;
//	ans['T'] = 1;
//	cin >> ch;
//	int len = strlen(ch);
//	for (int i = 0; i < len; i++)
//	{
//		if (ans[ch[i]])
//		{
//			if (ch[i] == 'g' || ch[i] == 'G')
//			{
//				cnt[1]++;
//			}
//			if (ch[i] == 'p' || ch[i] == 'P')
//			{
//				cnt[2]++;
//
//			}
//			if (ch[i] == 'l' || ch[i] == 'L')
//			{
//				cnt[3]++;
//
//			}
//			if (ch[i] == 't' || ch[i] == 'T')
//			{
//				cnt[4]++;
//			}
//		}
//	}
//	int mmin = INT_MAX;
//	int mmax = INT_MIN;
//	for (int i = 1; i <= 4; i++)
//	{
//		mmin = min(mmin, cnt[i]);
//		mmax = max(mmax, cnt[i]);
//	}
//	int x = mmin;
//	while (x--)
//	{
//		cout << "GPLT";
//	}
//	for (int i = 1; i <= 4; i++)
//	{
//		cnt[i] -= mmin;
//	}
//	mmax -= mmin;//先算了有几个完整的，再算最多有几个散的   下面的代码更加高效
//	while (mmax--)
//	{
//		for (int i = 1; i <= 4; i++)
//		{
//			if (cnt[1])
//			{
//				cnt[1]--;
//				cout << 'G';
//			}
//			if (cnt[2])
//			{
//				cnt[2]--;
//				cout << 'P';
//			}
//			if (cnt[3])
//			{
//				cnt[3]--;
//				cout << 'L';
//			}
//			if (cnt[4])
//			{
//				cnt[4]--;
//				cout << 'T';
//			}
//		}
//	}
//	
//	return 0;
//}

#include<iostream>
//using namespace std;
//
//char ch[10005];
//int a, b, c, d;
//int main()
//{
//	cin >> ch;
//	int len = strlen(ch);
//	for (int i = 0; i < len; i++)
//	{
//		if (ch[i] == 'g' || ch[i] == 'G')
//		{
//			a++;
//		}
//		if (ch[i] == 'p' || ch[i] == 'P')
//		{
//			b++;
//		}
//		if (ch[i] == 'l' || ch[i] == 'L')
//		{
//			c++;
//		}
//		if (ch[i] == 't' || ch[i] == 'T')
//		{
//			d++;
//		}
//	}
//	while (a != 0 || b != 0 || c != 0 || d != 0)
//	{
//		if (a)
//		{
//			a--;
//			cout << 'G';
//		}
//		if (b)
//		{
//			b--;
//			cout << 'P';
//		}
//		if (c)
//		{
//			c--;
//			cout << 'L';
//		}
//		if (d)
//		{
//			d--;
//			cout << 'T';
//		}
//	}
//	return 0;
//}


using namespace std;
int main()
{
	int t;
	cin >> t;
	int ans = (t + 2) % 7;
	if (!ans)
	{
		ans = 7;
	}
	cout << ans << endl;
	return 0;
}
