#include "stdio.h"
#include "string.h"
#include "math.h"
/*
int main()
{
	int a[3][4];
	int i, j;
	int x, y;
	int max = a[0][0];
	printf("请为3×4的矩阵输入值\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			scanf_s("%d", a[i][j], 1);
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			if (max < a[i][j]) {
				max = a[i][j]; x = i; y = j;
			}
	printf("矩阵中最大的值为%d，其中行号为%d，列号为%d", max, x, y);


	return 0;
}
*/
/*
int main()
{
	int i, j, k;
	for (i = 1; i < 5; i++) {
		for (j = 1; j < 5 - i; j++)
			printf(" ");
		for (k = 1; k < 2 * i; k++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i < 3; i++) {
		for (j = 1; j <= i + 1; j++)
			printf(" ");
		for (k = 1; k <= 5 - i * 2; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
*/
/*
int main()
{
	float x, m, i;
	int j;           //x原价   m打折后的价格   i，j分别为单价和购买量 
	printf("请输入商品单价和购买量\n");
	scanf_s("%f%d", &i, &j);
	x = i * j; m = x;
	switch (int(m) / 10)
	{
	case 0:m = x; printf("%.2f", m); break;
	case 1:case 2:case 3:
	case 4:m = x * 0.9; printf("%.2f", m); break;
	case 5:case 6:case 7:case 8:
	case 9:m = x * 0.8; printf("%.2f", m); break;
	default:m = x * 0.7; printf("%.2f", m);
	}
	return 0;
}
*/
/*
int main()
{
	char str1[10], str2[] = "ab";
	strcpy_s(str1, "abc");
	printf("%d\n", strcmp(str1, str2));
	strcpy_s(str1, "ab");
	printf("%d\n", strcmp(str1, str2));
	strcpy_s(str1, "a");
	printf("%d\n", strcmp(str1, str2));
	if (strcmp(str1, str2) == -1)
		printf("str1<str2\n");
}
*/
/*
void px()
{
	printf("***********************\n");
}
void pd()
{
	printf("Hello\n");
}
int main()
{
	px();
	pd();
	px();
}
*/