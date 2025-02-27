#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a'&&a<='z');
    a-=32;
    switch (a)
    {
   case'A':printf("80-100\n");break;
   case'B':printf("70-84\n");break;
   case'C':printf("60-69\n");break;
   case'D':printf("<60\n");break;
   default:printf("chongshu\n");break;
    }
    return 0 ;
}