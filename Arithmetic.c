#include <stdio.h>

int main(int argc, char **argv) 
{
    int number, sum, count;
    float average;
    printf("Input number: ");

    scanf("%d", &number);

    sum = (number % 10) + ((number / 10) % 10) + ((number / 100) % 10) + (number / 1000);
    count = 4;
    average = (float)sum / count;

    printf("%.2f\n", average);

    return 0;
}