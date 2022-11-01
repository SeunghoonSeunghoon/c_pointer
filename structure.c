#include <stdio.h>

struct structName
{
    int a;
    int b;
}x,y; // 구조체 선언법
int main()
{
    x.a = 15; // a가 15를 가짐
    y.b = 20; // b가 20을 가짐
    x=y; // y에 x가 전부 할당됨.

    return 0;
}
