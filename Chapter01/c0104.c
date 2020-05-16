/*
#include <stdio.h>
#include <math.h>
int main()
{
	float r;//年增长率 
	float n;//年数 
	float p;//与现在相比的倍数； 
	int i=0; 
	printf("请输入增长率及年数：\n");
	scanf("%.2f%f",&r,&n);//这一步，r,n获取不到输入的值，不知道咋回事 
//	p=pow(1.00+r,n);
	printf("r,n的值为：%.2f%f",r,n);//r,n依旧是0.00 0.000000 
	p=1+r;
	for(i;i<=n;i++)
	{
		p=p*p;
	}
	printf("与现在相比的倍数为%.2f \n",p); 
	return 0;
}
*/
