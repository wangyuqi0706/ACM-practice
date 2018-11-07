#include<stdio.h>
int main()
{
	int left,last,i,n;
	while(scanf("%d",&n) != EOF)
	{	
		left=1;
		for(i=1;i<n;i++)
		{
			last=2*(left+1);
			left=last;
		}
		printf("%d\n",last);
	}
	return 0;
}