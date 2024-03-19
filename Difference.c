#include <stdio.h>


int main(int argc, char **argv) 
{
    int a, b;
    printf("Input number: ");
    scanf("%d%d",&a,&b);
    int difference = a - b;
    printf("%d %d\n", a, b);
    printf("%d", difference);
    return 0;
}