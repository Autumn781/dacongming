#include<stdio.h>

int main()
{
    int a;
    printf("qinshuru:");
    scanf("%d",&a);
    if((a%100!=0&&a%4==0)||a%400==0)
    printf("%dshirun\n",a);
    else
    printf("%dbushi\n",a);
    return 0;
}