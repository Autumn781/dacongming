#include<stdio.h>
int main()
{
    void a();
    void b();
    void c();
    a();
    b();
    c();
    b();
    c();
    return 0;
}
void a()
{
    printf("1234567\n");
}
void b()
{
    printf("111111\n");
}
void c()
{
    printf("7654321\n");
}
