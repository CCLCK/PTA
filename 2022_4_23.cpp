#define _CRT_SECURE_NO_WARNINGS 1




//int main()
//{
//	cout << "I'm gonna win! Today!" << endl;
//	cout << "2022-04-23" << endl;
//
//	return 0;
//}


//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << a / b << endl;
//	return 0;
//}


//int main()
//{
//	int child, parent;
//	int p1, p2;
//	cin >> child >> parent >> p1 >> p2;
//	int f1 = -1, f2 = -1;
//	if (p1 < child)
//	{
//		f1 = 0;
//	}
//	else if (p1 >= child && p1 < parent)
//	{
//		f1 = 1;
//	}
//	else
//	{
//		f1 = 2;
//	}
//	if (p2 < child)
//	{
//		f2 = 0;
//	}
//	else if (p2 >= child && p2 < parent)
//	{
//		f2 = 1;
//	}
//	else
//	{
//		f2 = 2;
//	}
//	//0 0 
//	if ((f1 == 0 && f2 == 2))
//	{
//		//������һ���ȥ 2��1
//		printf("%d-Y %d-Y\n", p1, p2);
//		cout << "qing 2 zhao gu hao 1" << endl;
//	}
//	else if (f1 == 2 && f2 == 0)
//	{
//		//������һ���ȥ 1��2
//		printf("%d-Y %d-Y\n", p1, p2);
//		cout << "qing 1 zhao gu hao 2" << endl;
//	}
//	else if (f1 + f2 >= 2)
//	{
//		//�����Խ�����Ҫ��
//		printf("%d-Y %d-Y\n", p1, p2);
//		cout << "huan ying ru guan" << endl;
//	}
//	else if (f1 == 0 && f2 == 1)
//	{
//		printf("%d-N %d-Y\n", p1, p2);
//		cout << "2: huan ying ru guan" << endl;
//		//2���Խ�
//	}
//	else if (f1 == 1 && f2 == 0)
//	{
//		printf("%d-Y %d-N\n", p1, p2);
//		cout << "1: huan ying ru guan" << endl;
//		//1���Խ�
//	}
//	else//����0
//	{
//		//�����
//		cout << "zhang da zai lai ba" << endl;
//	}
//	return 0;
//}




//int fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n * fac(n - 1);
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << fac(a + b) << endl;
//
//	return 0;
//}


//
//int func(int x,int n)
//{
//	vector<bool>v(7,1);
//	v[x] = 0;
//	int ans = 0;
//	while (n--)
//	{
//		for (int i = 6; i >= 1; i--)
//		{
//			if (v[i] == 1)
//			{
//				ans = i;
//				v[i] = 0;
//				break;
//			}
//		}
//	}
//	return ans;
//}
//int main()
//{
//	int x1, x2, x3, x4, x5, x6;
//	cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6;
//	int n;
//	cin >> n;
//	cout << func(x1, n)<<" "<<func(x2, n)<<" "<<
//		    func(x3, n)<<" "<<func(x4, n)<< " "<<
//			func(x5, n)<<" "<<func(x6,n)<< endl;
//		
//	return 0;
//}


//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	string ans1, ans2;
//	for (int i = 1; i < s1.size(); i++)
//	{
//		if (s1[i] % 2 == s1[i - 1] % 2)
//		{
//			if (s1[i] - '0' > s1[i - 1] - '0')
//			{
//				ans1 += s1[i];
//			}
//			else
//			{
//				ans1 += s1[i-1];
//			}
//		}
//	}
//	for (int i = 1; i < s2.size(); i++)
//	{
//		if (s2[i] % 2 == s2[i - 1] % 2)
//		{
//			if (s2[i] - '0' > s2[i - 1] - '0')
//			{
//				ans2 += s2[i];
//			}
//			else
//			{
//				ans2 += s2[i - 1];
//			}
//		}
//	}
//	if (ans1 == ans2)
//	{
//		cout << ans1 << endl;
//	}
//	else
//	{
//		cout << ans1 << endl;
//		cout << ans2 << endl;
//	}
//	return 0;
//}



//int main()
//{
//	int n, m, q;
//	cin >> n >> m >> q;
//	set<int>row;
//	set<int>col;
//	for (int i = 0; i < q; i++)
//	{
//		int t;
//		cin >> t;
//		int x;
//		cin >> x;
//		if (t == 0)
//		{
//			row.insert(x);
//		}
//		else
//		{
//			col.insert(x);
//		}
//	}
//	//n��m��  row����m��   col����n-row.size()�� 
//	int total = n * m;
//	total -= (row.size() * m);
//	total -= (col.size() * (n - row.size()));
//	cout << total << endl;
//	return 0;
//}



//// ��һ����pat�Ϳ��Զ����ߵ�������
////Ȼ��pat����û����ͳһ�����ȥ����  ����������map����ȥ���� Ȼ��ÿһ��������һ���� ���ĺ;��ǽ��
//
//
//int main()
//{
//	int n, k, s;
//	cin >> n >> k >> s;
//	int ans = 0;
//	map<int, int>m;
//	for (int i = 0; i < n; i++)
//	{
//		int score, pat;
//		cin >> score >> pat;
//		if (score >= 175 && pat >= s)
//		{
//			ans++;
//		}
//		else if (score >= 175 && pat < s)
//		{
//			m[score]++;
//		}
//	}
//	for (int i = 0; i < k; i++)
//	{
//		for (auto& e : m)
//		{
//			if (e.second > 0)
//			{
//				ans++;
//				e.second--;
//			}
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}



//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;//n��Ƭ m�������� kΪ֦������
//	queue<int>q;
//	for (int i = 0; i < n; i++)
//	{
//		int t;
//		cin >> t;
//		q.push(t);
//	}
//	int cnt = 0;
//	stack<int>st;
//	int prev;
//	while (1)
//	{
//		if (cnt == 0)
//		{
//			if (st.empty()&&!q.empty())
//			{
//				prev = q.front();
//				cout << q.front();
//				q.pop();
//				cnt++;
//			}
//			else if(!st.empty())
//			{
//				prev = st.top();
//				cout << st.top();
//				st.pop();
//				cnt++;
//			}
//			else
//			{
//				break;//ջ�Ͷ��ж��ǿ�
//			}
//		}
//		else if (cnt > 0 && cnt < k)
//		{
//			if (!st.empty() && st.top() <= prev)
//			{
//				//�������ж�����С����һƬ
//				prev = st.top();
//				cnt++;
//				cout << " " << st.top();
//				st.pop();
//			}
//			else if (!st.empty() && st.top() > prev)
//			{
//				//�����ﲻΪ�յ��ǲ��ܷ�
//				if (q.empty())//�ٿ�������� ����Ϊ��ֱ����һ��
//				{
//					cnt = 0;
//					cout << endl;
//					continue;
//				}
//				if (q.front() <= prev)//��������ܷ�
//				{
//					prev = q.front();
//					cout << " " << q.front();
//					cnt++;
//					q.pop();
//				}
//				else if(st.size()<m&&!q.empty())
//				{
//					st.push(q.front());
//					q.pop();
//				}
//				else if (st.size() == m)
//				{
//					cnt = 0;
//					cout << endl;
//					continue;
//				}
//			}
//			else if (st.empty() && !q.empty())
//			{
//				//������û���� ����������
//				if (q.front() <= prev)//��ͷԪ�غ���ֱ�ӷŽ�ȥ
//				{
//					cout << " " << q.front();
//					cnt++;
//					q.pop();
//				}
//				else
//				{
//					//������ ���ܷ� Ҫ���ź��� Ҫ����һ��
//					if (st.size() < m)
//					{
//						st.push(q.front());
//						q.pop();
//					}
//					else
//					{
//						//���� ֱ����һ��
//						cout << endl;
//						cnt = 0;
//						continue;
//					}
//				}
//			}
//			else if (st.empty() && q.empty())
//			{
//				cout << endl;
//				break;
//				//���Ӻ���������������
//			}
//		}
//		else if (cnt == k)//������һ��
//		{
//			cout << endl;
//			cnt = 0;
//			continue;
//		}
//	}
//
//	return 0;
//}



//#include <iostream>
//#include<vector>
//#include <set>
//#include <string>
//#include <map>
//#include <queue>
//#include<stack>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>v;
//	for (int i = 0; i < n; i++)
//	{
//		int h1, m1, s1, h2, m2, s2;
//		scanf("%d:%d:%d - %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
//		int ans1 = h1 * 10000 + m1 * 100 + s1;
//		int ans2 = h2 * 10000 + m2 * 100 + s2;
//		v.push_back(ans1);
//		v.push_back(ans2);
//	}
//	sort(v.begin(), v.end());//�ӵ���������v[2]����ʼ��� ������������һ������ͬ �Ǿ������������
//	//for (auto e : v)
//	//{
//	//	cout << e << endl;
//	//}
//	int f = 0;
//	//int f2 = 0;
//	//if (v[v.size() - 1] == 235959)
//	//{
//	//	f2 = 1;
//	//}
//	if (v[0] != 0)
//	{
//		printf("00:00:00 - %02d:%02d:%02d", v[0] / 10000, v[0] % 10000 / 100, v[0] % 100);
//		f = 1;
//	
//	}
//	for (int i = 2; i < v.size(); i += 2)
//	{
//		if (v[i] != v[i - 1]&&f==0)
//		{
//			printf("%02d:%02d:%02d - %02d:%02d:%02d", v[i - 1] / 10000, v[i - 1] % 10000 / 100, v[i - 1] % 100,
//				v[i] / 10000, v[i] % 10000 / 100, v[i] % 100);
//			f = 1;
//		}
//		else if(v[i] != v[i - 1] && f==1)
//		{
//			printf("\n%02d:%02d:%02d - %02d:%02d:%02d", v[i - 1] / 10000, v[i - 1] % 10000 / 100, v[i - 1] % 100,
//				v[i] / 10000, v[i] % 10000 / 100, v[i] % 100);
//		}
//	}
//	if (v[v.size() - 1] != 235959)
//	{
//		printf("\n%02d:%02d:%02d - 23:59:59", v[v.size() - 1] / 10000, v[v.size() - 1] % 10000 / 100, v[v.size() - 1] % 100);
//	}
//	return 0;
//}


#include <iostream>
#include<vector>
#include <set>
#include <string>
#include <map>
#include <queue>
#include<stack>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	set<string>se;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		int t = s.find(".");
		if ( t!= string::npos)
		{
			se.insert(s.substr(0, t));
		}
		else
		{
			se.insert(s);
		}
	}
	bool f = 0;
	for (auto e : s)
	{
		if (f == 0)
		{
			cout << e;
			f = 1;
		}
		else
		{
			cout << "." << e;
		}
	}
	return 0;
}