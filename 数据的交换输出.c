#include<stdio.h>
//输入n(n<100)个数，找出其中最小的数，将它与最前面的数交换后输出这些数。 
int main ()
{
	int n,data[100],i,min,x,mark;
	while(scanf("%d",&n) != EOF)
	{
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&data[i]);
		} 
		min=data[0];
		mark=0;
		for(i=0;i<n;i++)
		{
			if(data[i]<min)
			{
				min=data[i];
				mark=i;
			}
		}
		x=data[0];
		data[0]=min;
		data[mark]=x;
		for(i=0;i<n;i++)
		{
			printf("%d",data[i]);
			if(i!=n-1)
			printf(" ");	 
		}
		printf("\n");
	}
 } 