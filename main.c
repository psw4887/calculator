/*
v1.0
2022-03-31
*/

#include <stdio.h>

int additional(int,int);

int main(int argc, char* agv[])
{
    int a,b,c;
    printf("숫자 두개를 입력해주세요 (예> 1 2): ");
    scanf("%d %d",&a, &b);
    c = add(a,b)
    printf("add = %d\n",c);
}

int additional (int a, int b)
{
    return a + b;
}