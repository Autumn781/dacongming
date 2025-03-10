#include<stdio.h>
int main()
{
    float max(float x,float y);
    float a[4];
    int i;
    float t,u,v;
    for(i=0;i<=3;i++)
    {
    printf("shurudi%dgeshuzi:",i+1);
    scanf("%f",&a[i]);
    }
 t=max(a[0],a[1]);
 u=max(a[2],a[3]);
 v=max(t,u);
 printf("qianzuida%f\n",t);
 printf("houzuida%f\n",u);
 printf("zuida%f\n",v);

}
float max(float x,float y)
{
    float zuida;
    if(x>y)
    return(x);
    else
    return(y);
    
}
