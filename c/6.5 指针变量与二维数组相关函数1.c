#include<stdio.h>
int main()
{
    void sc(float a[][4],int n);
    float fs[3][4]={65,67,70,60,80,87,90,99,93,98};
    sc(fs,12);
    return 0;

}
void sc(float a[][4],int n)
{
    float sum=0;
    int i,j;
    for(i=0;i<=2;i++)
     for(j=0;j<=3;j++)
      sum+=a[i][j];
    printf("pjs:%f\n",sum/n);
}