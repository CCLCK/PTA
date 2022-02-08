#define _CRT_SECURE_NO_WARNINGS 1


//
//char a[15];
//int main()
//{
//	int k;
//	cin >> k;
//	int cnt = 0;
//
//	while (cin >> a)
//	{
//		if (!strcmp(a, "End"))
//		{
//			return 0;
//		}
//		cnt++;
//
//		if (cnt%(k+1) == 0)
//		{
//			cout << a << endl;
//		}
//		else if (!strcmp(a, "ChuiZi"))
//		{
//			cout << "Bu" << endl;
//		}
//		else if (!strcmp(a, "JianDao"))
//		{
//			cout << "ChuiZi" << endl;
//		}
//		else
//		{
//			cout << "JianDao" << endl;
//		}
//	}
//
//
//	return 0;
//}



//char a[105];
//int main()
//{
//	cin >> a;
//	cout << "Hello " << a << endl;
//
//	return 0;
//}

//java大数类解决
//import java.math.BigInteger;
//import java.util.Scanner;
//public class Main {
//	public static void main(String[] args) {
//		Scanner scan = new Scanner(System.in);
//		int x;
//		x = scan.nextInt();
//		BigInteger bi = new BigInteger(x + "");
//		BigInteger ans = new BigInteger("1");
//		BigInteger zero = new BigInteger("0");
//		int cnt = 1;
//		while (!ans.remainder(bi).equals(zero))
//		{
//			cnt++;
//			ans = ans.multiply(new BigInteger("10"));
//			ans = ans.add(new BigInteger("1"));
//		}
//
//		System.out.print(ans.divide(bi));
//		System.out.print(" ");
//		System.out.println(cnt);
//	}
//}



//
//char name[20];
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int x, y;
//		cin >> name>>x>>y;
//		if (x<15 || x>20 || y<50 || y>70)
//		{
//			cout << name << endl;
//		}
//	}
//
//
//	return 0;
//}

#include<iostream>
using namespace std;

int a[1005][1005];
int b[1005][1005];

int main()
{
	int ra, ca, rb, cb;
	cin >> ra >> ca;
	for (int i = 1; i <= ra; i++)
	{
		for (int j = 1; j <= ca; j++)
		{
			cin >> a[i][j];
		}
	}
	cin >> rb >> cb;
	if (ca != rb)
	{
		cout << "Error: ca != rb" << endl;
		return 0;
	}
	else
	{
		for (int i = 1; i <= rb; i++)
		{
			for (int j = 1; j <= cb; j++)
			{
				cin >> b[i][j];
			}
		}
	}
	int sum = 0;

	
	return 0;
}

