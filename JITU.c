#include<stdio.h>
int main()
{
int a,b;
while(scanf("%d%d",&a,&b)!=EOF)
{
printf("兔的数量为%d\n",(b-2*a)/2);
printf("鸡的数量为%d\n",a-(b-2*a)/2);
}
return 0;
}
