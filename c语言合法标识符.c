#include<stdio.h>
#include<string.h>
int main()
{
	char string[55];
	int n,judge;
	while (scanf_s("%d", &n) != EOF)
	{
		getchar();
		for (int i=0; i < n; i++)
		{
			gets(string);
			judge = 1;
			int length = strlen(string);
			for (int j=0; j < length; j++)
			{
				if (string[j] == '_' || (string[j] >= 'A'&& string[j] <= 'Z') || (string[j] >= 'a'&&string[j] <= 'z') || (string[j] >= '0' && string[j] <= '9'))
				{
					if (string[0] >= '0'&&string[0] <= '9')
					{
						judge = 0;
						break;
					}
				}
				else
				{
					judge = 0;
					break;
				}
			}
			if (judge == 1)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
}