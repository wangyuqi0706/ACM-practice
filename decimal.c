#include<stdio.h>
int main()
{
	int a,b,c,i;
	int result;
	while(scanf("%d %d %d",&a,&b,&c) != EOF)
	{
		for(i=0;i<=c;i++)
		{
			result=a/b;
			a = a%b*10;
			printf("%d",result);
			if(i==0)
				printf(".");
		}
	}
	return 0;
}
