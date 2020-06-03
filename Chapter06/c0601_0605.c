#include <stdio.h>


/* 
//0601 函数返回最大值；
//描述：设计一个函数，求三个整数的最大值。在主函数中给定三个整数，验证所设计函数的正确性。
//输入形式：输入一行，依次为三个整数；
//输出形式：输出一行，为三个数中的最大数；
//样例输入：12 15 9
//样例输出：15
int max_value(int x,int y,int z)
{
	
	int max=x;
	if(y>max) max=y;
	if(z>max) max=z;
	
	return max;	

}

int main()
{
	int a, b,c;
	
	scanf("%d%d%d",&a,&b,&c);

	printf("%d",max_value(a,b,c));	
	
	return 0;
} 
*/ 



/*
//0602  排序
//问题描述：对输入的10个整数进行排序，按从小到大的顺序输出。要求排序过程由主函数完成。在主函数中进行验证。
//输入形式：输入包括一行，共10个整数，各数之间由空格分隔。
//输出形式：在同一行上输出排好序的10个数，各数之间由空格分隔。
//样例输入：25 48 13 27 68 76 43 20 9 65
//样例输出：3 13 20 25 27 43 48 65 68 76

void sort(int a[],int n)
{
		int i,j,t;
		
		for(i=0;i<n-1;i++)
		{
			
			for(j=0;j<n-1-i;j++)
				if(a[j]>a[j+1])
				{
					t=a[j]; a[j]=a[j+1]; a[j+1]=t;
				}
		}
		
} 


int main()
{
	int b[10],i;
	
	for(i=0;i<10;i++)
		scanf("%d",&b[i]);
	sort(b,10);//实参的类型顺序要和形参一致 
	for(i=0;i<10;i++)
		printf("%d ",b[i]);
		
	return 0;
 } 
 */





/*
//0603 判断素数
//问题描述：判断素数，在主函数中输入一个大于1的正整数，输出是否是素数；
//输入形式：输入一行，包括1个正整数；
//输出形式：输出一行，若是素数，则输出YES，否则输出NO；
//样例输入:11
//样例输出：YES
#include <math.h> 
int  panduan(int n)
{
	
	int i,k=sqrt(n);//k=n的平方根	
	for(i=2;i<=k;i++)
		if(n%i==0) break;
	if(i>=k+1)
		return 1;
	else return 0;
	
}

int main()
{
	int	a;
	scanf("%d",&a);
	if(panduan(a)==1)
		printf("YES\n");
	else printf("NO");
	return 0;	
}
*/



/*
//0604 统计个数
//问题描述：编写一个函数，由实参传来个字符串，统计字符串中字母的个数，在主函数中输入字符串，输出结果；
//输入形式：输入一行字符串；
//输出形式：输出字符串中字母的个数；
//样例输入： Myname is tom
//样例输出：11
#include <string.h>
int count(char str[])
{
	int i,n=0;
	
	for(i=0;str[i]!='\0';i++)
		if('a'<=str[i] && str[i]<='z' ||'A'<=str[i] && str[i]<='Z')
			n++;
	return n;
		
}

int main()
{
	char c[20];
	
	gets(c);
	
	printf("%d\n",count(c));
	
	return 0;
}

*/






/*
//0605 寻找下标
//问题描述：已知一个整数数组x[]，其中的元素彼此都不相同，找出给定的数组中是否有一个元素满足x[i]=i的关系，数组下标从0开始，
//			若x[]={-5,-2,7,3,0,6}，则x[3]=3；设计一个函数完成上述问题，并设计main()检验；
//输入形式：第一行包含一个整数n(0<n<100),表示数组中元素的个数。第二行包含n个整数，依次表示数组中的元素。
//输出形式：输出为一个整数，满足x[i]=i的元素，若有多个元素满足，输出第一个满足的元素，若没有，则输出N。
//样例输入：6
//			-2 -1 7 3 4 8
//样例输出	3
int judge(int x[],int n)
{
	int i,re=-1;
	if(0<n<100)
		for(i=0;i<n;i++)
		{
			if(x[i]==i)
			{
		
				re=i;
				break;
			}
			
		}
		return re;

}


int main()
{
	int n, a[100],i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		
		scanf("%d",&a[i]);
		
	if (judge(a,n)>=0)
		printf("%d\n",judge(a,n));
	else
		printf("N\n");
		
	return 0;
}

*/






















 


 
 
