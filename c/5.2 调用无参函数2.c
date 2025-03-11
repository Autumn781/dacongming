#include<stdio.h>
int main()
{
    void px(int a[],int n);
    int a[10],i;
    printf("shuru10geshu:\n");
    for(i=0;i<=9;i++)
     scanf("%d",&a[i]);
    px(a,10);
    printf("paixvhou:\n");
    for(i=0;i<=9;i++)
     printf("%d\t",a[i]);
    printf("\n");

}
void px(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
     for(j=i+1;j<n;j++)
      if(a[i]>a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
}