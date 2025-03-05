#include<stdio.h>
int main()
{
    double n=1,sum=0,a=1;
    while (n<=20)
    {
        n+=1;
        sum+=a;
        a*=n;
    }
    printf("%lf\n",sum);
    
}