#include<stdio.h>
int main()
{
    double sum,a,n;
    for(sum=0,a=1,n=1;n<=20;n+=1)
    {
        a*=n;
        sum+=a;
    }
    printf("%lf",sum);
    return 0;
}