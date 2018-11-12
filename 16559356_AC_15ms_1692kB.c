#include<stdio.h>
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