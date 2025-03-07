#include<stdio.h>
int main()
{
    char a[3][3]={{' ','*',' '},{'*',' ','*'},{' ','*',' '}};
    int i,j;
    for(i=0;i<3;i++)
    {     for(j=0;j<3;j++)
      printf("%c",a[i][j]);}

    printf("\n");
    return 0;
}