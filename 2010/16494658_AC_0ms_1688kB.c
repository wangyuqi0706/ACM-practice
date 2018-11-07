#include<stdio.h>
int main()
{
	int n , sum, m, i,a,b,c,judge=0,cnt=0;
	while(scanf("%d %d",&m,&n) != EOF)
	{
	//scanf("%d %d",&m, &n);
		i=m;
		judge=0,cnt=0;
		while(i<=n)
		{
			a=i/100;
			b=(i/10)%10;
			c=i%10;
			sum=a*a*a+b*b*b+c*c*c;
			if(sum==i)
			{
				if(cnt>0)
					printf(" ");
				judge=1;
				printf("%d",sum);
				cnt++;
			}
			i++;
		}
		if(judge==0)
			printf("no\n");
		else
			printf("\n");
	}
	return 0;
} 
