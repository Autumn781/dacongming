#include<stdio.h>
int main()
{
double n=1,c=1,a=2;
while (n<=50)
{
    n=n+1;
    c=c*a;
    a=a+2;


}
printf("%lf",c);
return 0;
}