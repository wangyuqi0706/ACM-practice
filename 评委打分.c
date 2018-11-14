#include<stdio.h>
//青年歌手大奖赛中，评委会给参赛选手打分。选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分，请编程输出某选手的得分。
int main()
{
	int n,data,max,min,i;
	float score,sum;
	while(scanf("%d",&n) != EOF)
	{
		sum = 0;
		//getchar();
		for(i=0;i<n;i++)
		{			
			scanf("%d",&data);
			if(i==0)			
				{max=min=data;}
			if(data>max) 	
				{max=data;}
			if(data<min) 	
				{min=data;}
			sum += data;
		}
		sum = sum - max - min;
		score = sum/(n-2);
		printf("%.2f\n",score);
	}
	return 0;
} 