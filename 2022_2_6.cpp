#define _CRT_SECURE_NO_WARNINGS 1




//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		double height, weight;
//		cin >> height >> weight;
//		double ans = ((height)-100)*1.8;
//		double x = ans*0.1;
//		if (weight<=ans-x)
//		{
//			cout << "You are tai shou le!" << endl;
//		}
//		else if (weight>=ans + x)
//		{
//			cout << "You are tai pang le!" << endl;
//		}
//		else
//		{
//			cout << "You are wan mei!" << endl;
//		}
//
//	}
//	return 0;
//}



//数组a尽量往大了开 不然最后一个测试点过不去
//char a[1000005];
//int main()
//{
//	int n;
//	cin >> n;
//	getchar();
//	char x;
//	x = getchar();
//	getchar();//吸收/n
//	cin.get(a, 1000005);
//	int len = strlen(a);
//	if (n > len)
//	{
//		int tmp = n-len;
//		while (tmp--)
//		{
//			cout << x;
//		}
//		cout << a << endl;
//	}
//	else
//	{
//		int tmp = len - n;
//		while (tmp < len)
//		{
//			cout << a[tmp];
//			tmp++;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}


//#include<iostream>
//#include<cstdio>
//using namespace std;
//这题的代码风格和思路都写复杂了  补0==把num[0]置为true 可以直接省去处理字符串的过程，可以直接开始计数
//下面的代码写的是真垃圾
//bool num[10];
//char a[10];
//char b[10];
//
//void itoa(int aim, char* a)
//{
//	int cnt = 0;
//	int t = aim;
//	while (t)
//	{
//		t /= 10;
//		cnt++;
//	}
//	while (aim)
//	{
//		a[--cnt] = aim % 10 + '0';
//		aim /= 10;
//	}
//}
//
//
//void dealstr(int aim)
//{
//	itoa(aim, a);
//	int x = 4 - strlen(a);
//	for (int i = 0; i < x; i++)
//	{
//		b[i] = '0';
//	}
//	b[x] = '\0';
//	strcat(b, a);
//	
//}
//int difNum()
//{
//	memset(num, 0, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		num[b[i] - '0'] = true;
//	}
//	int cnt = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (num[i])
//		{
//			cnt++;
//		}
//	}
//	return cnt;
//}
//
//int main()
//{
//	int year,n;
//	cin >> year >>n ;
//	int tmp = year;
//	dealstr(tmp);
//	while (difNum() != n)
//	{
//		tmp++;
//		dealstr(tmp);
//	}
//	cout << tmp - year << " " << b << endl;
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int a[1005];
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n;
//		cin >> n;
//		while (n--)
//		{
//			int num;
//			cin >> num;
//			a[num]++;
//		}
//	}
//	int max_like = -1;
//	int max_cnt = -1;
//
//	for (int i = 0; i <= 1000; i++)
//	{
//		if (a[i] >= max_cnt)
//		{
//			max_cnt = a[i];
//			max_like = i;
//		}
//
//	}
//	cout << max_like << " " << max_cnt << endl;
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//char a[1005][15];
//int main()
//{
//	int cnt=0;
//	while (cin >> (a[cnt]))
//	{
//		if (a[cnt][0] == '.')
//		{
//			break;
//		}
//		else
//		{
//			cnt++;
//		}
//
//	}
//	if (cnt <2)
//	{
//		cout << "Momo... No one is for you ..." << endl;
//	}
//	else if (cnt >= 2 && cnt < 14)
//	{
//		cout << a[1] << " is the only one for you..." << endl;
//	}
//	else
//	{
//		cout << a[1] << " and "<<a[13]<<" are inviting you to dinner..." << endl;
//	}
//
//	return 0;
//}


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a*b << endl;

	return 0;
}