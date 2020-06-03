#include <stdio.h>

/*
//0801 计算天数
//问题描述：定义一个结构体变量（包括年，月，日）。输入某年某月某日，计算该日在本年是第几天，注意闰年问题。
//输入形式：输入一行，包括三个正整数，表示某年某月某日。
//输出形式：输出一行，输出这一天是这一年的第几天。
//样例输入：2013 3 5
//样例输出：64
struct date
{
	int year;
	int month;
	int day;
	
};
int main()
{
	struct date a;
	int b[12]={31,28,31,30,31,30,31, 31, 30, 31, 30, 31},i,sum=0,flag;
	
	scanf("%d%d%d",&a.year,&a.month,&a.day);
	if(a.year%4==0 && a.year%100!=0 || a.year%400==0)
		flag=1;
	else flag=0;
	
	for(i=0;i<a.month-1;i++)
		sum=sum+b[i];
	if(a.month>2)
		sum=sum+a.day+flag;
	else sum=sum+a.day;
	
	printf("%d\n",sum);
	
	return 0;
} 
*/





/*
//0802 最低成绩
//问题描述：已知学生的记录由学号和成绩构成，由n名学生的数据。 请编写函数fun,函数的功能是：找出成绩最低的学生记录，
//			通过形参返回主函数（规定只有一个最低分）
//输入形式：输入占n+1行。第一行为一个整数n，表示学生人数。一下n行每行2个数据，分别为学生的学号和成绩。
//输出形式：输出一行，输出成绩最低的学生记录。
//样例输入：5
//			2014A001 81 
//			2014A002 89 
//			2014A003 66 
//			2014A004 87 
//			2014A005 77
//样例输出	2017A003 66 
#define N 30
struct Stu
{
	char num[15];
	int s;
	
	
 } ;
 
 void fun(struct Stu a[],int n, struct Stu *p)
 {
 	
 	int i;
 	*p=a[0];
 	for(i=0;i<n;i++)
 	{
 		if(a[i].s<p->s)
 			*p=a[i];
	 }
 	
 }
int main()
{
	int n,i;
	struct Stu stud[N],st;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",stud[i].num,&stud[i].s);
	fun(stud,n,&st);
	
	printf("%s %d\n",st.num,st.s);
	
	return 0; 
	
	
}
*/






//0803 图书价格统计
//问题描述：用结构数组保存输的信息，现有N（N<50）本书，每本书包括书名（长度小于30字符串）、出版社（长度小于15）
//			数量（整数）、单价（浮点数），读入书的信息并按单价由少到多输出各书信息及购买这些书的总费用； 
//输入形式：第一行为一个整数N，表示图书数量， 接下来的N行中每行包含一本书的信息数据，各数据之间空格分隔；
//输出形式：输出前N行，为按单价顺序的所有书的信息，第N+1行为购买书的总费用（保留两位小数）
/*样例输入：
			3
			C-Programming qinghua      20 		28.50
			DataStruct     jixiegongye 30 		41.55
			OpratingSystem  gaodengjiaoyu 60	16.75
//样例输出
			OpratingSystem  gaodengjiaoyu 60        16.75
			C-Programming   qinghua       20 	 	28.50
			DataStruct     jixiegongye   30 		41.55
			2821.50
*/
/*
struct BookType
{
	
	char name[30];
	char concern[15];
	int num;
	float price;
}; 
void sort(struct BookType bk[],int n)
{
	int i,j,k;
	struct BookType temp;
	
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(bk[j].price<bk[k].price) k=j;
		if(k!=i)
		{
			temp=bk[i];bk[i]=bk[k];bk[k]=temp;
		 } 
	}
}
float total(struct BookType bk[],int n)
{
	int i;
	float total_price=0;
	
	for(i=0;i<n;i++)
	{
		total_price=total_price+bk[i].price*bk[i].num;
	}
	
	return total_price;
	
}
int main()
{
	int n,i;
	struct BookType book[50];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%s%d%f",book[i].name,book[i].concern,&book[i].num,&book[i].price);
		
	sort(book,n);	
	
	for(i=0;i<n;i++)
	{
		printf("%-20s %-15s %-10d %-.2f\n",book[i].name,book[i].concern,book[i].num,book[i].price);//-号的作用是让它靠左输出； 
		
	}
	
	printf("%.2f\n",total(book,n));
	
	return 0; 
}
*/







/*
//0804 正向链表
//问题描述：正向创建一个链表，并输出链表中的各个值。
//输入形式：输入两行，第一行输入链表结点的个数，第二行依次输入链表节点的值，各个值之间以空格分隔。
//输出形式：输出一行，输出链表中各个结点的值，各个值间以空格分隔。
//样例输入：5
//			1 3 5 7 9 
//样例输出：1 3 5 7 9  

#include <stdlib.h>
struct Node
{
	int num;
	struct Node *next;
};

struct Node *creat(int n) 
{
	struct Node *head,*p,*q;
	int i;
	
	p=q=(struct Node *)malloc(sizeof(struct Node));
	scanf("%d",&p->num);
	head=p;
	
	if(n==1)
	p->next=NULL;
	
	else
	{
		for(i=1;i<n;i++)
		{
				p=(struct Node *)malloc(sizeof(struct Node));
				scanf("%d",&p->num);
				q->next=p;
				q=p;
				
		}
		q->next=NULL;
	}
	return head;
}

void print(struct Node *head)
{
	struct Node *p;
	p=head;
	
	while(p!=NULL)
	{
			printf("%d",p->num);
			p=p->next;	
	}
}

int main()
{
	int n;
	struct Node * head;
	
	scanf("%d",&n);
	
	head=creat(n);
	print(head);
	
	return 0;
	
}
*/




/* 
//0805 逆向链表

#include <stdlib.h>
struct Node
{
	int num;
	struct Node *next;
};

struct Node *creat(int n) 
{
	struct Node *head,*p;
	int i;
	
	p=(struct Node *)malloc(sizeof(struct Node));
	scanf("%d",&p->num);
	p->next=NULL;
	head=p;
	


		for(i=1;i<n;i++)
		{
				p=(struct Node *)malloc(sizeof(struct Node));
				scanf("%d",&p->num);
				
				p->next=head;
				head=p;
		}
	
		return head;
}

void print(struct Node *head)
{
	struct Node *p;
	p=head;
	
	while(p!=NULL)
	{
			printf("%d",p->num);
			p=p->next;	
	}
	
}

int main()
{
	int n;
	struct Node * head;
	
	scanf("%d",&n);
	
	head=creat(n);
	print(head);
	
	return 0;
	
}

*/ 


