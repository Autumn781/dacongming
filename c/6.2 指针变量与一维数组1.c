#include<stdio.h>
int main()
{
    int a[5];
    int i;
    printf("shuru:\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
        a[i]=a[i]*2;
    }
    printf("jiabh:\n");
    for(i=0;i<=4;i++)
     printf("%d\t",a[i]);
    printf("\n");
}