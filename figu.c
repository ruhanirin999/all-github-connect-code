#include<stdio.h>
int addValue(int a, int b);
int mulValue(int x, int y);
int main()
{
    int v1, v2, add,mul;
    printf("Enter 1st value:\n");
    scanf("%d",&v1);
    printf("Enter 2nd value:\n");
    scanf("%d",&v2);
    add = addValue(v1,v2);
    mul = mulValue(v1,v2);

    printf("addition result: %d\n",add);
    printf("multiplication result: %d\n",mul);
}
int addValue(int a, int b)
{
    int res;
    res = a+b;
    return res;
}
int mulValue(int x, int y)
{
    int res;
    res = x*y;
    return res;
}
