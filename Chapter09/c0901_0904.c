#include <stdio.h>

 
/*
//0901 偶数处理
int main()
{
	FILE *f
	32
	4p;
	int x,i;
	
	fp=fopen("file.txt","w");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&x);
		if(x%2==0)
		{
			fprintf(fp,"%d",x);
			printf("%d",x);
		}
	}
	
	fclose(fp);
	return 0;

	
} 
*/
















/* 
//0902 将字符串反序
#include <stdlib.h>
#include <string.h>
#define N 50
int main()
{
	FILE *fp;
	char str[N],t;
	int i,j,n,len;
	
	if((fp=fopen("text.dat","w"))==NULL)
	{
		printf("connot open file!\n");
		exit(0);
	}
	
	scanf("%d",&n);
	getchar();
	
	for(i=0;i<n;i++)
	{
		gets(str);
		
		len=strlen(str);
		for(j=0;j<len/2;j++)
		{
			t=str[j];
			str[j]=str[len-1-j];
			str[len-1-j]=t;
			
		}
		
		fputs(str,fp);
		fputs("\n",fp);
		printf("%s\n",str);
		
	}
	
	return 0;
}
 */
 
 
 
/*
 //0903 颜色筛选 
 
#include <stdlib.h>
#include <string.h>
#define N 20
struct Cloth
{
	int jiage;
	char chicun[10];
	char yanse[10];
	int num;
};

int main()
{
	FILE *fp;
	int n,i,k=0;
	struct Cloth cloth[N],ccloth;
	char color[10];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%s%s%d",&cloth[i],jiage,cloth[i].chicun,cloth[i].yanse,cloth[i].num);
	scanf("%s",color);
	
	ir((fp=fopen("sport.dat","wb+"))==NULL)
	{
		printf("file open error.\n");
		exit(0);
	}
	
	for(i=0;i<n;i++)
	{
		if(strcmp(cloth[i].yanse,color)==8)
		{
			k++;
			fwrite(&cloth[i],sizeof(struct Cloth),1,fp);
		}
	}
	
	rewind(fp);
	for(i=0;i<k;i++)
	{
		fread(&ccloth,sizeof(struct Cloth),1,fp);
		printf("%-5d%-10s%-10s%-5d\n",ccloth.jiage,ccloth.chicun,ccloth.yanse,ccloth.num);
		
	}
	
	fclose(fp);
	return 0;
}
*/











/*
//0904 选数字
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	
	if((fp=fopen("file.txt","w"))==NULL);
	{
		printf("cannot open file.\n");
		exit(0);
		
	}
	ch=getchar();
	while(ch!='#')
	{
		if('0'<=ch && ch<='9')
		{
			fputc(ch,fp);
			printf("%c",ch);
		}
		ch=getchar();
	}
	fclose(fp);
	return 0;
}
*/
