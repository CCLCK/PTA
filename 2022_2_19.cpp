#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<stack>
using namespace std;
//这一题是连续输入 就会有一个坑 每一组数据必须处理完  
//比如半路已经超出了货架，但是不能跳出来  得继续把剩下的数据处理完
//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 0; i < k; i++)
//	{
//		int cnt = 1;
//		stack<int>s;
//		bool f = 0;
//		for (int j = 1; j <= n; j++)
//		{
//			int x;
//			cin >> x;
//			if (x == cnt)
//			{
//				cnt++;
//			}
//			else
//			{
//				s.push(x);
//			}
//			if (s.size() > m)
//			{
//				f = 1;
//			}
//			while (!s.empty())
//			{
//				if (s.top() == cnt)
//				{
//					cnt++;
//					s.pop();
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//
//		if (cnt != n+1||f)
//		{
//			cout << "NO" << endl;
//		}
//		else
//		{
//			cout << "YES" << endl;
//		}
//	}
//
//	return 0;
//}



//typedef pair<int, int> PAIR;
//stack<int>s1;
//stack<char>s2;
//
//PAIR one()
//{
//	PAIR tmp;
//	tmp.first = s1.top(); s1.pop();
//	tmp.second = s1.top(); s1.pop();
//	return tmp;
//}
//char two()
//{
//	char ch = s2.top();
//	s2.pop();
//	return ch;
//}
//int three(PAIR p,char ch)
//{
//	switch (ch)
//	{
//	case '+':
//		return p.first + p.second;
//	case '-':
//		return p.second - p.first;
//	case '*':
//		return p.second*p.first;
//	case '/':
//		if (p.first != 0)
//		{
//			return p.second / p.first;
//		}
//		else
//		{
//			return -2147483647;
//		}
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		s1.push(x);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		char ch;
//		getchar();
//		cin >> ch;
//		s2.push(ch);
//	}
//	while (!s1.empty()&&!s2.empty())
//	{
//		PAIR p;
//		char de;
//		p = one();
//		de = two();
//		int ans=three(p, de);
//		if (ans == -2147483647)
//		{
//			printf("ERROR: %d/%d\n", p.second, p.first);
//			return 0;
//		}
//		if (s1.empty()&&s2.empty())
//		{
//			cout << ans << endl;
//			return 0;
//		}
//		s1.push(ans);
//	}
//
//	return 0;
//}


#include<iostream>
#include<stack>
#include<map>
#include<cstdio>
#include<utility>
#include<string>
#include<set>
using namespace std;

struct People
{
	string name;
	string id;
	int form;
	int hour, minu;
	
};
struct cmp_People
{
	bool operator()(const People& p1,const People & p2)
	{

	
	}
};

int main()
{
	int d, p;
	cin >> d >> p;
	for (int i = 0; i < d; i++)
	{
		int n, m;
		cin >> n >> m;//n个人m个名额
		set<People,cmp_People>s;
		for (int j = 0; j < n; j++)
		{
			People people;
			cin >> people.name >> people.id >> people.form;
			scanf("%d:%d", &people.hour, &people.minu);
			if (people.id.size() == 18)
			{
				s.insert(people);
			}
			

		}


	}


	return 0;
}


