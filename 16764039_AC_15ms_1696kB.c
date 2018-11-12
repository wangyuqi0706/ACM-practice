#include<stdio.h>
#include<string.h>
char in[1000] = {0};
int main()
{
	int a, b, n=0, i, length;
	scanf("%d", &n);
	while(n--!=0)
	{
		scanf("%s",&in);
		length = strlen(in);
		a = 0;
		for (b = 0; b < length; b++)
		{
			if (in[b] >= '0' && in[b] <= '9')
				a++;
		}
		printf("%d\n", a);

	}
	return 0;
}