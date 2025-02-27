#include<stdio.h>
int main()
{
    float t=0,s,n=0;
    while (t<300)
    {
     scanf("%f",&s);
     t+=s;
     n+=1;  
    }
    printf("%f",n);
    return 0 ;
    
}