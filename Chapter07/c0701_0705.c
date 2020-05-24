#include <stdio.h>
////////////////////////////////指针可以返回多个值/////////////////// 
/*
//排序输出
//问题描述：输入三个整数，按由小到大的顺序输出，用指针方法实现。
//输入一行，只包括三个整数。
//输出形式：输出一行，按小到大的顺序输出这三个整数，各个整数之间以空格分隔；
//样例输入：3 2 1
//样例输出：1 2 3

void sort(int *p1,int *p2,int *p3)
{
	int t;
	if(*p1>*p2)
	{
		t=*p1,*p1=*p2,*p2=t;
	}
	if(*p1>*p3)
	{
		t=*p1,*p1=*p3,*p3=t;
	}
	if(*p2>*p3)
	{
		t=*p2,*p2=*p3,*p3=t;
	}
	
	
}


int main()
{
	int a,b,c;
	
	scanf("%d%d%d",&a,&b,&c); 

	sort(&a,&b,&c);//传递变量地址给形参指针 
	
	printf("%d %d %d\n",a,b,c);
	
	return 0; 
}
*/




/*
//0702 求平均成绩
//问题描述：某班期末考试后要统计本班某门课程的平均成绩、最高成绩和最低成绩，，人数不超过30人，实现：求最高成绩、最低成绩、平均成绩；
//输入形式： 一组测试数据，第一行为一个整数N，表示本班有N个人（N>30）,接下来的N行中每行一个整数，表示一个人的成绩；
//输出形式：输出一行。该行包含三个数，分别是：最高成绩，最低成绩和平均成绩。成绩之间由空格分隔，其中平均成绩为实数，并精确到小数点后两位；
//样例输入: 5
//			90
//			83
//			76
//			85
//			62
//样例输出：90 62 79.20 

void count(int a[],int n,int *pa,int *pi,float *pav)
{
	
	int i;
	float ave=0;
	
	*pa=*pi=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>*pa) *pa=a[i];
		if(a[i]<*pi) *pi=a[i];
		ave=ave+a[i];
		
	}
	
	ave=ave/n;
	*pav=ave;
	
	
 } 

 
 int main()
 {
 	int N,score[30],i,max,min;
 	float aver;
 	
 	scanf("%d",&N);
 	for(i=0;i<N;i++)
 		scanf("%d",&score[i]);
 	
	count(score,N,&max,&min,&aver); 	
	
	printf("%d %d %.2f\n",max,min,aver);
	
	return 0;
 }
 
*/








//0703 统计各个字符
/*
问题描述：输入一行文字：找出其中大写字母，小写字母、空格、数字以及其他字符各有多少个。用指针方法实现。
输入形式：输入一行，输入一行字符串；
输出形式：输出一行，输出 大写字母、小写字母、空格、数字及其他字符个多少个。各个数值以空格分隔；
样例输入：It is a dog. 2 or 3 year old?
样例输出：1 17 8 2 2  
*/
/* 
#define N 100
#include <string.h>
void count(char *p,int *pdx,int *pxx,int *pkg, int *psz, int *pqt)
{
	char c;
	while((c=*p++)!='\0')
	{
		if('A'<=c && c<='Z') (*pdx)++;
		else if('a'<=c && c<='z') (*pxx)++;
		else if(c==' ') (*pkg)++;
		else if('0'<=c && c<='9') (*psz)++;
		else (*pqt)++;
	}
	
	
} 

int main()
{
	
	char str[N];
	int dx=0,xx=0,kg=0,sz=0,qt=0;
	
	gets(str);//包含空格所以用gets
	
	count(str,&dx,&xx,&kg,&sz,&qt);
	
	printf("%d %d %d %d %d\n ",dx,xx,kg,sz,qt); 
	
	return 0;
	
}
*/
 
 



/*
//0704 字符交换
//问题描述：输入一个字符串，找出其中最小字符和次最小字符，交换着两个字符，输出调整后的结果。
//输入形式：输入一行，包括一个字符串；
//输出形式：输出一行，为调整之后的字符串；
//样例输入：whfejkbui
//样例输出：whfbjkeui
#define N 100
#include <string.h> 
void change(char *p)
{
	char temp, *pm, *pk;
	pm=p;pk=p;
	
	while((*p)!='\0')
	{
		if(*p<*pm)
		{
			pk=pm;
			pm=p;
		}
			else
		if(*p<*pk) pk=p;
		p++;
	
	}
	temp=*pm;*pm=*pk;*pk=temp;
 } 


int main()
{
	char a[N];
	
	gets(a);
	
	change(a);
	
	printf("%s\n",a);
	
	return 0;
}

*/







/*
// 0705 字符串比较
//问题描述：按字符串比较过程对给定的两个字符串进行比较，若相等则结果为0，若不等则结果为对应不等字符的差。按要求实现对给定字符串的比较。
//			要求程序中用函数实现两个字符串的比较 int stringcmp(char *str1, char *str2)
//输入形式：第一行为一个整数N，表示测试数据的组数，接下来的N行中每行包含两个字符串，字符串之间由空格分隔。
//输出形式：输出共N行，每行为对应输入一行的两个字符串的比较结果。
//样例输入：3
//			Happy Help
//			Help Help
//			Help Happy
//样例输出：-4
//			0
//			4 
#define M 100
int stringcmp(char *str1, char *str2)
{
	
	int i,re;
	
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==str2[i])
		{
			re=0;continue;
		}
		else
		{
			re=str1[i]-str2[i];
			break;
		}
	}
	return re;
	
}

int main()
{
	
	int N,result[20],i;
	char string1[M],string2[M];
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s%s",string1,string2);
		result[i]=stringcmp(string1,string2);
		
	}
	
	for(i=0;i<N;i++)
		printf("%d\n",result[i]);
	
	return 0;
}

*/
















































 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 



