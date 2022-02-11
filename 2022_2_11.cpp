#define _CRT_SECURE_NO_WbRNINGS 1




//struct  Player
//{
//	int  audi;
//	int  jury=0;
//};
//int main()
//{
//	Player a;
//	Player b;
//	cin >> a.audi >> b.audi;
//	for (int i = 0; i < 3; i++)
//	{
//		int t;
//		cin >> t;
//		if (t)
//		{
//			b.jury++;
//		}
//		else
//		{
//			a.jury++;
//		}
//	}
//	if (a.jury == 3)
//	{
//		printf("The winner is a: %d + %d\n", a.audi, a.jury);
//	}
//	else if (b.jury == 3)
//	{
//		printf("The winner is b: %d + %d\n", b.audi, b.jury);
//	}
//	else if (a.audi>b.audi)
//	{
//		printf("The winner is a: %d + %d\n", a.audi, a.jury);
//	}
//	else
//	{
//		printf("The winner is b: %d + %d\n", b.audi, b.jury);
//	}
//	return 0;
//}



//struct People
//{
//	char name[10];
//	int score;
//};
//People people[10005];
//int main()
//{
//	int t;
//	cin >> t;
//	int sum = 0;
//	for (int i = 0; i < t; i++)
//	{
//		cin >> people[i].name >> people[i].score;
//		sum += people[i].score;
//	}
//	int avr = (sum / t)/2;
//	int mmin = 2147483647;
//	int name_ans;
//	for (int i = 0; i < t; i++)
//	{
//		int t = abs(people[i].score - avr);
//		if (t < mmin)
//		{
//			mmin = t;
//			name_ans = i;
//		}
//	}
//	cout << avr << " " << people[name_ans].name << endl;
//	return 0;
//}



//int main()
//{
//	cout << "PTA shi3 wo3 jing1 shen2 huan4 fa1 !" << endl;
//
//	return 0;
//}


//char a[1005];
//char b[1005];
//int main()
//{
//	cin.get(a, 1005);
//	int len = strlen(a);
//	int cnt = 0;
//	int lenb = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] == '6')
//		{
//			while (i<len&&a[i] == '6')
//			{
//				i++;
//				cnt++;
//			}
//		}
//		else
//		{
//			b[lenb++] = a[i];
//			cnt = 0;
//		}
//		if (cnt > 0)
//		{
//			i--;
//		}
//		if (cnt>0&&cnt<=3)
//		{
//			while (cnt--)
//			{
//				b[lenb++] = '6';
//			}
//		}
//		else if (cnt>3&&cnt<=9)
//		{
//			b[lenb++] = '9';
//		}
//		else if (cnt > 9)
//		{
//			b[lenb++] = '2';
//			b[lenb++] = '7';
//		}
//		
//	}
//	cout << b << endl;
//	return 0;
//}


//char a[105];
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		getchar();//谨记：cin.get是不对换行符进行处理的
//		cin.get(a, 105);
//		int len = strlen(a);
//		bool flag = 0;
//		for (int i = 0; i < len; i++)
//		{
//			if (a[i] == ',')
//			{
//				if (a[i - 1] == 'g'
//					&& a[i - 2] == 'n'
//					&&  a[i - 3] == 'o'
//					&&  a[len - 2] == 'g'
//					&& a[len - 3] == 'n'
//					&& a[len - 4] == 'o'
//					)
//				{
//					flag = 1;
//					break;
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//		int cnt = 0;
//		int rec = 0;
//		for (int i = len - 1; i >= 0; i--)
//		{
//			if (a[i] == ' ')
//			{
//				cnt++;
//			}
//			if (cnt == 3)
//			{
//				rec = i + 1;
//				break;
//			}
//		}
//		if (flag)
//		{
//			for (int i = 0; i < rec; i++)
//			{
//				cout << a[i];
//			}
//			cout << "qiao ben zhong." << endl;
//		}
//		else
//		{
//			cout << "Skipped" << endl;
//		}
//		memset(a, 0, sizeof(a));
//	}
//	
//	return 0;
//}


#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	cout << (50 * (x - y)) << endl;

	return 0;
}
