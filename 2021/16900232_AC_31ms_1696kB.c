#include<stdio.h>
int main()
{
	int n;
	while (scanf_s("%d", &n))
	{
		if (n == 0)
			break;
		int  sal, a[] = { 100,50,10,5,2,1 }, num = 0, M;
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &sal);
			for (int j = 0; j < 6; j++)
			{
				num += sal / a[j];
				sal %= a[j];
			}
		}
		printf("%d\n", num);
		//scanf_s("%d", &M);
	}
	return 0;
}