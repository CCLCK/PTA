#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<stack>
using namespace std;
//��һ������������ �ͻ���һ���� ÿһ�����ݱ��봦����  
//�����·�Ѿ������˻��ܣ����ǲ���������  �ü�����ʣ�µ����ݴ�����
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


//�����������Ե�û�� ˼·������  ��Ӧ����setȥ�� ��Ӧ����map
//���º���ʮ���Ѹ�   �������Ե�û����ԭ��Ӧ�����������״�����������˰�һ������˳�����
//������������ �ҽ������ĸ�ӳ���  �����ĸ�֮��û����ϵ ��άmap�Ҳ�����  ����������id���������˶��map
//���ǹ���ȥ �治֪��ɶ���ݿ�ס��  д��������Сʱ��

//��������һ��ʼ��Ӧ��ֻ��һ���ṹ��ȥ��    �����ӳ���൱�����Ѹ� д����
#include<iostream>
#include<stack>
#include<map>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<utility>
#include<string>
#include<set>
using namespace std;
typedef pair<string, int> PAIR;
struct People
{
	string name;
	string id;
	int form;
	int hour, minu;
	int order;

};
struct cmp_People
{
	bool operator()(const People& p1, const People & p2)
	{
		if (p1.hour != p2.hour)
		{
			return p1.hour < p2.hour;
		}
		else if (p1.minu != p2.minu)
		{
			return p1.minu < p2.minu;
		}
		else
		{
			return p1.order<p2.order;
		}
	}
};
int cmp(const PAIR&e1, const PAIR& e2)
{
	return e1.second < e2.second;
}
map<string, int>ma;//����
map<string, int>ma2;//��¼��״̬
map<string, string>ma3;//����id
map<string, int>ma4;//����������
int ti;

int main()
{

	int d, p;
	cin >> d >> p;
	for (int i = 0; i < d; i++)
	{
		int n, m;
		cin >> n >> m;//n����m������
		set<People, cmp_People>s;
		for (int j = 0; j < n; j++)
		{
			People people;
			people.order = j;
			cin >> people.name >> people.id >> people.form;
			scanf("%d:%d", &people.hour, &people.minu);
			if (people.id.size() == 18 && people.name.length() <= 20)
			{
				s.insert(people);
				if (ma.find(people.name) == ma.end())
				{
					ma[people.name] = 0;
					ma3[people.id] = people.name;
					if (ma4[people.id] == 0)
					{
						ti++;
						ma4[people.id] = ti;
					}
				}
				ma2[people.id] += people.form;
			}

		}
		int cnt = 0;
		for (auto& e : s)
		{
			//i-e.day>p
			if (cnt<s.size() && cnt < m && (ma[e.name] == 0 || i + 1 - ma[e.name]>p))
			{
				cout << e.name << " " << e.id << endl;
				cnt++;
				ma[e.name] = i + 1;
			}
			if (cnt >= m)
			{
				break;
			}
		}
	}
	vector<PAIR>v(ma4.begin(), ma4.end());
	sort(v.begin(), v.end(), cmp);
	for (auto e : ma4)
	{
		if (ma2[e.first] >= 1)
		{
			cout << ma3[e.first] << " " << e.first << endl;
		}
	}

	return 0;
}


