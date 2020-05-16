#include <stdio.h>
/*
//0301 自然数求和 20-150 
int main()
{
	int sum,i;
	for(i=20;i<=150;i++)
	{
	
		sum=sum+i;
	}
	printf("%d\n",sum);
	
	return 0;
}
*/


/*
//0302 给定数字求和 
int main()
{
	int a,n,s=0,i,t=0
	
	scanf("%d%d",&a,&n);
	
	for(i=1;i<=n;i++)	
	{
		t=t*10+1;
		s=s+t;
	}
	s=a*s;
	
	printf("%d\n",s);
	
	return 0;
} 
*/



/*
//0303 打印数字金字塔
int main()
{
	int n,i,j;
	
	scanf("%d",&n);
	
	for(i=1;i<n;i++)	
	{
		for(j=1;j<=12-i;j++)
	
			
			printf(" ");
		for(j=1;j<=i;j++)
		{
			if(j==10) printf("0");
			else printf("%d",j);
		}
		
		for(j=i-1;j>=1;j--)
			printf("%d",j);
			
		printf("\n");
	}
	return 0;
} 
 */
 
 
 
 /*
//0304 猴子吃桃 ; 猴子有x个桃子，当即吃了一半零一个，以后每天吃前一天剩余数量的一半零一个桃子 ，第n天只剩一个桃子；求猴子一共有多少个桃子？ 
int main()
{
	int x1,x2=1,n,i;
	
	scanf("%d",&n);
	
	i=1
	while(i<=n-1)
	{
		x1=2*(x2+1);
		x2=x1;
		i++;
		
	 } 
	
	printf("%d\n",x1);
	
	return 0;	
} 
 
*/ 


/*
//0305 乘方计算; 给出一个整数a和一个正整数n，求a的n次方； 
int main()
{
	int a,n,i,sum=1;
	
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++) 
	{
		sum=sum*a;
	
	
	}
	printf("%d",sum);
	return 0;
} 
*/
 
 
 
 
