#include<stdio.h>
int main()
{
	int x;
	while(scanf("%d",&x) != EOF)
	{
		if(x>=0 && x<=100)
		{
			x /= 10;
			switch(x)
			{
				case 10:
					printf("A");
					break;
				case 9:
					printf("A");
					break;
				case 8:
					printf("B");
					break;
				case 7:
					printf("C");
					break;
				case 6:
					printf("D");
					break;
				default:
					printf("E")	;	
			}
		}
		else
		{
			printf("Score is error!");
		}
		printf("\n");
	}
	return 0;
}