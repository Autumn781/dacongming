#include<stdio.h>
int main()
{
    void sc(float *p,int n);
    float fs[3][4]={65,67,70,60,80,87,90,99,93,98};
    int *q;q=&fs[0][0];
    sc(q,12);
    return 0;

}
void sc(float *p,int n)
{
    float sum=0;
    int i;
    for(i=0;i<=11;i++)
     sum+=*(p+i);
    printf("pjs:%f\n",sum/n);
}