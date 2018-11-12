#include<stdio.h>
int main()
{
	int y,m,d,second,result;
	while(scanf("%d/%d/%d",&y,&m,&d) != EOF)
	{
		second=28;
		result=0;
		if(y%4==0 && y%100!=0 || y%400==0)
		{
			second=29;
		}
		switch(m-1)
		{
			case 11:
				result += 30;
			case 10:
				result += 31;
			case 9 :
				result += 30;
			case 8 :
				result += 31;
			case 7 :
				result += 31;
			case 6:
				result += 30;
			case 5 :
				result += 31; 
			case 4 :
				result += 30;
			case 3 :
				result += 31;
			case 2 :
				result += second;
			case 1 :
				result += 31;
				break;
			default :result += 0;
		}
		result += d;
		printf("%d",result);
		printf("\n");
	}	
	return 0;
}	
	