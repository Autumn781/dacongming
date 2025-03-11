#include<stdio.h>
int main()
{
    int max4(int a,int b,int c,int d);
    int a,b,c,d,zds;
    printf("shuru4geshu:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    zds=max4(a,b,c,d);
    printf("zuidashuwei:%d\n",zds);
}
int max4(int a,int b,int c,int d)
{
    int max2(int a,int b);
    return(max2(max2(max2(a,b),c),d));

}
int max2(int a,int b)
{
    return(a>b?a:b);
}