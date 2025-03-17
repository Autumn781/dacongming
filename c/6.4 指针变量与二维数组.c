#include<stdio.h>
int main()
{
    int a[3][4]={1,2,3,4,5,6,6,5,4,3,2,1};
    int *p;
    for(p=a[0];p<=a[0]+11;p++){
        if((p-a[0])%4==0)
         printf("\n");
        printf("%d\t",*p);
    }
    printf("\n");
}