#include <stdio.h>
#include <stdlib.h>

// Fibonacci recursivo
// Complexidade:
// O(2^n)
int fib_rec(int n)
{
    if(n<=0)
        return 0;
    if(n<=1)
        return 1;
    else return fib_rec(n-1)+fib_rec(n-2);
}


int main ( int argc, char *argv[] )
{
    int n = atoi(argv[1]);
    printf("%d\n", fib_rec(n));
    return 0;
}
