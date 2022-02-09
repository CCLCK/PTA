#define _CRT_SECURE_NO_WARNINGS 1



//int a[105];
//int num[105][105];
//int main()
//{
//	int t;
//	cin >> t;
//	int max = 0;
//	for (int i = 1; i <= t; i++)
//	{
//		cin>>a[i];
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	int cnt = 1;
//	for (int k = 1;k<=max*10; k++)
//	{
//		for (int j = 1; j <= t; j++)
//		{
//			if (k <= a[j] * 10)
//			{
//				if (k != 1 && cnt - num[j][k - 1] == 1)
//				{
//					cnt++;
//				}
//				num[j][k] = cnt;
//				cnt++;
//			}
//		}
//	}
//	bool flag = true;
//	for (int i = 1; i <= t; i++)
//	{
//		cout << "#" << i<<endl;
//		for (int j = 1; j <= a[i] * 10; j++)
//		{
//			if (flag)
//			{
//				cout << num[i][j];
//				flag = false;
//			}
//			else
//			{
//				cout << " " << num[i][j];
//			}
//			if (j % 10 == 0)
//			{
//				cout << endl;
//				flag = true;
//			}
//		}
//	}
//	return 0;
//}

//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int a[10] = { 1,26,
//		676,
//		17576,
//		456976,
//		11881376,
//		308915776 
//	};
//	int n, x;
//	cin >> n >> x;
//	int ans = a[n] - x;
//	for (int i = n - 1; i >= 0;i--)
//	{
//		int cnt = ans / a[i];
//		printf("%c", 'a' + cnt);
//		ans -= cnt*a[i];
//	}
//	cout << endl;
//	return 0;
//}




//int main()
//{
//	int x, y;
//	cin >> x >> y;
//	printf("%.2f", (x*y / 10.0));
//
//	return 0;
//}


//int main()
//{
//	cout << "2018" << endl;
//	cout << "wo3 men2 yao4 ying2 !" << endl;
//		
//	return 0;
//}


//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int t = a + b;
//	while (t--)
//	{
//		cout << "Wang!";
//	}
//	cout << endl;
//	return 0;
//}

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

bool judge[105][105];
char a[105][105];
char b[105][105];
int main()
{
	char ch;
	int n;
	cin >> ch >> n;
	getchar();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%c", &a[i][j]);
			if (a[i][j] == '@')
			{
				judge[i][j] = 1;
			}
		}
		getchar();
	}
	memset(b, ' ', sizeof(b));
	int flag = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == '@')
			{
				b[n - 1 - i][n - 1 - j] = ch;
				if (judge[n - 1 - i][n - 1 - j] == 0)
				{
					flag = false;
				}
			}
		}
	}
	if (flag)
	{
		cout << "bu yong dao le" << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << b[i][j];
		}
		cout << endl;
	}
	return 0;
}


