#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//int func(int x, int y)
//{
//	return ~(~x&~y)&~(x&y);
//}

//int func()
//{
//	//即10000000 00000000 00000000 00000000
//	//-0规定为INT_MIN
//	return 1 << 31;
//}

//int func(int x) {
//	//得到最大的数 再异或 两个相等的数异或为0
//	return !(x ^ (~(1 << 31)));
//}

//bool func(int x)
//{
//	//0xaaaaaaaa就是奇数位全为0的数
//	//x&0xaaaaaaaa 把偶数位清零
//	//两个数相等异或为0
//	return !((x & 0xAAAAAAAA) ^ (0xAAAAAAAA));
//}

//int func(int x)
//{
//	//按位取反+1==得到相反数
//	return ~x + 1;
//}

//int func(int x)
//{
//	//0011 0000  0001 0010 0011 0100 0101 0110 0111 1000 1001     
//	//第四和第五位必须为1  
//	//之后 如果第三位为0肯定可以  如果第三位为1 则必须第一第二位必须为0
//	return ((x >> 4) & 1) == 1
//		&& ((x >> 5) & 1) == 1
//		&& (((x >> 3) & 1) == 0 || ((x >> 3) & 1 == 1) && ((x >> 2) & 1) == 0 && ((x >> 1) & 1) == 0);
//		
//}

//int func(int x, int y) {
//	int a = (x >> 31) + (y >> 31);
//	int b = !((y + (~x) + 1) >> 31);
//	int c = x >> 31 & 1;
//	return (a & c) | ((~a) & b);
//	//符号位相加的结果&x的符号位  
//	//a==1时 看x(c)的符号位    
//	//a==0时 看y-x(b)的符号位 
//}

int floatFloat2Int(unsigned uf) {
	int exp = 0xff & (uf >> 23);
	int frac = 0x7fffff & uf;
	int sign = !!(uf >> 31);
	int tmp;

	if (exp > 127 + 30)
		return 0x80000000u;
	if (exp < 127)
		return 0;
	tmp = ((frac >> 23) + 1) << (exp - 127);
	if (sign)
		return (~tmp) + 1;
	else
		return tmp;
}



int main()
{
	int a = 1;
	int b = 0;

	return 0;
}







