#include<stdio.h>
int main()
{
  char c[81];
  int i,shu=1;
  gets(c);
  if(c[0]==' ')
   shu=0;
  for(i=0;c[i]!='\0';i++)
    if(c[i]==' '&&c[i+1]!=' '&&c[i+1]!='\0')
     shu++;
 printf("you%d",shu);
   
}