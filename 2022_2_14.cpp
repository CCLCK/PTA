#define _CRT_SECURE_NO_WARNINGS 1


//int a[20005];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + n);
//	int cnt1 = 0, cnt2 = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == a[0])
//		{
//			cnt1++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (a[i] == a[n - 1])
//		{
//			cnt2++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	cout << a[0] << " " << cnt1 << endl;
//	cout << a[n - 1] << " " << cnt2 << endl;
//	return 0;
//}



//int num[10005];
//int cnt = 1;
//void func(int x)
//{
//	int tmp = 0;
//	int rec = x;
//	if (rec)
//	{
//		while (rec)
//		{
//			rec /= 10;
//			tmp++;
//		}
//	}
//	else
//	{
//		tmp = 1;
//	}
//
//	int flag = cnt + tmp;
//	rec = x;
//	while (tmp!=0)
//	{
//		num[cnt + tmp - 1] = rec % 10;
//		rec /= 10;
//		tmp--;
//	}
//	cnt = flag;
//}
//
//int main()
//{
//	// 2 3 6 1 8 6 8 4 8 4
//	int a, b, n;
//	cin >> a >> b >> n;
//	int t1 = a;
//	int t2 = b;
//	func(t1);
//	func(t2);
//	for (int i = 1; cnt <= n;i++)
//	{
//		int mul = num[i] * num[i + 1];
//		func(mul);
//	}
//	bool f = true;
//	for (int i = 1; i <= n; i++)
//	{
//		if (f)
//		{
//			cout << num[i];
//			f = false;
//		}
//		else
//		{
//			cout << " " << num[i];
//		}
//	}
//	cout << endl;
//
//	return 0;
//}


#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

char str[1005];
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		getchar();
		cin.get(str, 1005);
		cout << str << endl;
		int lens = strlen(str);
		int cnt = 0;
		int lent = 0;
		int len_spa = 0;
		for (int i = 0; i < lens; i++)
		{
			if (!isspace(str[i]))
			{
				lent++; 
			}
		
		}
		bool flag = 0;
		if (str[lens-1] == '?')
		{
			flag = 1;
		}
		if (flag)
		{
			for (int i = lens - 1; i >= 0; i--)
			{
				if (isalpha(str[i]))
				{
					str[i + 1] = '!';
					str[i + 2] = '\0';
					break;
				}
			}
		}
		for (int i = 0; i < lens; i++)
		{
			if (isspace(str[i]))
			{
				cnt++;
			}
			else
			{
				break;
			}
		}
		string s;
		char a[1005];
		while (1)
		{
							
			sscanf(str+cnt, "%s", a);
			int lena = strlen(a);
			for (int i = 0; i < lena; i++)
			{
   				if (isalpha(a[i]) == 1)
				{
					a[i]=tolower(a[i]);
				}
			}
			cnt += lena;
			s += a;		
			if (lens <= cnt)
			{
				break;
			}
			else
			{
				s += ' ';
				cnt++;
			}
		}
		cout << s << endl;
	}
	


	return 0;
}







