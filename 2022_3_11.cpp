#define _CRT_SECURE_NO_WARNINGS 1




//struct node
//{
//	int left;
//	int right;
//};
//node nd[1005];
//vector<int>in;
//vector<int>last;
//int ans[1005];
//int bulid(int in_left, int in_right, int last_left, int last_right)
//{
//	if (last_left >last_right)
//	{
//		return -1;//null
//	}
//	int i;
//	for (i = in_left; in[i] != last[last_right]; i++);//找分割点
//	int root = last[last_right];
//	int len_left = i - in_left;//3
//	int len_right = in_right - i;//3
//	nd[root].left = bulid(in_left, i - 1, last_left, last_left + len_left-1);
//	nd[root].right = bulid(i + 1, in_right,last_right-len_right , last_right-1);
//	return root;
//}
//
//
//queue<int>q;
//int cnt;
//void LevelOrder(int root)
//{
//	q.push(root);
//	ans[cnt++] = root;
//	while (!q.empty())
//	{
//		int tmp = q.front();
//		q.pop();
//		if (nd[tmp].left != -1)
//		{
//			q.push(nd[tmp].left);
//			ans[cnt++] = nd[tmp].left;		
//		}
//		if (nd[tmp].right != -1)
//		{
//			q.push(nd[tmp].right);
//			ans[cnt++] = nd[tmp].right;
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		last.push_back(x);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		in.push_back(x);
//	}
//	bulid(0, n - 1, 0, n - 1);
//	LevelOrder(last[n - 1]);//传入根节点的值
//	bool f = true;
//	for (int i = 0; i < n; i++)
//	{
//		if (f)
//		{
//			cout << ans[i];
//			f = false;
//		}
//		else
//		{
//			cout << " " << ans[i];
//		}
//	}
//	cout << endl;
//	return 0;
//}



//struct node
//{
//	int left;
//	int right;
//};//映射左右孩子
//node nd[1005];
//vector<int>in;
//vector<int>pr;
//int ans[1005];
//queue<int>q;
//int cnt;
//int build(int in_left, int in_right, int pr_left, int pr_right)
//{
//	if (pr_left > pr_right)
//	{
//		return -1;
//	}
//	int root = pr[pr_left];
//	int i;
//	for (i = in_left; in[i] != root; i++);
//	int len_left = i - in_left;
//	int len_right = in_right - i;
//	nd[root].left = build(in_left, i - 1, pr_left + 1, pr_left + len_left);
//	nd[root].right = build(i + 1, in_right,pr_right-len_right+1 , pr_right);
//	return root;
//}
//void LevelOrder(int root)
//{
//	q.push(root);
//	ans[cnt++] = root;
//	while (!q.empty())
//	{
//		int tmp = q.front();
//		q.pop();
//		if (nd[tmp].right != -1)
//		{
//			q.push(nd[tmp].right);
//			ans[cnt++] = nd[tmp].right;		
//		}
//		if (nd[tmp].left != -1)
//		{
//			q.push(nd[tmp].left);
//			ans[cnt++] = nd[tmp].left;
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
//		in.push_back(x);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		pr.push_back(x);
//	}
//	build(0, n - 1, 0, n - 1);
//	LevelOrder(pr[0]);
//	bool f = true;
//	for (int i = 0; i < n; i++)
//	{
//		if (f)
//		{
//			cout << ans[i];
//			f = false;
//		}
//		else
//		{
//			cout << " " << ans[i];
//		}
//	}
//	cout << endl;
//	return 0;
//}




//完全二叉树只给后序遍历怎么求  看了题解长见识了/wul
//int n;
//int ans[50];
//
//void build(int root)
//{
//	if (root >= n)
//	{
//		return;
//	}
//	build(2 * root + 1);
//	build(2 * root + 2);
//	cin >> ans[root];
//}
//int main()
//{
//	cin >> n;
//	build(0);
//	bool f = 1;
//	for (int i = 0; i < n; i++)
//	{
//		if (f)
//		{
//			cout << ans[i];
//			f = false;
//		}
//		else
//		{
//			cout << " " << ans[i];
//		}
//	}
//	cout << endl;
//	return 0;
//}



//typedef pair<vector<int>, int> PAIR;
//vector<int>v[10005];
//set<vector<int>>s;
//map<vector<int>, int>m1;
//int cnt[10005];
//
//bool cmp(const PAIR& e1, const PAIR& e2)
//{
//	if (e1.second != e2.second)
//	{
//		return e1.second > e2.second;
//	}
//	else
//	{
//		vector<int>v1 = e1.first;
//		vector<int>v2 = e2.first;
//		int sz = v1.size();
//		for (int i = 0; i < sz; i++)
//		{
//			if (v1[i] != v2[i])
//			{
//				return v1[i] < v2[i];
//			}
//		}
//
//	}
//	
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		int sz = s.size();
//		for (int j = 0; j < m; j++)
//		{
//			int x;
//			cin >> x;
//			v[i].push_back(x);
//		}
//		s.insert(v[i]);
//		int newsize = s.size();
//		if (newsize == sz)
//		{
//			m1[v[i]]++;
//		}
//		else
//		{
//			m1[v[i]] = 1;
//		}
//	}
//	vector<PAIR>vm(m1.begin(), m1.end());
//	sort(vm.begin(), vm.end(), cmp);
//	int sz = vm.size();
//	cout << sz << endl;
//	for (int i = 0; i < sz; i++)
//	{
//		cout << vm[i].second;
//		for (int j = 0; j < m; j++)
//		{
//			cout << " " << vm[i].first[j];
//		}
//		if (i != sz - 1)
//		{
//			cout << endl;
//		}
//	}
//	return 0;
//}


#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<algorithm>
#include<map>
using namespace std;

vector<int>v[10005];
vector<int>ans;
vector<int>tmp;
int mmax;
void dfs(int h, int id)
{
	if (h > mmax)//最长序列
	{
		mmax = h;
		ans = tmp;
	}
	if (v[id].empty())
	{
		return;
	}
	for (int i = 0; i < v[id].size(); i++)
	{
		tmp.push_back(v[id][i]);
		dfs(h + 1, v[id][i]);
		tmp.pop_back();//回溯 不管有没有更新 都必须把这个数弹出来
	}
	
}

bool reco[10005];
int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		for (int j = 0; j < t; j++)
		{
			int x;
			cin >> x;
			v[i].push_back(x);
			reco[x] = 1;
		}
		sort(v[i].begin(), v[i].end());
	}
	int start = 0;
	for (int i = 0; i < n; i++)//卡了真的久
	{
		if (reco[i]==0)
		{
			start = i;
		}
	}
	
	/*for (int i = 0; i < n; i++)
	{*/
		dfs(1, start);
	//}
	std::cout << mmax << endl;	
	std::cout << start;
	for (auto e : ans)
	{
		std::cout << " " << e;
	}
	return 0;
}



