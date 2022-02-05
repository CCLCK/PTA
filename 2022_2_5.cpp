#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
//cin.get(char*, int); 这玩意第一个空格都读 一般可以配合getchar使用  解决b中有空格的问题
//#include<ctype.h>
//using namespace std;
//
//char a[100005];
//char b[100005];
//int main()
//{
//	scanf("%s", a); 
//	getchar();
//	cin.get(b,10005);
//	int lena = strlen(a);
//	int lenb = strlen(b);
//	bool flaga = true;
//	bool flagb = true;
//	if (atoi(a)<1 || atoi(a)>1000)
//	{
//		flaga = false;
//	}
//	if (atoi(b)<1 || atoi(b)>1000)
//	{
//		flagb = false;
//	}
//	for (int i = 0; i < lena; i++)
//	{
//		if (!isdigit(a[i]) )
//		{
//			flaga = false;
//			break;
//		}
//	}
//	for (int i = 0; i < strlen(b); i++)
//	{
//		if (!isdigit(b[i]))
//		{
//			flagb = false;
//			break;
//		}
//	}
//	if (flaga)
//	{
//		printf("%s", a);
//	}
//	else
//	{
//		printf("?");
//	}
//	cout << " + ";
//	if (flagb)
//	{
//		printf("%s", b);
//	}
//	else
//	{
//		printf("?");
//	}
//	cout << " = ";
//	if (flaga&&flagb)
//	{
//		printf("%d\n", (atoi(a) + atoi(b)));
//			//cout << (atoi(a) + atoi(b)) << endl;
//		
//	}
//	else
//	{
//		printf("?\n");
//	}
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << "I" << endl;
//	cout << " " << endl;
//	cout << "L" << endl;
//	cout << "o" << endl;
//	cout << "v" << endl;
//	cout << "e" << endl;
//	cout << " " << endl;
//	cout << "G" << endl;
//	cout << "P" << endl;
//	cout << "L" << endl;
//	cout << "T" << endl;
//
//	return 0;
//}


//using namespace std;
//
//char a[20];
//bool arr[10];
//int ans[10];
//int main()
//{
//	cin >> a;
//	int len = strlen(a);
//	for (int i = 0; i < len; i++)
//	{
//		arr[(a[i]-'0')] = true;
//	}
//	cout << "int[] arr = new int[]{" ;
//	int flag = true;
//	for (int i = 9; i >=0; i--)
//	{
//		
//		if (flag&&arr[i])
//		{
//			cout << i;
//			flag = false;
//		}
//		else if (arr[i])
//		{
//			cout << "," << i;
//		}
//	}
//	cout << "};" << endl;
//
//	cout << "int[] index = new int[]{";
//	int cnt = 0;
//	for (int i = 9; i >=0; i--)
//	{
//		if (arr[i])
//		{
//			ans[i] = cnt;
//			cnt++;
//		}
//	}
//	flag = true;
//	for (int i = 0; i < len; i++)
//	{
//		if (flag)
//		{
//			cout << ans[(a[i] - '0')];
//			flag = false;
//
//		}
//		else
//		{
//			cout << "," << ans[(a[i] - '0')];
//		}
//	}
//	cout << "};" << endl;
//	return 0;
//}


//using namespace std;
//bool isprime(int x)
//{
//	if (x == 1)
//	{
//		return false;
//	}
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x%i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main()
//{
//	int x;
//	while (~scanf("%d", &x))
//	{
//		if (isprime(x))
//		{
//			cout << "Yes" << endl;
//		}
//		else
//		{
//			cout << "No" << endl;
//		}
//	}
//
//	return 0;
//}

//using namespace std;
//
//int main()
//{
//	double x;
//	cin >> x;
//	double ans = (x - 100)*1.8;
//	printf("%.1f\n", ans);
//
//	return 0;
//}

using namespace std;
int sex[55];
char name[55][20];
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> sex[i];
		cin >> name[i];
	}
	for (int i = 0; i < t/2; i++)
	{
		int s = sex[i];
		cout << name[i]<<" ";
		for (int j = t-1; j >= 0; j--)
		{
			if (sex[j] + s == 1)
			{
				cout << name[j] << endl;
				sex[j] = 2;
				break;
			}
		}

	}
	return 0;
}

