#include<stdio.h>
int main()
{
float aver(float a[],int n);
float zu1[5],zu2[10];
int i;
printf("shuruyizhu:\n");
for(i=0;i<=4;i++)
scanf("%f",&zu1[i]);
printf("shuruerzhu:\n");
for(i=0;i<=9;i++)
scanf("%f",&zu2[i]);
printf("diyizhupjf:%f\n",aver(zu1,5));
printf("dierzhupjf:%f\n",aver(zu2,10));

return 0;
}
float aver(float a[],int n)
{
float sum=a[0],pjs;
int i;
for(i=1;i<n;i++)
sum=sum+a[i];
pjs=sum/n;
return(pjs);
}