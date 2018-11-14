#include<stdio.h>
int main()
{
	int n;
	while (scanf_s("%d", &n) != EOF)
	{
		int ah, am, as, bh, bm, bs,time,h,m,s;
		int timeA, timeB;
		for (int i=0; i < n; i++)
		{
			scanf_s("%d %d %d %d %d %d", &ah, &am, &as, &bh, &bm, &bs);
			timeA = 3600 * ah + 60 * am + as;
			timeB = 3600 * bh + 60 * bm + bs;
			time = timeA + timeB;
			h = time / 3600;
			time %= 3600;
			m = time / 60;
			time %= 60;
			s = time;
			printf("%d %d %d\n", h, m, s);
		}

	}
	return 0;
}