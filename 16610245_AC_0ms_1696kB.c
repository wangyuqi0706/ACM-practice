#include<stdio.h>
#include<math.h>
int main()
{
	int data[100],n,max=0;
	while(scanf("%d",&n) != EOF)
	{
		int last=2147483647;
		if(n==0)
			break;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&data[i]);
		//	if(data[i]<0)
		//		data[i] = -1*data[i];
		}
		for(int a=0;a<n;a++)
		{
			max=0;
			for(int b=0;b<n;b++) 
			{
				if(abs(data[b])>abs(max) && abs(data[b])<abs(last))
				{
					max=data[b];
				}
			}
			last=max;
			if(a>0)
				printf(" ");
			printf("%d",max);
		}
		printf("\n");
	}
	return 0;
}