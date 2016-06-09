#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Programa Fibonacci usando formula fechada
// Melhor complexidade:
// O(log n)
int fib_op(int x)
{
    double fibx =(1/sqrt(5))*((pow(((1+sqrt(5))/2),x)- pow(((1-sqrt(5))/2),x)));// função matematica usada para a função de recorrencia
    return fibx;//o intuito é não haver chamadas de recursão
}

/*O Programa main é apenas um teste para ver se o programa funciona certo com números inteiros*/
int main ( int argc, char *argv[] )
{
    printf("%d\n", fib_op(30));
    return 0;
}
