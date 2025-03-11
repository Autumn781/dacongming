#include<stdio.h>
int main()
{
    int age(int n);
    printf("di5genianlinwei:%d\n",age(5));

}
int age(int n)
{
    int nianl;
    if (n==1)
     nianl=10;
    else 
     nianl=age(n-1)+2;
    return(nianl);
}