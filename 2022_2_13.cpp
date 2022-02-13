#define _CRT_SECURE_NO_WARNINGS 1




//int main()
//{
//	cout << "To iterate is human, to recurse divine." << endl;
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << (a - b*c) << endl;
//	return 0;
//}


//char a[10];
//
//int trans(char a, char b)
//{
//	return (a-'0') * 10 + b-'0';
//}
//int main()
//{
//	cin >> a;
//	int len = strlen(a);
//	if (len == 4)
//	{
//		int x = trans(a[0],a[1]);
//		if (x < 22)
//		{
//			cout << "20" << a[0] << a[1] << "-" << a[2] << a[3] << endl;
//		}
//		else
//		{
//			cout << "19" << a[0] << a[1] << "-" << a[2] << a[3] << endl;
//		}
//	}
//	else
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			cout << a[i];
//		}
//		cout << "-" << a[4] << a[5]<<endl;
//	}
//	return 0;
//}




//int main()
//{
//	int n, stand;
//	cin >> n >> stand;
//	for (int i = 0; i < n; i++)
//	{
//		double t;
//		cin >> t;
//		if (t < stand)
//		{
//			printf("On Sale! %.1f\n", t);
//		}
//	}
//
//	return 0;
//}



//int a[25];
//int main()
//{
//	for (int i = 0; i < 24; i++)
//	{
//		cin >> a[i];
//	}
//	while (1)
//	{
//		int t;
//		cin >> t;
//		if (t<0 || t>23)
//		{
//			return 0;
//		}
//		if (a[t] <= 50)
//		{
//			cout << a[t] << " No" << endl;
//		}
//		else
//		{
//			cout << a[t] << " Yes" << endl;
//		}
//	}
//	return 0;
//}

//阅读题  他问的是在做哪道题 不是在读哪道题  卡了一个测试点
#include<iostream>
#include<cstring>
using namespace std;
char a[505];
char b[15] = "qiandao";
char e[15] = "easy";
int main()
{
	int n, m;
	cin >> n >> m;
	int cnt = 0;
	while (n--)
	{
		memset(a, 0, 505);
		getchar();
		cin.get(a, 505);	
	
		if (!strstr(a, b) && !strstr(a, e))
		{
			cnt++;
			if (cnt == m+1)
			{
				cout << a << endl;
				return 0;
			}
		}	
	}
	if (cnt <=m)
	{
		cout << "Wo AK le" << endl;
		return 0;
	}
	

}

