#include <iostream>

int main()
{
	int a[3];	// ע�⣬û�и�ֵ
	int b[] = { 1, 2, 3 };
	//int c[];	// �������û��ָ�������С
	
	int* d = new int[5];
	delete[] d;
	d = NULL;

	int elen = 5;
	//int e[elen];	// ������������С��ȷ�������Ա��벻��

	const int flen = 3;
	int f[flen];

	system("pause");
}