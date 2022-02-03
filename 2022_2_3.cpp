#define _CRT_SECURE_NO_WARNINGS 1



//ll fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*fac(n - 1);
//	}
//}

//
//#include<iostream>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	int  n;
//	cin >> n;
//	ll a[15] = { 1,
//		1,
//		3,
//		9,
//		33,
//		153,
//		873,
//		5913,
//		46233,
//		409113,
//		4037913,
//		43954713,
//	};
//	cout << a[n] << endl;
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << "This is a simple problem." << endl;
//	return 0;
//}

//
//int  main()
//{
//	double n;
//	char ch;
//	cin >> n >> ch;
//	for (int i = 0; i < (int)(n/2+0.5); i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << ch;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//char ch[20];
////题目说要求前十七位是数字，但是如果判断到是字母直接跳出会出现过不了的情况
//int main()
//{
//	int a[20] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//	char b[20] = "10X98765432";
//	int t;
//	cin >> t;
//	int flag ,flag2=0;
//	while (t--)
//	{
//		cin >> ch;
//		int sum = 0;
//		flag = 0;
//		for (int i = 0; i < 17; i++)
//		{
//			if (ch[i] >= '0'&&ch[i] <= '9')
//			{
//				sum += ((ch[i]-'0') * a[i]);
//			}
//			else
//			{
//				flag = 1;
//			}
//		}	
//		if (b[sum%11]!=ch[17])
//		{
//			flag = 1;
//		}
//		if (flag)
//		{
//			flag2 = 1;
//			cout << ch << endl;
//		}
//	}
//	if (flag2 == 0)
//	{
//		cout << "All passed" << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//char ch[100];
//int main()
//{
//	cin >> ch;
//	int i = 0;
//	double times=1;
//	if (ch[0] == '-')
//	{
//		i++;
//		times *= 1.5;
//	}
//	int len = strlen(ch);
//	if ((ch[len - 1] - '0') % 2 == 0)
//	{
//		times *= 2;
//	}
//	double cnt = 0;
//	for (; i < len; i++)
//	{
//		if (ch[i] == '2')
//		{
//			cnt++;
//		}
//	}
//	double ans;
//	if (ch[0] == '-')
//	{
//		len--;
//	}
//	ans = (cnt / len)*times * 100;
//	printf("%.2f%%", ans);
//
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int  hour;
//	int min;
//	cin >> hour;
//	getchar();
//	cin >> min;
//	if (hour >= 0 && hour < 12)
//	{
//		cout << "Only ";
//		if (hour < 10)
//		{
//			cout << "0" << hour << ":";
//		}
//		else
//		{
//			cout << hour << ":";
//		}
//		if (min < 10)
//		{
//			cout << "0" << min;
//		}
//		else
//		{
//			cout <<  min;
//		}
//		cout << ".  Too early to Dang." << endl;
//		return 0;
//	}
//	if (hour == 12 && min == 0)
//	{
//		cout << "Only 12:00.  Too early to Dang." << endl;
//		return 0;
//	}
//	int cnt = 0;
//	if (min)
//	{
//		cnt++;
//	}
//	cnt += (hour - 12);
//	while (cnt--)
//	{
//		cout << "Dang";
//	}
//	cout << endl;
//	return 0;
//}

