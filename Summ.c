#include <stdio.h>


int main(int argc, char **argv) 
{
    int a, b, c;
    printf("Input number: ");
    scanf("%d%d%d",&a,&b,&c);
    int sum = a + b + c;
    printf("%d+%d+%d=%d", a, b, c, sum);
    return 0;
}
