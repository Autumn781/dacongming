#include<stdio.h>
int main()
{
    int a,b,*p,*q,r;
    printf("shuru:\n");
    scanf("%d,%d",&a,&b);
    p=&a;
    q=&b;
    if(a<b)
    {
        r=*p;
        *p=*q;
        *q=r;
    }
    printf("da:%d xiao:%d\n",a,b);
    return 0;
}