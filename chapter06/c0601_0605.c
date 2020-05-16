#include <stdio.h>


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

