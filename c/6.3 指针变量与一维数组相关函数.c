#include<stdio.h>
int main()
{
    float aver(float *p,int n);
    float zu1[5],zu2[10];
    int i;float *q,*r;
    q=&zu1[0];r=&zu2[0];
    printf("shuru:\n");
    for(i=0;i<=4;i++)
     scanf("%f",&zu1[i]);
    printf("shuru:\n");
    for(i=0;i<=9;i++)
     scanf("%f",&zu2[i]);
    printf("yi:%f\n",aver(q,5));
    printf("er:%f\n",aver(r,10));


}
float aver(float *p,int n)
{
    float sum=*p,pjs;
    int i;
    for(i=1;i<n;i++)
     sum+=*(p+i);
     pjs=sum/n;
     return(pjs);
}