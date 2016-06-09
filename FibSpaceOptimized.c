#include <stdlib.h>
#include <stdio.h>

// Fibonacci com Otimização de Espaço
// Complexidade:
// O(n)
int fib_space(int n)
{
    int a = 0, b = 1, c , i;
    if (n == 0)
        return a;
    for (i=2;i<=n;i++)
    {
        c = a+b; // Faz as somas dos termos
        a = b; // Armazena em a o ultimo valor
        b = c; // E iguala c a b para memorizar o valor anterior
    }
    return b;
}


int main ( int argc, char *argv[] )
{
    int n = atoi(argv[1]);
    printf("%d\n", fib_space(n));
    return 0;
}
