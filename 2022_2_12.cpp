#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	double x, y, z;
//	double ans;
//	cin >> x >> y >> z;
//	if (y == 0)
//	{
//		ans = x*2.455;
//	}
//	else
//	{
//		ans = x*1.26;
//	}
//	if (ans > z)
//	{
//		printf("%.2f T_T\n", ans);
//	}
//	else
//	{
//		printf("%.2f ^_^\n", ans);
//	}
//	return 0;
//}




//int main()
//{
//	int n;
//	cin >> n;
//	double sum=0;
//	for (int i = 0; i < n;i++)
//	{
//		double tmp;
//		cin >> tmp;
//		sum += (1 / tmp);
//	}
//	sum /= n;
//	printf("%.2f\n", (1 / sum));
//	return 0;
//}



//
//int a[10];
//int main()
//{
//	cin >> (a[1]) >> (a[2]) >> (a[3]) >> (a[4]);
//	int stand,devi;
//	cin >> stand >> devi;
//	int max = 1;
//	int min = 1;
//	for (int i = 1; i <= 4; i++)
//	{
//		if (a[i] > a[max])
//		{
//			max = i;
//		}
//		if (a[i] < a[min])
//		{
//			min = i;
//		}
//	}
//	int cnt = 0, flag;
//	for (int i = 1; i <= 4; i++)
//	{
//		if ((a[i]<stand))
//		{
//			cnt++;
//			flag = i;
//		}
//	}
//	if ((a[max] - a[min]>devi))
//	{
//		cnt++;
//		flag = min;
//	}
//	if (cnt == 0)
//	{
//		cout << "Normal" << endl;
//	}
//	else if (cnt == 1)
//	{
//		printf("Warning: please check #%d!", flag);
//	}
//	else
//	{
//		cout << "Warning: please check all the tires!" << endl;
//	}
//	return 0;
//}




//char a[100];
//
//int main()
//{
//	char order[20] = "chi1 huo3 guo1";
//	int cnt = 0;
//	int ans = 0;
//	int start = -1;
//	bool flag = true;
//	while (1)
//	{
//		cin.get(a, 100);
//		char b = getchar();
//		if (b == '\n')
//		{
//			cnt++;
//		}
//		if (a[0] == '.'&&strlen(a)==1)//处理开头就是.的数据
//		{
//			break;
//		}
//		int len = strlen(a);
//			if (strstr(a, order) && flag)
//			{
//				ans++;
//				start = cnt;
//				flag = false;
//			}
//			else if (strstr(a, order))
//			{
//				ans++;
//			}
//		
//		memset(a, 0, 100);
//	}
//	if (cnt != 0)
//	{
//		cnt--;
//	}
//	printf("%d\n", cnt);
//	if (start!=-1)
//	{
//		printf("%d %d\n", start, ans);
//	}
//	else
//	{
//		printf("-_-#\n");
//	}
//	return 0;
//}



//
//char a[35];
//int ans[35] = { 1,
//2,
//4,
//8,
//16,
//32,
//64,
//128,
//256,
//512,
//1024,
//2048,
//4096,
//8192,
//16384,
//32768,
//65536,
//131072,
//262144,
//524288,
//1048576,
//2097152,
//4194304,
//8388608,
//16777216,
//33554432,
//67108864,
//134217728,
//268435456,
//536870912,
//1073741824 };
//int main()
//{
//	int x, y;
//	cin >>x>> y;
//	for (int i = 0; i < y; i++)
//	{
//		int sum = 0;
//		for (int j = x-1; j >=0; j--)
//		{
//			char ch;
//			cin >> ch;
//			if (ch == 'n')
//			{
//				sum += ans[j];
//			}
//		}
//		getchar();
//		cout << sum+1 << endl;
//		memset(a, 0, 35);
//	}
//}


//072这题是真的xx 彩票不是把刮出来的数字视为可见 然后找一个方向相加？？？
//代码AC的原因：把彩票所有的数字都设置为可见，那刮不刮有啥意义？无语 还卡了三个测试点
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int money[25] = { 0, 0, 0, 0, 0, 0, 10000, 36, 720, 360, 80, 252, 108, 72, 54, 180,
72, 180, 119, 36, 306, 1080, 144, 1800, 3600 };
int a[4][4];
bool vis[4][4];
bool reco[10];
int main()
{
	int black = 0;
	for (int i = 1; i <= 3; i++)//输入 记录下每个数字 目的是找出black
	{
		for (int j = 1; j <= 3; j++)
		{
			cin >> a[i][j];
			reco[a[i][j]] = true;
		}
	}
	for (int i = 1; i < 10; i++)//找出black
	{
		if (!reco[i])
		{
			black = i;
		}
	}
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			if (a[i][j] == 0)//这个数是0的话把这个数在置为black和可访问
			{
				vis[i][j] = true;
				a[i][j] = black;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		int row, col;
		cin >> row >> col;
		vis[row][col] = true;//刮开这个数字
		cout << a[row][col] << endl;//打印这个数字
	}
	//for (int i = 1; i <= 3; i++)
	//{
	//	for (int j = 1; j <= 3; j++)
	//	{
	//		if (vis[i][j] == false)//不是刮开的数全部置为0
	//		{
	//			a[i][j] = 0;
	//		}
	//	}
	//}
	int met,sum=0;
	cin >> met;
	switch (met)
	{
	case 1:
		sum = a[1][1] + a[1][2] + a[1][3];
		break;
	case 2:
		sum = a[2][1] + a[2][2] + a[2][3];
		break;
	case 3:
		sum = a[3][1] + a[3][2] + a[3][3];
		break;
	case 4:
		sum = a[1][1] + a[2][1] + a[3][1];
		break;
	case 5:
		sum = a[1][2] + a[2][2] + a[3][2];
		break;
	case 6:
		sum = a[1][3] + a[2][3] + a[3][3];
		break;
	case 7:
		sum = a[1][1] + a[2][2] + a[3][3];
		break;
	case 8:
		sum = a[1][3] + a[2][2] + a[3][1];
	}

	

	cout << money[sum] << endl;
	return 0;
}