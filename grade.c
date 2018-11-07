#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	double average[100],max=0;
	int num[100],score1,score2,score3;
	double max=0;
	for(i=0;i<n;i++)// 
	{
		scanf("%d %d %d %d",&num[i],&score1,&score2,&score3);//读入数据 
		average[i]=(score1+score2+score3)/3.0;//计算平均 
		if(average[i]>max)//确定最大值 
			max=average[i];
		printf("%.2lf\n",average[i]);
	}
	for(i=0;i<n;i++)
	{
		if(average[i]==max)
			printf("%d %.2lf\n",num[i],average[i]); 
	}
	return 0;
}
