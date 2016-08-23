#include <iostream>

int main()
{
	int a[3];	// 注意，没有赋值
	int b[] = { 1, 2, 3 };
	//int c[];	// 编译错误，没有指定数组大小
	
	int* d = new int[5];
	delete[] d;
	d = NULL;

	int elen = 5;
	//int e[elen];	// 编译错误，数组大小不确定，所以编译不过

	const int flen = 3;
	int f[flen];

	system("pause");
}