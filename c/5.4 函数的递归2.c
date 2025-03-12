#include<stdio.h>
int main()
{
    int jc(int n);
    int n;
    printf("shuru:");
    scanf("%d",&n);
    printf("%d!=%d\n",n,jc(n));
    return 0;

}
int jc(int n)
{
    int jiegou;
    if(n<0)
     printf("budui");
    else if(n==0||n==1)
    { jiegou=1;
       
    }
    else{
        jiegou=jc(n-1)*n;
    }
    
   return(jiegou);

}