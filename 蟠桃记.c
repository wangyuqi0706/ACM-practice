#include<stdio.h>
//第一天悟空吃掉桃子总数一半多一个，第二天又将剩下的桃子吃掉一半多一个，以后每天吃掉前一天剩下的一半多一个，
//到第n天准备吃的时候只剩下一个桃子。聪明的你，请帮悟空算一下，他第一天开始吃的时候桃子一共有多少个呢？
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