#include <stdio.h>
#define N 20
/* 
//0401 求最小值；输入一行，第一个数为n，以后为n个整数，各数空格间隔，输出最小值； 
int main()
{
	int n;
	int n,a[N],i,min;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	min=a[0];
	for(i=1;i<n;i++)
		if(a[i]<min) min=a[i];
		
	printf("%d\n",min);
	return 0;
		
}
*/


/*
//0402 找数字;将一个字符串中所有数字输出，字符串包含字母数字；只输出数字； 
int main()
{
	char str[80];
	int i;
	
	scanf("%s",str);
	
	for(i=0;str[i] !='\0';i++)
		if('0'<=str[i] && str[i]<='9')
			printf("%c",str[i]);
	return 0;				
	
}
*/



/*
//0403 字符连接；输入两个字符串，不用库函数strcat把串b的前五个字符连接到串a中；
//如果b的长度小于4，则把b所有元素连接到a中，并输出连接后的字符串a（字符串中可能有空格） 
//输入形式：输入两行，两个字符串a和b（两个字符串长度小于80）
//输出形式：输出一行，输出字符串a 
int main()
{
	char a[80],b[80];
	int i,j;
	
	gets(a);gets(b);
	
	i=0;
	while(a[i] !='\0')
		i++;
		
	for(j=0;j<5 && b[j] !='\0';j++)
	{
		a[i]=b[j];
		i++;
		
	}	
	a[i]='\0';
	
	puts(a);
	
	return 0;
		
} 
*/



/* 
//0404 数据元素右移；把给定的一维数据各个元素循环右移j位
//输入形式：输入3行，第一行是一个整数n<=20，为数组元素个数，第2行是n个整数，为数组元素的值；第三行是一个整数j，表示数组各个元素循环右移j位。各数空格分隔； 
int main()
{
	int n,j,a[20],i,m,t;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&j);
	
	for(m=0;m<j;m++)
	{
		t=a[0];
		for(m=0;m<j;m++)
			a[i-1]=a[i];	
		a[n-1]=t;
	}	
	
	for(i=0;i<n;i++)
		printf("%d",a[i]);
		
	return 0;
	
} 
*/



/*
//0405 找素数 ；把前n个素数放入一堆数组a中
//输入形式：输入一行，是一个整数n<=200，表示要找的素数个数。
//输出形式：占多行，每行10个整数，依次为数组a中的所有n个素数。各数之间用空格分隔；
#include <math.h>
int main()
{
	int n,i=0,a[200],m=2,k,j;
	
	scanf("%d",&n);
	
	while(i<n){
		k=sqrt(m);
		for(j=2;j<=k;j++)
			if(m%j==0) break;
		if(j>=k+1)
		{
			a[i]=m;
			i++;			
		}
		m=m+1;
	}
	
	for(i=0;i<n;i++)
	{	
		printf("%5d",a[i]);
		if((i+1)%10==0) printf("\n");
	}
	
		return 0;
} 
*/







 
