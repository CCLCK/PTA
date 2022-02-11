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

//int main()
//{
//	int x, y;
//	cin >> x >> y;
//	cout << (50 * (x - y)) << endl;
//
//	return 0;
//}



//int main()
//{
//	double weight, height;
//	cin >> weight >> height;
//	double ans = weight / height / height;
//	printf("%.1f\n", ans);
//	if (ans > 25)
//	{
//		cout << "PANG" << endl;
//	}
//	else
//	{
//		cout << "Hai Xing" << endl;
//	}
//
//	return 0;
//}



//char a[10];
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		cin >> a;
//		int x = a[0] + a[1] + a[2];
//		int y = a[3] + a[4] + a[5];
//		if (x == y)
//		{
//			cout << "You are lucky!" << endl;
//		}
//		else
//		{
//			cout << "Wish you good luck." << endl;
//		}
//	}
//
//
//	return 0;
//}




//int  main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int sex, height, weight;
//		cin >> sex >> height >> weight;
//		if (sex == 0)
//		{
//			if (height < 129)
//			{
//				cout << "duo chi yu! " ;
//			}
//			else if (height == 129)
//			{
//				cout << "wan mei! " ;
//			}
//			else
//			{
//				cout << "ni li hai! ";
//			}
//			if (weight < 25)
//			{
//				cout << "duo chi rou!" << endl;
//			}
//			else if (weight == 25)
//			{
//				cout << "wan mei!" << endl;
//			}
//			else
//			{
//				cout << "shao chi rou!" << endl;
//			}
//		}
//		else
//		{
//			if (height < 130)
//			{
//				cout << "duo chi yu! ";
//			}
//			else if (height == 130)
//			{
//				cout << "wan mei! ";
//			}
//			else
//			{
//				cout << "ni li hai! ";
//			}
//			if (weight < 27)
//			{
//				cout << "duo chi rou!" << endl;
//			}
//			else if (weight == 27)
//			{
//				cout << "wan mei!" << endl;
//			}
//			else
//			{
//				cout << "shao chi rou!" << endl;
//			}
//		}
//
//	}
//	return 0;
//}


//64 对字符串的处理 没写来  明天再试试
//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//char a[1005];
//char b[1005];
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		memset(a, 0, 1005);
//		memset(b, 0, 1005);
//		getchar();
//		cin.get(a, 1005);
//		cout << a <<endl;
//		cout << "AI: ";
//		int len = strlen(a);
//		int cnt = 0;
//		for (int i = 0; i < len; i++)
//		{
//			if (a[i] != 'I'&&a[i] >= 'A'&&a[i] <= 'Z')
//			{
//				a[cnt++] = a[i] + 32;
//			}
//			else if (i + 1 < len&&a[i] == ' ' && a[i + 1] == '\'')
//			{
//				;
//			}
//			else if (a[i] == ' ')
//			{
//				a[cnt++] = a[i];
//				while (i + 1 < len&&a[i + 1] == ' ')
//				{
//					i++;
//				}
//			}
//			else
//			{
//				a[cnt++] = a[i];
//			}
//		}
//		a[cnt++] = '\0';
//		cnt = 0;
//		for (int i = 0; i < len; i++)
//		{
//			if (a[i] == '?')
//			{
//				b[cnt++] = '!';
//			}			
//			else if (i+1<len&&a[i] == 'I'&&!isalpha(a[i+1]))
//			{
//				b[cnt++] = 'y';
//				b[cnt++] = 'o';
//				b[cnt++] = 'u';
//			}
//			else if (a[i-1]<'a'&&a[i] == 'm'&&a[i+1] == 'e')
//			{
//				i++;
//				b[cnt++] = 'y';
//				b[cnt++] = 'o';
//				b[cnt++] = 'u';
//			}
//			else if (a[i] == ' ')
//			{
//				b[cnt++] = a[i];
//				while (i + 1<len&&a[i + 1] == ' ')
//				{
//					i++;
//				}
//			}
//			else if (i+6<len&&a[i] == 'c'&&a[i + 1] == 'a'&&a[i + 2] == 'n'&&a[i + 3] == ' '
//				&& a[i + 4] == 'y'&& a[i + 5] == 'o'&& a[i + 6] == 'u')
//			{
//				i += 6;
//				b[cnt++] = 'I';
//				b[cnt++] = ' ';
//				b[cnt++] = 'c';
//				b[cnt++] = 'a';
//				b[cnt++] = 'n';
//			}
//			else if (i + 8 < len&&a[i] == 'c'&&a[i + 1] == 'o'&&a[i + 2] == 'u'&&a[i + 3] == 'l'
//				&& a[i + 4] == 'd'&& a[i + 5] == ' '&& a[i + 6] == 'y'&&a[i + 7] == 'o'&&a[i + 8] == 'u')
//			{
//				i += 8;
//				b[cnt++] = 'I';
//				b[cnt++] = ' ';
//				b[cnt++] = 'c';
//				b[cnt++] = 'o';
//				b[cnt++] = 'u';
//				b[cnt++] = 'l';
//				b[cnt++] = 'd';
//
//			}
//			else
//			{
//				b[cnt++] = a[i];
//			}
//		}
//		int lenb = strlen(b);
//		if (b[lenb - 1] == '!')
//		{
//			for (int i = lenb - 1; i >= 0; i--)
//			{
//				if (isalpha(b[i]) && i != lenb - 1)
//				{
//					b[i + 1] = b[lenb - 1];
//					b[i + 2] = '\0';
//					break;
//				}
//			}
//		}
//		lenb = strlen(b);
//		int cnt1 = 0;
//		while (a[cnt1] == ' ')
//		{
//			cnt1++;
//		}
//		for (int i = cnt1; i < lenb; i++)
//		{
//			cout << b[i];
//		}
//		cout << endl;
//	}
//
//	return 0;
//}


#include<iostream>
using namespace std;

int main()

{
	cout << "Talk is cheap.Show me the code." << endl;

	return 0;
}