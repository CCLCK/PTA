#define _CRT_SECURE_NO_WARNINGS 1

//���������Ե� ����Ŀ����Ǹ�����  ������int
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//typedef struct Moon
//{
//	double num;
//	double price;
//	double sale;
//}Moon;
//Moon moon[1005];
//
//int cmp_moon(const void*e1, const void* e2)
//{
//	if (((Moon*)e1)->sale - ((Moon*)e2)->sale<=0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	double n, total;
//	cin >> n >> total;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> moon[i].num;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> moon[i].price;
//		moon[i].sale = moon[i].price / (moon[i].num*1.0);
//	}
//	qsort(moon, n, sizeof(moon[0]), cmp_moon);
//	double sum=0;
//	//double flag = -1;
//	for (int i = 0; i < n; i++)
//	{
//		if (total>=moon[i].num)
//		{
//			total -= moon[i].num;
//			sum += moon[i].price;
//		}
//		else
//		{
//			sum += moon[i].sale*total;
//			total = 0;
//			break;
//		}
//	}
//	printf("%.2f\n", sum);
//	return 0;
//}


//#include<iostream>
//#include<set>
//using namespace std;
//set<int>s[105];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int t;
//		cin >> t;
//		for (int j = 0; j < t; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			s[i].insert(tmp);
//		}
//	}
//	int x;
//	cin >> x;
//	for (int i = 0; i < x; i++)
//	{
//		int cnt = 0;
//		int a, b;
//		cin >> a >> b;
//		for (auto e: s[a])
//		{
//			if (s[b].find(e)!=s[b].end())//�ҵ���
//			{
//				cnt++;
//			}
//		}
//		int sa = s[a].size();
//		int sb = s[b].size();
//		printf("%.2f%%\n", cnt / ((sa + sb-cnt)*1.0)*100);
//	}
//	return 0;
//}

//���һ�����Ե� ������abaa   �ҵ����һ��a��Ҫ����ѭ�� �ҵ������ڶ���a�������Ž�

//vector<int>v;
//int main()
//{
//	string s;
//	getline(cin, s);
//	int sz = s.size();
//	for (int i = 0; i < sz; i++)
//	{
//		int j = sz - 1;
//		while (j >= i)
//		{
//			while (j >= i&&s[j] != s[i])
//			{
//				j--;
//			}
//			bool flag = 0;
//			int left = i, right = j;
//			while (left <= right)
//			{
//				if (s[left] == s[right])
//				{
//					left++;
//					right--;
//				}
//				else
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (flag != 1)
//			{
//				v.push_back(j - i + 1);
//			}
//			j--;
//		}
//		
//	}
//	if (v.size())
//	{
//		sort(v.begin(), v.end());
//		cout << v[v.size() - 1] << endl;
//	}
//	else
//	{
//		cout << "0" << endl;
//	}
//	return 0;
//}


//��һ��ʹ��mapд�� �Ͷ�map��ֵ����  
//1.mapд��ȫ��Ĭ�ϳ�ʼ��Ϊ0
//2.��valueΪ��������map��Ҫ����vector
//sort��cmp�����Ĳ�������дΪpair<int,int>���������ã�map<int,int>�����Ϳ��Կ���pair<int,int>
//map<int, int>m;
//
//int cnt[10005];
//typedef pair<int, int>PAIR;
//bool cmp(const PAIR& e1, const PAIR&e2)
//{
//	if (e1.second != e2.second)
//	{
//		return e1.second > e2.second;
//	}
//	else if (cnt[e1.first]!=cnt[e2.first])
//	{
//		return cnt[e1.first]>cnt[e2.first];
//	}
//	else
//	{
//		return e1.first < e2.first;
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int sum = 0;
//		int t;
//		cin >> t;
//		for (int j = 1; j <= t; j++)
//		{
//			int id, money;
//			cin >> id >> money;
//			cnt[id]++;
//			m[id] += money;
//			sum += money;
//		}
//		m[i] -= sum;
//	}
//	vector<PAIR>v(m.begin(),m.end());
//	sort(v.begin(), v.end(),cmp);
//	for (auto e : v)
//	{
//		printf("%d %.2f\n", e.first, e.second*1.0 / 100);
//	}
//	return 0;
//}



//���˱��˵�����д���� ˼·��ţ��  ������֮ǰ�϶��Ὺһ����ά����ȥ��ÿһ�����죬����˼·������set������
//���洢���죬����ÿһ��Ԫ�ش���һ�����죬���ڲ�������ʵ��
//��ѧ����lower_bound()�Ļ��ƣ��ҵ���һ�����ڵ���x�������������Ҳ������ǵ�ǰ�������ϰ�߿�Ӣ���ĵ�
//set<int>s;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		if (s.empty())
//		{
//			s.insert(x);
//		}
//		else
//		{
//			auto it = s.lower_bound(x);
//			if (it != s.end())//x���ǵ�ǰ������
//			{
//				s.erase(it);
//				s.insert(x);
//			}
//			else
//			{
//				s.insert(x);//�ǵ�ǰ������,����һ���������
//			}
//		}
//	}
//	cout << s.size() << endl;
//	return 0;
//}


//ˮ�� ��סsort���������������ͱ������ֵ����int
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
using namespace std;

double score[10005];

int cmp(double e1, double e2)
{
	return e1 > e2;
}
int main()
{
	int n;
	cin >> n;
	int t;
	cin >> t;
	int m;
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		double eva[15];
		for (int j = 0; j < t; j++)
		{
			cin >> eva[j];
		}
		sort(eva, eva + t);
		double sum = 0;
		for (int k = 1; k < t - 1; k++)
		{
			sum += eva[k];
		}
		score[i] = sum / (t - 2);
	}
	sort(score, score + n,cmp);
	bool f = 1;
	for (int i = m-1; i >=0; i--)
	{
		if (f)
		{
			printf("%.3f", score[i]);
			f = 0;
		}
		else
		{
			printf(" %.3f", score[i]);
		}
	}
	cout << endl;
	return 0;
}
