#define _CRT_SECURE_NO_WARNINGS 1



//vector<int>v;
//int main()
//{
//	int n;
//	cin >> n;
//	int total = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int t;
//		cin >> t;
//		v.push_back(t);
//		total += t;
//	}
//	sort(v.begin(),v.end());
//	int half = n / 2;
//	int sum = 0;
//	for (int i = 0; i < half; i++)
//	{
//		sum += v[i];
//	}
//	cout << "Outgoing #: " << n - half << endl;
//	cout << "Introverted #: " << half << endl;
//	cout << "Diff = " << total - sum - sum << endl;
//	return 0;
//}


//map[name]  如果这个name本来不在map中 不会造成越界
//map<string, int>m1;
//map<string, int>m2;//记录点赞人和点赞数
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		string s;
//		cin >> s;
//		m1[s] = 1;
//	}
//	int m;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		string name;
//		int num;
//		cin >> name >> num;
//		m2[name] = num;
//		if (m1[name] != 1)//不会出现越界的情况
//		{
//			m1[name] = 2;
//		}
//	}
//	double sum = 0;
//	for (auto e : m2)
//	{
//		sum += e.second;
//	}
//	double ave = sum / m;
//	bool ff = 0;
//	for (auto e : m2)
//	{
//		if (e.second > ave)//如果这个点赞数大于平均数
//		{
//			
//			string tmp = e.first;
//			if (m1[tmp]==2)
//			{
//				ff = 1;
//				cout <<tmp << endl;
//			}
//		}
//	}
//	if (ff == 0)
//	{
//		cout << "Bing Mei You" << endl;
//	}
//	return 0;
//}





//020没写来  空间开大了  题解是用dfs 下次再写
//queue<int>l[100005];
//int a[100005];
//int b[100005];
//double abil[100005];
//int main()
//{
//	double n, start, dec;
//	cin >> n >> start >> dec;
//	int cnt = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		if (x != 0)
//		{
//			for (int j = 0; j < x;j++)
//			{
//				int t;
//				cin >> t;
//				a[t] = i;//记录下每个人的师傅
//			}
//			
//		}
//		else
//		{
//			int num;//倍数
//			cin >> num;
//			b[i] = num;//得道者的倍数
//		}
//	}
//	for (int i = 1; i < n; i++)
//	{
//		l[a[i]].push(i);
//	}
//	abil[0] = start;
//	double sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int cnt = 1;
//		while (!l[i].empty())
//		{			
//			int x = l[i].front();
//			if (x&&b[x]==0)
//			{
//				abil[x] = abil[i] * pow((100 - dec)/100.0, cnt);
//				cnt++;
//			}
//			l[i].pop();
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (b[i] != 0)
//		{
//			sum += (abil[a[i]] * b[i]);
//		}
//	}
//	printf("%d\n", (int)(sum + 0.5));
//	return 0;
//}



//string name[105];
//map<string, int>m;
//map<string, int>cnt;
//typedef pair<string, int> PAIR;
//bool cmp(const PAIR&e1, const PAIR& e2)
//{
//	if (e1.second != e2.second)
//	{
//		return (e1.second > e2.second);
//	}
//	else
//	{
//		return cnt[e1.first] < cnt[e2.first];
//	}
//	
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> name[i];
//		int t;
//		cin >> t;
//		cnt[name[i]] = t;
//		set<int>s;
//		for (int j = 0; j < t; j++)
//		{
//			int x;
//			cin >> x;
//			s.insert(x);
//		}
//		m[name[i]] = s.size();
//	}
//	vector<PAIR>v(m.begin(),m.end());
//	sort(v.begin(), v.end(),cmp);
//	if (v.size() >= 3)
//	{
//		int f = 1;
//		for (int i = 0; i < 3; i++)
//		{
//			if (f)
//			{
//				cout << v[i].first;
//				f = 0;
//			}
//			else
//			{
//				cout << " " << v[i].first;
//			}	
//		}
//		cout << endl;
//	}
//	else if(v.size() == 2)
//	{		
//		int f = 1;
//		for (int i = 0; i < 2; i++)
//		{
//			if (f)
//			{
//				cout << v[i].first;
//				f = 0;
//			}
//			else
//			{
//				cout << " " << v[i].first;
//			}
//		}
//		cout << " -"<<endl;			
//	}
//	else
//	{
//		cout << v[0].first << " - -" << endl;
//	}
//	return 0;
//}

//题目意思理解错了  输出的不仅仅是链表的data 还需要链表的next和address
//int data[100005];
//int nextt[100005];
//int a[100005];
//int main()
//{
//	int head, n;
//	cin >> head >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int cur, da, nex;
//		cin >> cur >> da >> nex;
//		nextt[cur] = nex;
//		data[cur] = da;
//	}
//	a[0] = data[head];
//	int tmp = head;
//	for (int i = 1; i < n; i++)
//	{
//		a[i] = data[nextt[tmp]];
//		tmp = nextt[tmp];
//	}
//	return 0;
//}




#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>
#include<queue>
using namespace std;
typedef pair<string, int> PAIR;

map<string, int>m;
bool cmp(const PAIR&e1, const PAIR&e2)
{
	if (e1.second != e2.second)
	{
		return e1.second > e2.second;
	}
	else
	{
		return e1.first < e2.first;
	}
}
int give_money(int grade, int score)
{
	if (grade <= 100 && grade >= score)
	{
		return 50;
	}
	else if (grade < score&&grade >= 60)
	{
		return 20;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n, score, rank;
	cin >> n >> score >> rank;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;
		cin >> m[name];
		sum += give_money(m[name], score);
	}
	cout << sum << endl;
	vector<PAIR>v(m.begin(), m.end());
	sort(v.begin(), v.end(), cmp);
	int cnt = 0;
	int tmp=-999;
	int j = 0;	
	int r = cnt;
	while (r+cnt <= rank)
	{
		if (tmp!=v[j].second)
		{
			r++;
			r += cnt;
			cout << (r ) << " " << v[j].first << " " << v[j].second << endl;	
			cnt = 0;
		}
		else
		{
			while (j<v.size()&&tmp == v[j].second)
			{
				cout << (r) << " " << v[j].first << " " << v[j].second << endl;
				cnt++;
				j++;
			}	
			j--;
		}
		tmp = v[j].second;
		j++;	
	}
	return 0;
}
