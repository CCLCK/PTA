#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//
//char a[1005];
//int main()
//{
//	cin >> a;
//	int i = 0;
//	if (a[0] == '-')
//	{
//		cout << "fu" ;
//	}
//	else
//	{
//		switch (a[i] - '0')
//		{
//		case 0:
//			cout << "ling";
//			break;
//		case 1:
//			cout << "yi";
//			break;
//		case 2:
//			cout << "er";
//			break;
//		case 3:
//			cout << "san";
//			break;
//		case 4:
//			cout << "si";
//			break;
//		case 5:
//			cout << "wu";
//			break;
//		case 6:
//			cout << "liu";
//			break;
//		case 7:
//			cout << "qi";
//			break;
//		case 8:
//			cout << "ba";
//			break;
//		case 9:
//			cout << "jiu";
//			break;
//		}
//	}
//	i++;
//	while (a[i] != '\0')
//	{
//		switch (a[i]-'0')
//		{
//		case 0:
//			cout << " ling";
//			break;
//		case 1:
//			cout << " yi";
//			break;
//		case 2:
//			cout << " er";
//			break;
//		case 3:
//			cout << " san";
//			break;
//		case 4:
//			cout << " si";
//			break;
//		case 5:
//			cout << " wu";
//			break;
//		case 6:
//			cout << " liu";
//			break;
//		case 7:
//			cout << " qi";
//			break;
//		case 8:
//			cout << " ba";
//			break;
//		case 9:
//			cout << " jiu";
//			break;
//		}
//		i++;
//	}
//	cout << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int sum = 0;
//	int cnt = 0;
//	while (a <= b)
//	{
//		sum += a;
//		cnt++;
//		printf("%5d", a);
//		if (cnt % 5 == 0)
//		{
//			cout << endl;
//		}
//		a++;
//		
//	}
//	if (cnt % 5 != 0)
//	{
//		cout << endl;
//	}
//	cout << "Sum = " << sum << endl;
//	return 0;
//}


//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//typedef long long ll;
//ll a[105];
//ll b[105];
//ll lcm(ll m, ll n)
//{
//	while (n != 0)
//	{
//		ll tmp = m%n;
//		m = n;
//		n = tmp;
//	}
//	return m;
//}
//ll gcd(ll m, ll n)
//{
//	return (m*n / lcm(m, n));
//}
//int main()
//{
//	int t;
//	cin >> t;
//	int tt = t;
//	for (int i = 0; i < tt; i++)
//	{
//		int t1,t2;
//		cin >> t1;
//		getchar();
//		cin >> t2;
//		if (t1 == 0)
//		{
//			t--;
//		}
//		else
//		{
//			a[i] = t1;
//			b[i] = t2;
//		}
//	}
//	if (t == 0)//针对输入0/0这样的数据
//	{
//		cout << "0" << endl;
//		return 0;
//	}
//	if (t == 1)
//	{
//		ll tmp = lcm(a[0],b[0]);
//		a[0] /= tmp;
//		b[0] /= tmp;
//		if (a[0] == 0 || b[0])
//		cout << a[0] << "/" << b[0]<<endl;
//		return 0;
//	}
//	ll ans=0;
//	ll sum_a = 0;
//	if (t >= 2)
//	{
//		ans = gcd(b[0], b[1]);
//		for (int i = 2; i < t; i++)
//		{
//			ans = gcd(ans, b[i]);
//		}	
//		for (int i = 0; i < t; i++)
//		{
//			a[i] = (ans / b[i])*a[i];
//			sum_a += a[i];
//		}
//	}
//	sum_a/ans
//	if (t == 1)//针对只有一个数字
//	{
//		sum_a = a[0];
//		ans = b[0];
//	}
//	if (sum_a == 0)//针对最后一个测试点    2 -1/2 1/2
//	{
//		cout << "0" << endl;
//		return 0;
//	}
//	ll tmp = lcm(sum_a, ans);
//	sum_a /= tmp;
//	ans /= tmp;
//	ll x=sum_a / ans;
//	if (x)
//	{
//		cout << x ;
//	}
//	sum_a -= x*ans;
//	if (sum_a)
//	{
//		if (x)
//		{
//			cout << " ";
//		}
//		if (ans < 0 || sum_a < 0)
//		{
//			if (ans < 0)
//			{
//				cout << "-";
//				ans = -ans;
//			}
//			if (sum_a < 0)
//			{
//				cout << "-";
//				sum_a = -sum_a;
//			}
//		}
//		cout << sum_a << "/" << ans;
//	}
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//typedef long long ll;
//ll a[5];
//int main()
//{
//	cin >> a[0] >> a[1] >> a[2];
//	sort(a, a + 3);
//	cout << a[0] << "->" << a[1] << "->" << a[2] << endl;
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//
//char a[10005];
//char b[10005];
//char c[10005];
//bool check[1005];
//int main()
//{
//	gets(a);
//	gets(b);
//	int lena = strlen(a);
//	int lenb = strlen(b);
//	int cnt = 0;
//	for (int i = 0; i < lenb; i++)
//	{
//		check[b[i]] = 1;
//	}
//	for (int i = 0; i < lena; i++)
//	{
//		if (check[a[i]] == 0)
//		{
//			c[cnt++] = a[i];
//		}
//	}
//	cout << c << endl;
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//char a[10005];
//char b[10005];
//char c[10005];
//bool check[1005];
//int main()
//{
//	gets(a);
//	gets(b);
//	int lena = strlen(a);
//	int lenb = strlen(b);
//	int cnt = 0;
//	for (int i = 0; i < lenb; i++)
//	{
//		check[b[i]] = 1;
//	}
//	for (int i = 0; i < lena; i++)
//	{
//		if (check[a[i]] == 0)
//		{
//			c[cnt++] = a[i];
//		}
//	}
//	printf("%s\n", c);
//	return 0;
//}


#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[15] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096 };
	cout << "2^" << n << " = " << a[n] << endl;
	
	return 0;
}

