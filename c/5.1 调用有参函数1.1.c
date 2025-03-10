#include<stdio.h>
int main()
{
    float a[4];
    int i;
    float t,u,v;
    for(i=0;i<=3;i++)
    {
    printf("shurudi%dgeshuzi:",i+1);
    scanf("%f",&a[i]);
    }
 if(a[0]<a[1])
 t=a[1];
 else
 t=a[0];
 if(a[2]<a[3])
 u=a[3];
 else
 u=a[2];
 if(t<u)
 v=u;
 else
 v=t;   
 printf("qianzuida%f\n",t);
 printf("houzuida%f\n",u);
 printf("zuida%f\n",v);

}