#include<stdio.h>
int main()
{
int n=1,sum=0,a=2;
while (n<=50)
{
    n=n+1;
    sum=sum+a;
    a=a+2;


}
printf("%d",sum);
return 0;
}