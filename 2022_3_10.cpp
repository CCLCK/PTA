#define _CRT_SECURE_NO_WARNINGS 1



////邻接表存储 队列访问邻接表
//vector<int>v[100005];
//double fold[100005];
//double val[100005];
//int main()
//{
//	double n, z, r;
//	cin >> n >> z >> r;
//	val[0] = z;
//	for (int i = 0; i < n; i++)
//	{
//		double t;
//		cin >> t;
//		if (t == 0)
//		{
//			cin >> fold[i];//记录下倍数
//		}
//		for (int j = 0; j < t; j++)
//		{
//			double x;
//			cin >> x;
//			v[i].push_back(x);
//		}
//	}
//	queue<double>q;
//	q.push(0);
//	double sum = 0;
//	while (!q.empty())
//	{
//		int tmp = q.front();
//		q.pop();
//		if (v[tmp].empty())
//		{
//			sum += val[tmp] * fold[tmp];
//			continue;
//		}
//		for (int i = 0; i < v[tmp].size(); i++)
//		{
//			q.push(v[tmp][i]);
//			val[v[tmp][i]] = val[tmp] * (100 - r) / 100;
//		}
//	}
//	cout << (int)sum << endl;
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<queue>
//#include<map>
//using namespace std;
////重排的时候得分奇偶数跳出循环 卡第二个测试用例 奇数个节点没过
////调试 就硬调
//map<int, int>m1;//addr key
//map<int, int>m2;//addr next
//vector<int>add;
//vector<int>k;
//vector<int>nex;
//map<int, int>m5;//next addr 
//int main()
//{
//	int begin, n;
//	cin >> begin >> n;
//	int last;
//	for (int i = 0; i < n; i++)
//	{
//		int addr, key, next;
//		cin >> addr >> key >> next;
//		m1[addr] = key;
//		m2[addr] = next;
//		m5[next] = addr;
//		if (next == -1)
//		{
//			last = addr;
//		}
//	}
//	if (m1.size() == 1)
//	{
//		printf("%05d %d -1\n", begin, m1[begin], m2[begin]);
//		return 0;
//	}
//	int cur = begin;
//	bool f = 1;
//	while (begin!=last)//数组之间的连续就是链表链接的指针
//	{
//		add.push_back(last);
//		k.push_back(m1[last]);
//		add.push_back(begin);
//		k.push_back(m1[begin]);
//		nex.push_back(begin);
//		nex.push_back(m5[last]);
//		begin = m2[begin];
//		if (begin == last)
//		{
//			f = 0;
//			break;
//		}
//		last = m5[last];
//	}
//	if (f)
//	{
//		add.push_back(last);
//		k.push_back(m1[last]);
//		nex.push_back(-1);
//	}
//	int len = add.size();
//	nex[len - 1] = -1;
//
//	for (int i = 0; i < len; i++)
//	{
//		if (i == len - 1)
//		{
//			printf("%05d %d -1\n", add[i], k[i]);
//
//		}
//		else
//		{
//			printf("%05d %d %05d\n", add[i], k[i], nex[i]);
//		}
//	}
//	return 0;
//}


#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>
using namespace std;
//灵活stoi(s,nullptr,10)
//复习建堆
//后面处理字符串写的太麻烦了 下次能用scanf/cin的尽量用scanf/cin处理
#define  COUTT (cout << "T" << endl);continue
#define  COUTF (cout << "F" << endl);continue
void swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
void AdjustDown(int* a, int n, int parent)//建立小根堆
{
	//这个前提是只有根节点没有放在该放的位置（除开根节点就是小根堆
	int child = parent * 2 + 1;//孩子节点
	while (child<n)
	{
		//默认左边孩子更小
		if (child + 1 < n&&a[child] > a[child + 1])//如果存在右边孩子且右边孩子更小
		{
			child = child + 1;//把child设置为更小的孩子
		}
		if (a[parent] > a[child])//如果父节点比子节点大
		{
			swap(&a[parent], &a[child]);//交换
			parent = child;//迭代
			child = child * 2 + 1;
		}
		else//放到了合适的位置 直接退出
		{
			break;
		}
	}
}

void AdjustUp(int* a, int child)
{
	int parent = (child - 1) / 2;
	while (child>0)
	{
		if (a[child] < a[parent])
		{
			swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;

		}
		else
		{
			break;
		}

	}

}
void HeapInit(int* a, int n)//这个建堆算法有问题吗？
{
	if (a == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	for (int i = (n - 2) / 2; i >= 0; i--)
		//(n-2)/2==(n-1-1)/2最后一个叶子节点的父亲
		//从最后一个叶子节点的父亲往前调（从包含最后一个叶子节点的这棵树往上调
	{
		AdjustDown(a, n, i);
	}
}


int main()
{
	int a[] = { 1 };
	HeapInit(a, 1);
	cout << a[0] << endl;

	return 0;
}
//int x[1005];
//map<int,int>m1;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x[i];
//		AdjustUp(x, i );
//	}
//	
//
//	for (int i = 0; i < n; i++)
//	{
//		m1[x[i]] = i;
//	}
//	getchar();
//	for (int i = 0; i < m; i++)
//	{
//		string s;		
//		getline(cin, s);	
//		int num1 = stoi(s, nullptr, 10);	
//		int flag;
//		if (s.find("root") != string::npos)
//		{
//			flag = 1;
//		}
//		else if (s.find("siblings") != string::npos)
//		{
//			flag = 2;
//		}
//		else if (s.find("parent") != string::npos)
//		{
//			flag = 3;
//		}
//		else
//		{
//			flag = 4;
//		}
//		int num2 = 0;
//		if (flag == 3 || flag == 4)
//		{
//			//找of
//			int index = s.find("of");
//			index += 3;
//			num2 = stoi(s.substr(index),nullptr, 10);
//			if (flag == 3)
//			{
//				if ((m1[num2]-1) / 2 == m1[num1])
//				{
//					COUTT;
//				}
//				else
//				{
//					COUTF;
//				}
//			}
//			if (flag == 4)
//			{
//				if ((m1[num1] - 1) / 2 == m1[num2])
//				{
//					COUTT;
//				}
//				else
//				{
//					COUTF;
//				}
//			}
//		}
//		else if (flag == 2)
//		{
//			int index = s.find("and");
//			index += 4;
//			num2 = stoi(s.substr(index), nullptr, 10);
//			int p1 = (m1[num1] - 1) / 2;
//			int p2 = (m1[num2] - 1) / 2;
//			if (p1 == p2)
//			{
//				COUTT;
//			}
//			else
//			{
//				COUTF;
//			}
//		}
//		else if (flag==1)
//		{
//			if (m1[num1]==0)
//			{
//				COUTT;
//			}
//			else
//			{
//				COUTF;
//			}
//		}
//		else
//		{
//			COUTF;
//		}
//	}
//	return 0;
//}





