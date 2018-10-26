#include<stdio.h>
int main()
{
	int i;
	double m,n,cnt;
	while(scanf("%lf %lf",&n,&m) != EOF)
	{
		if(n==0&&m==0)
			break;
		cnt=n;
		double result=0,sum=0;
		for(i=0;i<m-n+1;i++)
		{
			result=1.0/(cnt*cnt);
			sum += result;
			cnt++;
		}
		printf("%.5lf\n",sum);
	}
	return 0;
}
