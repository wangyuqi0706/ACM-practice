#include<stdio.h>
#include<string.h>
int main()
{
	char str[120] = { 0 };
	int n, i, t;
	while (gets(str))
	{
		n = strlen(str);
		for (i = 0; i < n; i++)
		{
			if (i == 0)
				str[i] -= 32;
			if (str[i - 1] == ' ')
				str[i] -= 32;
		}
		for (i = 0; i < n; i++)
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}