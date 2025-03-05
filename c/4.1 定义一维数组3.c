#include<stdio.h>
int main()
{
    int i,j,t,a[10];
    printf("shuru:\n");
    for(i=0;i<=9;i++)
      scanf("%d",&a[i]);
    for(j=0;j<=8;j++)
      for(i=0;i<=8-j;i++)
       if(a[i]>a[i+1])
       {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
       }
    printf("paixvhou\n");
    for(i=0;i<=9;i++)
        printf("%d\t",a[i]);
    printf("\n");
    /*冒泡法（沉底法）*/

}