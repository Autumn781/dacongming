#include<stdio.h>
int main()
{
    int a[5];
    int i,*p;
    p=&a[0];
    printf("shuru:\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",p+i);
        *(p+i)=*(p+i)*2;
    }
    printf("jiabh:\n");
    for(i=0;i<=4;i++)
     printf("%d\t",*(p+i));
    printf("\n");
}