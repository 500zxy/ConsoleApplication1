#include <stdio.h>
int main()
{
	float x, m, i;
	int j;           //xԭ��   m���ۺ�ļ۸�   i��j�ֱ�Ϊ���ۺ͹����� 
	printf("��������Ʒ���ۺ͹�����\n");
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
