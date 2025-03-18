#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int (*p)[3];
    p=a;
    int i,j,hang,lie;
    printf("shuruhanglie:\n");
    scanf("%d,%d",&hang,&lie);
    i=hang-1;
    j=lie-1;
    printf("di%dhangdi%dlie:%d\n",hang,lie,*(*(p+i)+j));
}