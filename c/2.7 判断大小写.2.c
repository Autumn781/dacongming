#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    c=(c>='A'&&c<='Z')?(c+=32):c;
    printf("%c",c);
    return 0;
}
/*
   double a,b,t;
    scanf("%lf,%lf",&a,&b);
   1, if(a>b)
    {t=a;
    a=b;
    b=t;}
    printf("%lf,%lf\n",a,b);
    
   2, a>b?printf("%f,%f\n",a,b):printf("%f,%f\n",b,a);
    
    */