#include<stdio.h>
int main()
{
    double a,b,c,d;
    scanf("%lf",&d);
    a=(int)(d/100);
    b=(int)((d-a*100)/10);
    c=(int)((d-a*100-b*10)/1);
    printf("bai=%-3.1f,shi=%-3.1f,ge=%-3.1f",a,b,c);

}