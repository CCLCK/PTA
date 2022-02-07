#define _CRT_SECURE_NO_WARNINGS 1



//int main()
//{
//	double x, y;
//	cin >> x >> y;
//	if (y == 0)
//	{
//		printf("%.0f/0=Error\n", x);
//	}
//	else if (y<0)
//	{
//		printf("%.0f/(%.0f)=%.2f\n", x, y, x / y);
//	}
//	else
//	{
//		printf("%.0f/%.0f=%.2f\n", x, y, x / y);
//	}
//
//	return 0;
//}

//int main()
//{
//	int x, y;
//	cin >> x >> y;
//
//	printf("%.2f", x / (y*1.0));
//	return 0;
//}



//int main()
//{
//	cout << "Hello World" << endl;
//	cout<<"Hello New World" << endl;
//	return 0;
//}



//char a[10005];
//int main()
//{
//	int n;
//	cin >> n;
//	getchar();
//	cin.get(a, 10005);
//	int len = strlen(a);
//	int x = len / n;
//	if (x*n != len)
//	{
//		x++;
//	}
//	for (int j = 0; j < n; j++)
//	{
//		for (int i = x - 1; i >= 0; i--)
//		{
//			if (i*n + j < len)
//			{
//				cout << a[i*n + j];
//			}
//			else
//			{
//				cout << " ";
//			}
//		}		
//		cout << endl;		
//	}
//	return 0;
//}



//int main()
//{
//	int t;
//	cin >> t;
//	char sex;
//	double height;
//	for (int i = 0; i < t; i++)
//	{
//		cin >> sex >> height;
//		if (sex == 'M')
//		{
//			printf("%.2f\n", height / 1.09);
//		}
//		else
//		{
//			printf("%.2f\n", height * 1.09);
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int x;
//	int cnt = 0;
//	while ((cin >> x))
//	{
//		cnt++;
//		if (x == 250)
//		{
//			cout << cnt << endl;
//			return 0;
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int day, month, year;
//	scanf("%d-%d-%d", &month, &day, &year);
//	printf("%04d-%02d-%02d\n", year, month, day);
//
//
//	return 0;
//}



//class Time
//{
//public:
//	Time(int hour, int minu)
//	{
//		this->hour = hour;
//		this->minu = minu;
//	}
//	int operator-(Time t2)//第二个时间
//	{
//		if (minu <= t2.minu)
//		{
//			int h = t2.hour - hour;
//			int m = t2.minu - minu;
//			return h * 60 + m;
//		}
//		else
//		{
//			int h = t2.hour - hour;
//			int m = minu - t2.minu;
//			return h * 60 - m;
//		}
//	}
//private:
//	int hour;
//	int minu;
//};

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

bool op_bo[1005];
bool op_re[1005];
int hour_bo[1005];
int hour_re[1005];
int minu_bo[1005];
int minu_re[1005];

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
	/*	memset(op_bo, 0, 1005);
		memset(op_re, 0, 1005);
		memset(hour_bo, 0, 1005);
		memset(hour_re, 0, 1005);
		memset(minu_bo, 0, 1005);
		memset(minu_re, 0, 1005);*/
		int sum = 0;
		int cnt = 0;
		while (1)
		{
			int id;
			cin >> id;
			
			char tmp;
			cin >> tmp;
			if (tmp == 'S')//借书
			{
				op_bo[id] = 1;
				cin >> hour_bo[id];
				getchar();
				cin >> minu_bo[id];
			}
			else if (op_bo[id])//还书且前面有借书记录
				//这里卡了半天  只有前面有S这里的E才合法 不然就不能更新 比如ES 这种数据就是无效的
			{
				op_re[id] = 1;
				cin >> hour_re[id];
				getchar();
				cin >> minu_re[id];
			}
			else//还书但是没有借阅记录
			{
				int x, y;
				cin >> x;
				getchar();
				cin >> y;
			}
			
			if (id!=0&&op_bo[id] && op_re[id])
			{
				cnt++;					
				sum += (hour_re[id] * 60 + minu_re[id])-(hour_bo[id] * 60 + minu_bo[id]);
				op_bo[id] = 0;
				op_re[id] = 0;
				hour_re[id] = 0;
				minu_re[id] = 0;
				hour_bo[id] = 0;
				minu_bo[id] = 0;
			}
			if (id == 0)
			{
				if (cnt == 0)
				{
					printf("0 0\n");
				}
				else
				{
					printf("%d %d\n", cnt, (int)((sum / (cnt*1.0)) + 0.5));
				}
				sum = 0;
				cnt = 0;
				break;
			}
				
			
		}
	
	}
	return 0;
}
