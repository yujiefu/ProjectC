#include <stdio.h> 
/*
//0201 字母密码转换 
int main()
{
	char f;
	 
	f=getchar();
	
	if(f>='W' && f<='Z'||f>='w' && f<='z')
		putchar(f+4-26);
	else
		putchar(f+4);
		
	return 0;
	
}
*/


/*
//0202 求最大数 
int main()
{
	int a,b,c,max;
	scanf("%d%d%d",&a,&b,%c);
	max=a;
	if(b>max) max=b;
	if(c>max) max=c;
	
	printf("%d\n",max);
	
	return 0;	
	
}
*/

/*
//0203百位为7的五位数； 
int main()
{
	int a,t;
	scanf("%d",&a);
	if(a>=10000 && a<=99999)
	{
		t=a%1000/100;
		if(t==7)
		{
			printf("yes");
		}
		else
			printf("no");
	}
	else
		printf("no");
	return 0;
}
*/

/*
//0204 Armstrong数 (其值等于他本身每位数字立方和的数)
int main()
{
	int n,a,b,c;
	
	canf("%d",&n);
	
	a=n/100;
	b=n%100/10;
	c=n%10;
	if(a*a*a+b*b*b+c*c*c==n)
		printf("Yes");
	else
		printf("No");
	return 0;
 } 
*/
 
 
 /* 
 //0205 输出数字
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
