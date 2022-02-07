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


#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

class Time
{
public:
	Time(int hour, int minu)
	{
		this->hour = hour;
		this->minu = minu;
	}
	int operator-(Time t2)//第二个时间
	{
		if (minu <= t2.minu)
		{
			int h = t2.hour - hour;
			int m = t2.minu - minu;
			return h * 60 + m;
		}
		else
		{
			int h = t2.hour - hour;
			int m = minu - t2.minu;
			return h * 60 - m;
		}
	}
private:
	int hour;
	int minu;
};

bool op_bo[1005];
bool op_re[1005];
int hour[1005];
char xx[1005];
int minu[1005];
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		while (1)
		{
			int id;
			cin >> id;
			
			char tmp;
			cin >> tmp;
			if (tmp == 'S')
			{
				op_bo[id] = 1;
			}
			else
			{
				op_re[id] = 1;
			}
			cin >> hour[id];
			getchar();
			cin>> minu[id];
			if (id == 0)
			{
				//开始处理

				break;
			}
		}
	
	}
	cout << "success" << endl;
	return 0;
}
