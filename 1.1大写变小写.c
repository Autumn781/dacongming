#include<stdio.h>
int main()
{    
    char a,d;
    printf("QINGSHURU:");
    scanf("%c,%c",&a,&d);
    a+=32;
    d+=32;
    printf("变成了");
    printf("%c%c",a,d);
    return 0;
}