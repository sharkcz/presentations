#include <stdio.h>

short factorial(short n)
{
    if (n==0 || n==1) return 1;
    return n*factorial(n-1);
}

int main(int argc, char **argv)
{
    printf("%d\n", factorial(8));
    return 0;
}

