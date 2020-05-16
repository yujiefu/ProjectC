/*
#include <stdio.h>
int main()
{
	int n,w,a,b,c,d,e;
	printf("请输入小于五位数的数字:\n");
	scanf("%d",&n);
	if(n>9999)w=5;
		else if(n>999) w=4;
		else if(n>99)	w=3;
		else if(n>9)	w=2;
		else w=1;
	printf("位数为%d\n",w);
	
	
	a=n/10000;
	b=n/1000%10;
	c=n/100%10;
	d=n/10%10;
	e=n%10; 
	
	
	switch(w)
	{	
		case 5:
		
		
			printf("%d %d %d %d %d\n",a,b,c,d,e);
			printf("%d %d %d %d %d\n",e,d,c,b,a);
			break;
		
		case 4:
			printf("%d %d %d %d\n",b,c,d,e);
			printf("%d %d %d %d\n",e,d,c,b);
			break;
		case 3:
			printf("%d %d %d\n",c,d,e);
			printf("%d %d %d\n",e,d,c);
			break;
		case 2:
			printf("%d %d\n",d,e);
			printf("%d %d\n",e,d);
			break;
		case 1:
			printf("%d\n",e);
			printf("%d\n",e);
	}
	return 0;		
				
}
*/
