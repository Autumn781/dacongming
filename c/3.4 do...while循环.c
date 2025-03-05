#include<stdio.h>
int main()
{
int n=1,sum=0,a=2;
do
{
    n=n+1;
    sum=sum+a;
    a=a+2;


}while (n<=50);
printf("%d",sum);
return 0;
}